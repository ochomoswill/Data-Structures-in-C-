#include <iostream>
using namespace std;
 
int main() {
    
	int n;
	
	cout << "How many elements do wish to constitute your linear list?" << "\n";
	//size of linear list
	cin >> n;
	
	//initializing an array of size stated by the user
	int A[n];
 
 	//ascertaining list exists
	if (n > 0)
	{
		cout << "\n";
		cout << "Enter the elements of the list:" << "\n";
		//loop for inserting values into the list
		for(int i=0; i<n; i++)
		{
			cout << "Element" << (i+1) << ":"; 
			cin >> A[i];
		}
		
		cout << "\n";		
		cout << "Below is the created linked list:" << "\n\n";
		//loop for printing the list
		for(int j=0; j<n; j++)
	    {
	        cout << A[j] << "\t";
	    }
 
	}
	else
	{
		cout << "Invalid n!" << "\n";
	}
	
	
	return 0;
}
