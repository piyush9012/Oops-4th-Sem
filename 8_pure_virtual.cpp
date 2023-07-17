#include <iostream>
using namespace std;
class rupees
{
    public:
        float rupee;
        virtual void conv() = 0;
        void disp() {
            cout << "is eqvivalent to " << rupee << " Indian Rupees.\n";
        }
};

class dollar : public rupees
{
    float dol;
    public:
        void conv() {
            cout<<"Enter currency in dollar: ";
            cin>>dol;
            rupee = 54.3 * dol;
            cout<<dol<<" dollars ";
            disp();
        }
};

class euro : public rupees
{
    float er;
    public:
        void conv()  {
            cout<<"Enter currency in Euro: ";
            cin>>er;
            rupee = 70.2*er;
            cout<<er<<" euro ";
            disp();
        }
};

class pound : public rupees
{
    float pnd;
    public:
        void conv() {
            cout<<"Enter currency in pound: ";
            cin>>pnd;
            rupee = 81.1*pnd;
            cout<<pnd<<" pound ";
            disp();
        }
};

int main()
{
    int c;
    dollar d;
    euro e;
    pound p;
    cout<<endl<<"Which Currency Conversion do you want to perform?\n";
    while (1) {
        cout<<"1.$ to Rs.\n2.Euro to Rs.\n3.Pound to Rs.\n4.Exit"<<endl;
        cin>>c;
        switch (c) {
            case 1: d.conv(); break;
            case 2: e.conv(); break;
            case 3: p.conv(); break;
            default: return 0;
        }
    }
}
