#include <iostream>

using namespace std;

//maximum stack size
int STACK_FULL = 5;
//initialising the top
int top = 2;
//initialising the elements in the stack
int a[5] = {2, 3, 5};

void push(int stack_value);
void pop();
void display_stack();

int main()
{
    cout << "SIMULATION OF STACK OPERATIONS" << "\n\n";

    push(10);
    display_stack();
    push(23);
    display_stack();
    pop();
    display_stack();
    push(10);
    display_stack();
    push(23);
    display_stack();
    push(14);
    display_stack();
}

void pop()
{
    if(top < 0)
    {
        cout << "Stack is Empty!" << "\n";
    }
    else
    {
        top = top - 1;
        cout << "Popped an element" << "\n";
    }
}

void push(int stack_value)
{
    if(top == STACK_FULL)
    {
        cout << "Stack Overflow!" << "\n";
    }
    else
    {
        top++;
        a[top] = stack_value;
        cout << "Pushed " << stack_value << " into the stack" << "\n";
    }
}

void display_stack()
{
    cout << "\n";
    cout << "The contents of the stack:" << "\n";
    cout << "+++++++++++++++++" << "\n";
    cout << "+ "<< "top" << "\t+ " << "value" << "\t+" << "\n";
    cout << "+++++++++++++++++" << "\n";

    int loop_value = top;
    while(loop_value != -1)
    {
        cout << "+ "<< loop_value << "\t+ " << a[loop_value] << "\t+" << "\n";
        cout << "+++++++++++++++++" << "\n";

        loop_value--;
    }
    cout << "\n";
}

