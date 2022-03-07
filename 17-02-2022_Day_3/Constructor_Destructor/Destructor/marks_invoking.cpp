#include <iostream>

using namespace std;

class Marks {

    int maths, science;

    public:
        Marks() {       // default constructor
            cout << "Constructor called" << endl;
        }

        ~Marks() {      // destructor
            cout << "Destructor called" << endl;
        }
};

int main() {

    Marks m1,m2;        // invoing of constructor and at the exit of program destructor gets automatically invoked

    return 0;
}