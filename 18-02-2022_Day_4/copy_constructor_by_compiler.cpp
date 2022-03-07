// code to demonstrate, copy costructor calls made by compiler

#include <iostream>

using namespace std;

class A {

    int i=10;

    public:
        A() {       // default constructor
            cout << "Inside the constructor" << endl << endl;
        }

        A(A &obj) {     // copy constructor
            cout << "Inside the copy constructor" << endl << endl;
        }

        void add(A ob, A obj2) {        // passing more than one object to a function which call the 
                                        // other constructor, copy constructor calls made by complier 
            cout << "Inside the ADD() function " << endl << endl;
        }

        A add_ret() {
            
            A temp;     // default constructor call made by local variable

            cout << "Inside the ADD_RET() function " << endl << endl;
            return temp;
        }
};

int main() {
    
    // testing various result by passing objects to constructor
    A obj1, obj3;
    A obj2 = obj1;
    obj1.add(obj1, obj1);
    obj3 = obj1.add_ret();

    return 0;
}