#include <iostream>

using namespace std;

class Rectangle {

    int width, height;

    public:
        // constructor called
        Rectangle() {

            width = 5;
            height = 6;

            cout << "Constructor called";
        }
};

int main() {

    Rectangle r1;   // invoking constructor

    return 0;
}