// derived class constructor

#include <iostream>

using namespace std;

class Base {
    
    int x;
    
    public:
        Base() {
            cout << "base default constructor\n";
        }
        
        Base(int a) {
            cout << "base parameterized constructor\n";
        }
};

class Derieved: public Base {
    
    int y;
    
    public:
        Derieved() {
            cout << "derieved default constructor\n";
        }
        
        Derieved(int i) {
            cout << "derieved paremeterized constructor\n";
        }
};

int main()
{
    Base b;
    Derieved d1;
    Derieved d2(10);
    Base b1(1);

    return 0;
}
