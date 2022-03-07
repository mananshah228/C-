#include <iostream>

using namespace std;

class Distance {

    int feet, inch;

    public:
        // constructor called
        Distance(int x, int y) {        // parameterized constructor

            feet = x;
            inch = y;

            cout << "Feet: " << feet << endl;
            cout << "Inch: " << inch << endl;
        }
};

int main() {

    Distance d1(1,2);       // invoking constructor with parameters

    return 0;
}