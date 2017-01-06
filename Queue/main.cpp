#include <iostream>
using namespace std;

//max queue size
#define N 10
//initialising front and rear
int f = -1;
int r = -1;
//initialising the array for queue simulation
int ar_Q[N];

void enqueue(int queue_value);
void display_queue();
void dequeue();

int main()
{
    
       enqueue(5);
       enqueue(4);
       enqueue(3);       
       enqueue(2);
       enqueue(1);
       display_queue();
       dequeue();
       display_queue();
       dequeue();
       display_queue();
       
    
    
    
    return 0;

}

void enqueue(int queue_value)
{
	
    if (r == N - 1)
    {
    	cout <<"The queue is full." << "\n";
	}    
    else
    {    	
 	       f = 0;
 	       cout << "Enqueued Element : " << queue_value <<"\n";
 	       
 	       r = r + 1;
 	       ar_Q[r] = queue_value;

    }     

}

void dequeue()
{
	if (f == - 1 || f > r)
    {
        cout << "Queue is empty "<< "\n";
        return ;
    }
    else
    {
        cout << "Element deleted from queue is :" << ar_Q[f] << "\n";
        f = f + 1;
    }
}

void display_queue()
{
    
    if (f == - 1)
    {
    	cout << "Queue is empty !" << " \n";	
	}
        
    else
    {
        cout << "The content of the Queue:" << "\n";
        for (int i = f; i <= r; i++)
        {
        	cout << ar_Q[i] << "\n";
		}
         
    }
    
}
