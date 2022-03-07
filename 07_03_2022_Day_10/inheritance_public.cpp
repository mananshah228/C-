// inheritance basic

#include <iostream>

using namespace std;

// base class or parent class
class person {
    
    int age=30;
    
    public:
        void displayAge() {
            cout << "Age: " << age;
        }
    
};

// derieved class or child class
class doctor: public person {
    
    public:
        void displayDoctorAge() {
            cout << "inside displayDoctorAge";
        }
};

int main()
{
    doctor d1;
    
    d1.displayAge();        // child class access member function of parent class
    
    return 0;
}
