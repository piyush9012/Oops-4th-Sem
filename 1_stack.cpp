#include <iostream>
using namespace std;
#define size 5

class stack {
    int stack[size];
    int top;

public:
    void init() {
        top = 0;
    }
    void push() {
        int i;
        if (top == size) {
            cout << "Stack Overflow" << endl;
            return;
        }
        cout << "Enter the element" << endl;
        cin >> i;
        stack[top] = i;
        top++;
    }
    int pop() {
        if (top == 0)
        {
            cout << "Stack Underflow \n";
            return 1;
        }
        top--;
        cout << "Popped element is " << stack[top] << endl;
        return 0;
    }
    void display() {
        if (top == 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = 0; i < top; i++)
            cout << stack[i] << " ";
        cout << endl;
    }
};

int main() {
    int ch;
    stack s;
    s.init();
    while (1) {
        cout <<endl<< "Select the Operation"<<endl;
        cout <<"--------------------"<<endl;
        cout<<"1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cin >> ch;
        switch (ch) {
            case 1: s.push(); break;
            case 2: s.pop(); break;
            case 3: s.display(); break;
            case 4: return 0;
            default: cout<<"Invalid Input...!";
        }
    }
}
