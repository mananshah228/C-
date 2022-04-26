/******************************************************************************

Create a class student having private members marks, name and public
members rollno, getdata(), printdata(). Demonstrate concept of pointer to
class members for array of 3 objects.

error -> runtime
*******************************************************************************/
#include <iostream>

using namespace std;

class student {

        int marks;
        char name[10];
    
    public:
        int rollno;
        
        void getdata() {
            cout << "Enter roll numer: " << endl;
            cin >> rollno;
            
            cout << "Enter name: " << endl;
            cin >> name;
            
            cout << "Enter marks: " << endl;
            cin >> marks;
        }
        
        int printdata() {
            // cout << rollno << endl;
            // cout << name << endl;
            // cout << marks << endl;
            
            return marks;
        }
};

int main()
{
    student s[3];
    student *ptr = s;
    
    for(int i=0;i<3;i++) {
        ptr->getdata();
        ptr++;
    }
    
    for(int i=0;i<3;i++) {
        cout << ptr->printdata() << endl;
    }

    return 0;
}