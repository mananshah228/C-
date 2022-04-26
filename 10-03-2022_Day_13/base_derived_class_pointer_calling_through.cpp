// base and derived class pointer and calling function using pointer

#include <iostream>

using namespace std;

class base {
    
    public:
        int b;
        
        void show() {
            cout <<"\nb="<<b;
        }
};

class derived: public base {
    
    public:
        int d;
        
        void show() {
            cout << "\nb=" << b << "\nd=" << d;
        }
    
};

int main()
{
    base b1;
    derived d1;
    
    base *bptr;
    bptr = &b1;
    cout << "\nbase class pointer assign address of base class object";
    bptr->b=100;
    bptr->show();
    bptr=&d1;
    bptr->b=200;
    cout << "\nbase class pointer assign address of derived class object";
    bptr->show();
    derived *dptr;
    dptr=&d1;
    cout << "\nderived class pointer assign address of derived class object";
    dptr->d=300;
    dptr->show();

    return 0;
}
