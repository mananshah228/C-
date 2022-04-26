// virtual function

#include <iostream>

using namespace std;

class base {
    
    public:
        virtual void show() {
            cout <<"base\n";
        }
};

class derived1: public base {
    
    public:
        void show() {
            cout << "derv1\n";
        }
};

class derived2: public base {
    
    public:
        void show() {
            cout << "derv2\n";
        }
};

int main()
{
    derived1 dv1;
    derived2 dv2;
    base* ptr;
    
    ptr = &dv1;
    ptr->show();
    ptr = &dv2;
    ptr->show();

    return 0;
}
