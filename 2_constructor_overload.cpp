#include <iostream>
#include <cstdio>
using namespace std;

class dates
{
    int day, month, year;
    public:
        dates()
        {
            cout<<"Default date: 1/12/2012"<<endl;
        }
        dates(char *d)
        {
            scanf("%d%d%d", &day, &month, &year);
        }
        dates(int d, int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }
        void sd()
        {
            cout<<"Date is: "<<endl;
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }
};

int main()
{
    int d, m, y;
    cout<<"Enter date,month and year"<<endl;
    cin>>d>>m>>y;
    cout<<"Enter date, month and year in a single line"<<endl;
    dates b("d,m,y"), c(d, m, y),e;
    b.sd();
    c.sd();
    return 0;
}
