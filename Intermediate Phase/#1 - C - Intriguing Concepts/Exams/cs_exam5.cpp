
#include <thread>
#include <iostream>
#include <random>
#include <time.h>
#include <string>
#include <mutex>
using namespace std;

mutex plane_mutex;
mutex cin_mutex;

int random_range(const int & min, const int & max) 
{
    static mt19937 generator(time(0));
    uniform_int_distribution<int> distribution(min,max);
    return distribution(generator);
}

struct passenger //the passenger structure
{
	long int passengerID;
	string nameAndSurname;
	bool reserved;
	passenger(long int id = 0, string nameSurname="", bool r = false): 
		passengerID(id), nameAndSurname(nameSurname), reserved(r) 
	{}
};

passenger boeing747Plane[50][6];//the plane with 50 rows, each with 6 passengers

//a simple function used for reserving plane seats
void reserveASeat()
{
	long int id;
	string nameSurname;
	cin>>id>>nameSurname;//read passenger’s info (name, surname, id)
    cin_mutex.lock();
    cin.clear();
    fflush(stdin);
    cin_mutex.unlock();
	passenger p(id,nameSurname,true);//new passenger

	int i, j;
	i = random_range(0,49);//randomly choose the row
	j = random_range(0,5);//randomly choose the seat in that row
	
    while(true)
	{
		if(boeing747Plane[i][j].reserved==false) //if the seat is not reserved, reserve it
		{
            plane_mutex.lock();
			boeing747Plane[i][j] = p; //the new passenger got his plane seat
            plane_mutex.unlock();

			break;
			
		}
		else //otherwise find another seat
		{
			i = random_range(0,49);//randomly choose the row
			j = random_range(0,5);//randomly choose the seat in that row
		}		
	}	
}

void cancelReservation()
{	
	long int id;
	string nameSurname;
	bool found = false;
	cin>>id>>nameSurname; //the info of the passenger that will cancel his/hers reservation
    cin_mutex.lock();
    cin.clear();
    fflush(stdin);
    cin_mutex.unlock();
	passenger p(0,"",false);//canceled reservation to be put in the corresponding seat

	for(int i = 0; i<50 && !found; i++)//find the passenger in each row
	{
		for(int j = 0; j<6 && !found; j++)//and each seats of the row
		{
			if((boeing747Plane[i][j].nameAndSurname == nameSurname) &&
				(boeing747Plane[i][j].passengerID == id)) //if passenger found
			{				
				found = true; //the passenger found bool is set to true			
                plane_mutex.lock();
				boeing747Plane[i][j] = p; //the seat reservation is canceled	
                plane_mutex.unlock();			
			}
		}
	}	

}

int main()
{
  int i;
  thread reservationThread[3];
  for (i=0; i < 3; i++)
  {
	  reservationThread[i] = thread(&reserveASeat);
	  reservationThread[i].join();
  }
  
  thread cancelReservationThread[1];
  for (i=0; i < 1; i++)
  {
	  cancelReservationThread[i] = thread(&cancelReservation);
	  cancelReservationThread[i].join();
  }    

  return 0;
}


