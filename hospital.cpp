#include <iostream>
using namespace std;

class Hospital
{
    protected:
        string name;
        int age;
        string gender;
        string diagnosis;
    public:
        void getdata(){
            cout << "Enter name of the patient: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter gender: ";
            cin >> gender;
            cout <<"Enter disease: ";
            cin>> diagnosis;
        }
        void display(){
            cout << name<<"\t";
            cout << age<<"\t";
            cout << gender<<"\t";
            cout << diagnosis<<"\t";
        }
};

class PediatricPatient : public Hospital
{
public:
    string vaccine;
    void get(){
        getdata();
        cout << "Enter the name of the vaccine to be given: ";
        cin >> vaccine;
    }
    void put(){
        if (age < 12) {
            display();
            cout << vaccine;
            cout << "\n";
        }
        else {
            cout << "Age greater than 12, not a Pediatric patient\n";
        }
    }
};

int main(){
    Hospital h[5];
    int n;
    cout << "Enter the number of patients: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        h[i].getdata();
    }
    cout << "\nPatient database:\n";
    cout << "NAME \t AGE \t GENDER\tDIAGNOSIS\n";
    for (int i = 0; i < n; i++) {
        h[i].display();
        cout <<endl;
    }

    PediatricPatient a1[5];
    cout << "\nEnter the number of pediatric patients: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        a1[i].get();
    }
    cout << "\nPediatric Patient database:\n";
    cout << "NAME \t AGE \t GENDER\tDIAGNOSIS\tVACCINE\n";
    for (int i = 0; i < n; i++) {
        a1[i].put();
    }
    return 0;
}
