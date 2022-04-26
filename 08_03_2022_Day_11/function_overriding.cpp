// function overriding

#include <iostream>

using namespace std;

class ABC {     // base or parent class
    public:
        void display() {
            cout << "this is parent class\n";
        }
};

class XYZ: public ABC {     // derive or child class
    public:
        void display() {
            cout << "this is child class\n";        // function overriding as base class has same signature parameter
        }
};
int main()
{
    XYZ x;      // child class object
    
    x.display();        // calling child class display function
    x.ABC::display();       // calling parent class display functon by using scope resolution

    return 0;
}
