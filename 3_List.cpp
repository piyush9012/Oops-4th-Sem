#include <iostream>
using namespace std;

struct nod
{
    int data;
    struct nod *next;
};

typedef struct nod node;
class list
{
    node *head;
    public:
        list(){
            head = NULL;
        }
        void insert()
        {
            int num;
            cout<<"Enter the number"<<endl;   //Input number
            cin>>num;
            node *p = new node;    // Newnode
            p->data = num;
            p->next = head;
            head = p;
        }

        void delet()
        {
            node *temp = head;
            if (head == NULL)
                cout<<"No elements to delete\n"<<endl;
            else
            {
                cout <<"The deleted elements is: "<<f->data<<endl;
                head = head->next;
                delete temp;
                cout<<"Deletion successfull"<<endl;
            }
        }

        void display()
        {
            node *temp = head;
            if (head == NULL)
                cout<<"List is empty"<<endl;
            else{
                cout<<"Elements in the list are: ";
                while (temp != NULL){
                    cout<<temp->data<<" ";
                    temp = temp->next;
                }
                cout<<endl;
            }
        }
};

int main()
{
    int ch;
    list ob;
    while (1){
        cout<<endl<<"Select the Operation"<<endl;
        cout<<"--------------------"<<endl;
        cout<<"1. Insert\n2. Delete\n3. Display\n4. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch (ch){
            case 1: ob.insert();  break;
            case 2: ob.delet();   break;
            case 3: ob.display(); break;
            case 4: return 0;
            default: cout <<"Invalid choice \n"; break;
        }
    }
}
