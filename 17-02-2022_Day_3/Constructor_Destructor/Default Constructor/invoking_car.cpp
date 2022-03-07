#include <iostream>

using namespace std;

class car {

    float mileage;

    public:
        // Constructor called
        car() {
            cin >> mileage;
        }
};

int main() {

    car c1,c2;      // invoking constructor
    return 0;
}