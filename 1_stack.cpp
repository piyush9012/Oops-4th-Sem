#include <iostream>
using namespace std;
#define size 5

class stack
{
    int stack[size];
    int top;
    public:
        void init();
        void push();
        int pop();
        void display();
};

void stack::init()
{
    top = 0;
}

void stack::push()
{
    int i;
    if (top == size)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }
    cout <<"Enter the element"<<endl;
    cin>>i;
    stack[top] = i;
    top++;
}

int stack::pop()
{
    if (top == 0)
    {
        cout <<"Stack Underflow \n";
        return 1;
    }
    top--;
    cout<<"Popped element is "<<stack[top]<<endl;
    return 0;
}

void stack::display()
{
    if (top == 0)
    {
        cout <<"Stack is empty"<<endl;
        return;
    }
    for (int i = 0; i < top; i++)
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int ch, i;
    stack s;
    s.init();
    while (1)
    {
        cout<<endl<<"Select the Operation"<<endl;
        cout<<"--------------------"<<endl;
        cout <<"1. Push\n2. Pop\n3. Display\n";
        cin>>ch;
        switch (ch)
        {
            case 1: s.push(); break;
            case 2: s.pop(); break;
            case 3: s.display(); break;
            default: return 0;
        }
    }
}
