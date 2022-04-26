// 10-03-2022 quiz program question 1

#include <iostream>

using namespace std;

class A {
    
    public:
        void displayA() {
            cout << "class A";
        }
};

class B {
    
    public:
        void displayB() {
            cout << "class B";
        }
};

class C: public A {
    
    public:
        void displayC() {
            cout << "class C";
        }
};

class D: public B {
    
    public:
        void displayD() {
            cout << "class D";
        }
};

class E: public C, public D {
    
    public:
        void displayE() {
            cout << "class E";
        }
};

class F: public E {
    
    public:
        void displayF() {
            cout << "class F";
        }
};

int main()
{
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;
    
    // a.displayA();       // execute
    // b.displayA();       // will not execute
    // b.displayC();       // will not execute
    // b.displayD();       // will not execute
    
    // f.displayA();       // execute
    // f.displayC();       // execute
    // f.displayB();       // execute
    // f.displayE();       // execute
    
    // e.displayA();       // execute
    // e.displayB();       // execute
    // e.displayC();       // execute

    return 0;
}
