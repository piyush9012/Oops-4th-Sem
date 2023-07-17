#include <iostream>
using namespace std;
class comp
{
    int r, i;
    public:
    void scan(){
        cout <<"Enter real & imaginary part of complex no."<<endl;
        cin >> r >> i;
    }
    void show(){
        if (i < 0)
            cout<<"Complex nunber is "<<r<<i<<"i"<<endl;
        else
            cout<<"Complex nunber is "<<r<<" + "<<i<<"i"<<endl;
    }
    comp operator+(comp x){
        comp a;
        a.r = x.r + r;
        a.i = x.i + i;
        return a;
    }
    comp operator-(comp x){
        comp b;
        b.r = r - x.r;
        b.i = i - x.i;
        return b;
    }
    friend comp operator++(comp &a);
    friend comp operator+(int a, comp &x);
    friend comp operator+(comp &x, int b);
    comp operator=(comp p){
        r = p.r;
        i = p.i;
        return *this;
    }
};

comp operator++(comp &a)
{
    a.r++;
    return a;
}

comp operator+(int a, comp &x)
{
    // comp p;
    x.r = a + x.r;
    // return p;
}

comp operator+(comp &x, int b)
{
    x.r = x.r + b;
    // return q;
}

int main()
{
    comp a, b, c;
    int x;
    a.scan();
    b.scan();
    a.show();
    b.show();
    cout << "Adding two complex nunbers"<<endl;
    (a + b).show();
    cout << "Subtracting two complex no's"<<endl;
    (a - b).show();
    c = a;
    cout << "Assign obj a to obj c"<<endl;
    c.show();
    operator++(a);
    cout << "After incrementing real part of a"<<endl;
    a.show();
    cout << "Enter an integer"<<endl;
    cin >> x;
    cout << "Adding integer to complex no."<<endl;
    operator+(x, a);
    a.show();
    operator+(c, x);
    c.show();
    return 0;
}
