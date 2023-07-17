#include <iostream>
using namespace std;
class divide
{
    int a, b;
    public:
        void compute(){
            cout<<"Enter two integers"<<endl;
            cin>>a>>b;
            try{
                if (b != 0)
                    cout<<a/b<<endl;
                else
                    throw b;
            } catch (...){
                cout<<"Division by zero(error)\n";
            }
        }
};

class neg
{
    int a;
    public:
        void scan(){
            cout<<"Enter age"<<endl;
            cin>>a;
        try{
            if (a>=0)
                cout<<"Age of the person is "<<a<<endl;
            else
                throw a;
        } catch (...){
            cout<<"Please enter positive value for age."<<endl;
        }
    }
};
int main()
{
    int c;
    divide d;
    neg n;
    while (1){
        cout<<endl<<"Select the Operation"<<endl;
        cout<<"--------------------"<<endl;
        cout <<"1.Divide integers\n2.Enter age\n3.Exit"<<endl;
        cin >> c;
        switch (c){
            case 1: d.compute(); break;
            case 2: n.scan(); break;
            default: return 0;
        }
    }
    return 0;
}
