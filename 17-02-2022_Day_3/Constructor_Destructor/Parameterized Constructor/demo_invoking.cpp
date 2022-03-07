#include <iostream>

using namespace std;

class demo {
    
    int m,n;

    public:
        // constructor called
        demo(int x, int y) {        // parameterized constructor

            m=x;
            n=y;

            cout << "Constructor called";
        }
};

int main() {

    demo d1(5,6);       // invoking constructor with parameters
    
    return 0;
}