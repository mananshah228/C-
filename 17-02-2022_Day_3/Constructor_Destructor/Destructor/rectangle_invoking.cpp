#include <iostream>

using namespace std;

class rectangle {

    int width, height;

    public:
        rectangle() {       // default constructor

            width = 5;
            height = 6;

            cout << "Constructor called" << endl;
        }

        ~rectangle() {      // destructor
            cout << "Destructor called";
        }
};

int main() {

    rectangle r1;       // invoing of constructor and at the exit of program destructor gets automatically invoked

    return 0;
}