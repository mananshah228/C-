// basic type to class type conversion...........usnig constructor

#include <iostream>

using namespace std;

class Time {

    int hour, min;

    public:
        Time() {
            cout << "Default\n" << endl;
        }
        Time(int x) {

            cout << "inside the Time params\n";

            hour = x/60;
            min = x%60;
        }

        void display() {

            cout << "Hour: " << hour << " min: " << min << endl;
        }
};

int main() {

    int x = 130;
    Time T1;

    T1 = x;
    
    T1.display();

    return 0;
}