#include <iostream>

using namespace std;

class demo {

    int m,n;

    public:
        demo(int x, int y) {        // parameterized constructor

            m=x;
            n=y;

            cout << "Parameterized Constructor" << endl;
        }

        demo(demo &x) {     // copy constructor

            m = x.m;
            n = x.n;

            cout << "Copy Constructor" << endl;
        }
};

int main() {

    demo obj1(5,6);     // calling of parameterized constructor
    demo obj2(obj1);        // calling of copy constructor
    demo obj3 = obj1;       // calling of copy constructor
    
    return 0;
}