#include <iostream>
#include <string>
using namespace std;

class IntQueue
{
	private:
		int *queueArray;
		int queueSize;  //capacity of queue
		int front;
		int rear;
		int numItems;  //# of elements currently in the queue
	public:
		IntQueue(int);  //constructor, parameter is capacity
        ~IntQueue();    //the destructor that you should implement
  		void enqueue(int); 
  		void dequeue(int &);
  		bool isEmpty() const; 
  		bool isFull() const;
  		void clear();  //removes all elements
};

IntQueue::~IntQueue(){
    clear();
    free(queueArray);
}

struct StackNode
{
	int value;
	StackNode *next;
};

class DynIntStack
{
	private:
		StackNode *top;

	public:
		DynIntStack(void);
		
~DynIntStack(void);
		
void push(int);
		void pop(int &);
		bool isEmpty(void);
};

DynIntStack::~DynIntStack(){
    StackNode *traverse = top;
    StackNode *tmp;
    while(traverse){
        tmp = traverse->next;
        delete traverse;
        traverse = tmp;
    }
}


int ToInches (int cm)
{
	char c = 'A';
	if(cm==100)
		throw c;
	return cm/2.54;
}

int main()
{
	int height;
	string err="Input cannot be below 0";
	try
	{
		cin >> height;
		try
		{
			if (height <= -1)
				throw err; 
			if (height > 300)
				throw "height exceeds maximum";
			if (height < 30)
				throw height;
			cout << "Person is " << ToInches(height) << " inches tall" << endl;
		}
		catch(const char msg[])
		{
			cout << "Exception occured: " << msg << endl;
		}

		cout << "I am in the middle.\n" << endl;
	}
	catch (int i)
	{
		cout << "Exception occured: Height must be greater than " << i << endl;
	}
	catch (char c)
	{
		cout << "Char exception occured: " << c << endl;
	}
	catch (...)
	{
		cout << "Houston we have a problem, but I do not know what it is :(\n";
	}

	return 0;
}

