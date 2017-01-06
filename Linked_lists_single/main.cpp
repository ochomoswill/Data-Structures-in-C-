#include <iostream>
#include <cstdio>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *H;

//function to print the list
void print_sLL(struct node *n)
{
    cout << "\n";
    cout << "Below is the Singly Linked List :" << "\n\n";
    cout << "++++++++++++++++++++++++++++++++++++++++++++" << "\n\n";
    cout << "|    " << "Memory" << "      |  " << "Data" << "   |    " << "P->L       |" << "\n\n";
    cout << "++++++++++++++++++++++++++++++++++++++++++++" << "\n\n";
    while(n != NULL)
    {
        cout << "|    " << n << "    |    " << n->data << "    |    " << n->next << "   |" << "\n\n";
        cout << "++++++++++++++++++++++++++++++++++++++++++++" << "\n\n";
        n = n->next;
    }
}

//function to create the list
void create_sLL(int n)
{
    cout << "\n";
    cout << "######################################################" << "\n\n";
    cout << "\t CREATION OF SINGLY LINKED LIST" <<"\n\n";
    cout << "######################################################" << "\n\n";
    int list_value;
    node *P;
    node *Q;    

    cout << "\n";
    for(int i=0; i< n; i++)
    {
    	//creating a new node
        Q = new (struct node);

        cout << "List item " << i+1 << " :" << "\n";
        //reading the user input
        cin >> list_value;


        //populating the new node
        Q->data = list_value;
        //creating the first node
        if(i== 0)
        {
            H = Q;
            P = Q;
        }
        else
        {
        	//appending the new nodes to the linked list
            P->next = Q;
            P = Q;

        }
    }
	
	//assigning NULL to right link of the last node
    P->next = NULL;
    
    P=NULL;
    Q=NULL;
}

//function to insert into the list
void insert_sLL()
{

    cout << "\n";
    cout << "######################################################" << "\n\n";
    cout << "\t INSERTION INTO SINGLY LINKED LIST" <<"\n\n";
    cout << "######################################################" << "\n\n";

    int insert_value, pos, insert_option;
    bool found = false;
    //ascertaining if the linked list exists
    if(H == NULL)
    {
        cout << "Null list" << "\n";
    }
    else
    {
        node *P;
        node *Q;

        P = H;

        cout << "\n";
        cout << "Insertion after which element :" << "\n";
        //reading the element to be inserted after
        cin >> pos;
		
		//new node
        Q = new (struct node);
		
		//checking if the first node is the desired node
        if(P->data == pos)
        {
            cout << "\n";
            cout << "Where do you wish to insert:" << "\n";
            cout << "\t 101: Insert before." << "\n";
            cout << "\t 102: Insert after." << "\n";
            //reading user's first node operation
            cin >> insert_option;


            switch (insert_option)
            {
            	//insertion before the first node
                case 101:
                    cout << "\n";
                    cout << "Which element would you like to insert before the first element?" << "\n";
                    //reading value to be inserted
                    cin >> insert_value;

                    Q->data = insert_value;
                    Q->next = P;
					//assigning head pointer to the new node
                    H = Q;
                break;
                
                //insertion after the first node
                case 102:
                    cout << "\n";
                    cout << "Which element would you like to insert after the first element?" << "\n";
                    //reading value to be inserted 
                    cin >> insert_value;

                    Q->data = insert_value;
                    Q->next = P->next;
                    P->next = Q;
                break;
            }
        }
        else
        {

            P = P->next;

			//looping through the linked list
            while(P != NULL)
            {
            	//checking for the desired node
                if(P->data == pos)
                {
                    cout << "\n";
                    cout << "Which element do you wish to insert after " << pos << ":" << "\n";
                    //reading value to be inserted 
                    cin >> insert_value;
                    Q->data = insert_value;
                    
                    Q->next = P->next;
                    P->next = Q;
                    //indicating desired node is found
                    found = true;
                    break;
                }
                else
                {
                	//indicating desired node is not found 
                    found = false;
                }
                //moving to the next node
                P = P->next;
            }
			//message if the desired node is not found
            if(found == false)
            {
                cout << "\n";
                cout << "The element doesn't exist in the list." << "\n";
            }

        }

        P = NULL;
        Q = NULL;
    }
}

//function to delete the list
void delete_sLL()
{
    cout << "\n";
    cout << "######################################################" << "\n\n";
    cout << "\t DELETION FROM SINGLY LINKED LIST" <<"\n\n";
    cout << "######################################################" << "\n\n";

    int delete_value;
    bool found;
    //ascertaining if the linked list exists
    if(H == NULL)
    {
        cout << "\n";
        cout << "List doesn't exist" << "\n";
    }
    else
    {
        node *P;
        P = H;

        cout << "\n";
        cout << "Which element do you wish to delete :" << "\n";
        //reading the value to be deleted
        cin >> delete_value;

		//checking if the first node is the one to be deleted
        if(P->data == delete_value)
        {
            H = P->next;
            P = NULL;
        }
        else
        {
        	//looping through the linked list
            while(P->next != NULL)
            {
                if(P->next->data == delete_value)
                {
                    P->next = P->next->next;
                    
                    //indicating desired node is found 
                    found = true;
                    
                    break;
                }
                else
                {
                	//indicating desired node is not found 
                    found = false;
                }
				//moving to the next node
                P = P->next;
            }
			
			//message if the desired node is not found
            if(found == false)
            {
                cout << "\n";
                cout << "The element doesn't exist in the list." << "\n";
            }
        }
        P = NULL;
    }
}

//function to display the menu
void operations()
{
    char option;
    int operation_option;
    cout << "\n";
    cout << "Which operation do you wish to perform on the singly linked list?" << "\n";
    cout << "\t 201: For Insertion into the Linked List." << "\n";
    cout << "\t 202: For Deletion from the Linked List." << "\n";
    cin >> operation_option;

    switch (operation_option)
    {
        case 201:
            insert_sLL();
            print_sLL(H);
            break;
        case 202:
            delete_sLL();
            print_sLL(H);
            break;
    }

    cout << "Do you wish to proceed? (Y or N)" << "\n";
    cin >> option;
    
    if(option == 'N')
    {        
        cout << "Thank you for having a look at this Implementation of a Singly Linked List." << "\n";
    	return;
	
	}
	else if(option == 'Y')
	{		
        operations(); 
    	
	}
    
}

int main()
{
    int size_sLL;

    cout << "Welcome." << "\n";
    cout << "First off, let's create the list:" << "\n";
    cout << "Size of list: " << "\n";
    cin >> size_sLL;
    create_sLL(size_sLL);
    print_sLL(H);

    operations();    

    return 0;
}
