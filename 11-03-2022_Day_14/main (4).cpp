// 10-03-2022 quiz program question 3

#include <iostream>

using namespace std;

class A {
    
    public:
        void displayA() {
            cout << "class A";
        }
};

class B: public A {
    
    public:
        void displayB() {
            cout << "class B";
        }
};

class C: public B {
    
    public:
        void displayC() {
            cout << "class C";
        }
};

class D: public B, public C {
    
    public:
        void displayD() {
            cout << "class D";
        }
};

int main()
{
    A a;
    B b;
    C c;
    D d;
    
    // c.displayA();       // execute
    // b.displayC();       // will not execute
    // b.displayD();       // will not execute
    // c.displayB();       // execute
    // d.displayB();       // will not execute
    // d.displayC();       // execute

    return 0;
}
