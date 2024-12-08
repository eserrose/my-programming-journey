#include <iostream>
#define MAX_NUMBERS 4

using namespace std;

double comparison(double *arr, int n)
{
	double max = arr[0];
    for(int i = 1; i<n; i++) {
        if(arr[i] > max) 
            max = arr[i];
    } 

  return max;
}

int main(){

    double userArray[MAX_NUMBERS];

    double yetAnotherArray[] = {67,64,34,53,-23245,32455/2344, 345.233, 666, -0x12a, 0b011010110, 0777};
    cout << "Max No: " << comparison(yetAnotherArray, 11) << endl;

    int i = 0, userMax;
    cout << "Enter the amount of numbers you have:" << endl; 
    cin >> userMax;
    while(i < MAX_NUMBERS && i < userMax) cin >> userArray[i++];
    cout << "Max No: " << comparison(userArray, userMax < MAX_NUMBERS ? userMax : MAX_NUMBERS) << endl;
}