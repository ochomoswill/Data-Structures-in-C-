
#include <iostream>
using namespace std;


int main()
{
    
  int n = 5;
  //initialising elements in the array
  int A[n] = {12, 13, 14, 15, 16};
  
  int val;
  
  bool found = false;
  
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
  
  if(n > 0)
  {     
     
    cout << "Which element do you wish to delete?" << "\n";
    //read the element to be deleted 
    cin >> val;
    
    for(int i = 0; i<n; i++)
    {
        if(A[i] == val)
        {
            found = true;
            //shifting of the elements
            for(int j=i; j <n-1; j++)
            {
                A[j] = A[j+1];
                
            }
            n = n-1;
            
            
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
            break;
        }
        
    }
  }
  else
  {
      cout << "Empty list" << "\n";
  }
  
  //message if the element is not found
  if(found == false)
  {
      cout << "Sorry, the element doesn't exist in the list" << "\n";
  }
  
    
  
}

