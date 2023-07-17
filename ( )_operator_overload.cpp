#include <iostream>
using namespace std;
class add{
	int a, b;
	public:
		add(){
			cout<<"Default constructor called"<<endl;
			a = 0; b = 0;
		}
		add(int x, int y){
			cout<<"Parametrised constructor called"<<endl;
			a = x; b = y;
		}
		void display(){
			cout<<a<<endl;
			cout<<b<<endl;
		}
		void operator()(int p, int q, int r, int s)  // No restrictions on arguments{
			a = p+q;
			b = r+s;
		}
};
int main()
{
	add b1;
	b1.operator()(5,3,7,12);
	b1.display();
	return 0;
}
