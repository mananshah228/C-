#include <iostream>

using namespace std;

class Rectangle {

    int length, width;

    public:

        Rectangle() {       // default constructor

            cout << "Default Constructor called" << endl;
        }

        Rectangle(int x, int y) {       // parameterized constructor

            length = x;
            width = y;

            cout << "Parameterized Constructor called" << endl;
        }

        Rectangle(Rectangle &x) {       // copy constructor

            length = x.length;
            width = x.width;

            cout << "Copy Constructor called" << endl;
        }
};

int main() {

    Rectangle r1;       // calling of default constructor
    Rectangle r2(1,2);      // calling of parameterized constructor
    Rectangle r3(r2);       // calling of copy constructor

    return 0;
}