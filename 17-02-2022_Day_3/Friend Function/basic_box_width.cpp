#include <iostream>

using namespace std;

class Box {

    double width;

    public:
        void setWidth(double x){        // initializing data member width with the value passed from main function

            width = x;
        }

        friend void printWidth(Box b);      // frined function declaring inside class
};

// defining print function which will be used as friend function inside class box
void printWidth(Box b) {

    cout << "Box width: " << b.width;
}

// Initializing main function
int main() {

    Box b;

    b.setWidth(10.1);
    printWidth(b);

    return 0;
}