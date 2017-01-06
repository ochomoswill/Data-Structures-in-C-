#include <iostream>
using namespace std;



int main()
{
	
  int n = 5;  
  int pos;
  int val;
  
  //initialising element constituting the linear list
  int A[n] = {12, 13, 14, 15, 20};
  
  
  //printing out the linear list
  cout << "\n";
  cout << "Below is the Linear list:" << "\n";
  cout << "++++++++++++++++++++++++++++++++++++++++++++" << "\n\n";
  cout << "|    " << "Position" << "      |  " << "Element              |" << "\n\n";
  cout << "++++++++++++++++++++++++++++++++++++++++++++" << "\n\n";
  for(int i=0; i<n; i++)
  {
      cout << "|    " << i+1 << "             |    " <<  A[i] << "                 |" << "\n\n";
      cout << "++++++++++++++++++++++++++++++++++++++++++++" << "\n\n";
      
  }
  cout <<"\n\n";
  
  
  //ascertaining the linear list exists
  if(n>0)
  {
  
    cout << "Enter the position you wish to insert. " << "\n";
    //read position element is to be inserted
    cin >> pos;
  
    cout << "What value do you wish to insert?" << "\n";
    //reads the element to be inserted
    cin >> val;
    
  	
    if(pos<=n)
    {
        int i = n-1;
        n = n + 1;
        
        //shifting of elements in the linear list
        while(i >=(pos-1))
        {
           A[i+1] = A[i];
           i--;
        }
        //assigning the inputed element to its desired position in the linear list
        A[pos-1] = val;
        
    } 
    else
    {
        A[n] = val;
        n = n + 1;
    }
  }
  else
  {
      cout << "Empty list" << "\n" ;
  }
  
  
  //printing out the new linear list
  cout << "\n";
  cout << "Below is the new Linear list:" << "\n";
  cout << "++++++++++++++++++++++++++++++++++++++++++++" << "\n\n";
  cout << "|    " << "Position" << "      |  " << "Element              |" << "\n\n";
  cout << "++++++++++++++++++++++++++++++++++++++++++++" << "\n\n";
  for(int i=0; i<n; i++)
  {
      cout << "|    " << i+1 << "             |    " <<  A[i] << "                 |" << "\n\n";
      cout << "++++++++++++++++++++++++++++++++++++++++++++" << "\n\n";
      
  }
  cout <<"\n\n";

}

