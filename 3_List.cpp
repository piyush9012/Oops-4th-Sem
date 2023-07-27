#include <iostream>
#include <new>
using namespace std;

struct nod
{
    int data;
    struct nod *next;
};

typedef struct nod node;
class list
{
    node *f;
    public:
        list(){
            f = NULL;
        }
        void ins(int num){
            node *p = new node;
            p->data = num;
            p->next = f;
            f = p;
        }

        void del(){
            node *temp = f;
            if (f == NULL)
                cout<<"No elements to delete\n"<<endl;
            else{
                cout <<"The deleted elements is: "<<f->info<<endl;
                f = f->next;
                delete temp;
                cout<<"Deletion successfull"<<endl;
            }
            return;
        }

        void disp(){
            node *temp = f;
            if (f == NULL)
                cout<<"List is empty"<<endl;
            else{
                cout<<"Elements in the list are: ";
                while (temp != NULL){
                    cout<<" "<<temp->data;
                    temp = temp->next;
                }
                cout<<endl<<endl;
            }
        }
};

int main()
{
    int num, ch=1;
    list ob;
    cout<<endl<<"Select the Operation"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"1. Insert\n2. Delete\n3. Exit"<<endl;
    while (ch){
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch (ch){
            case 1:
                cout<<"Enter the number"<<endl;
                cin>>num;
                ob.ins(num);
                ob.disp();
                break;
            case 2:
                ob.del();
                ob.disp();
                break;
            case 3: return 0;
            default: cout <<"Invalid choice \n"; break;
        }
    }
}
