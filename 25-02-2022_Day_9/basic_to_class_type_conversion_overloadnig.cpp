// basic type to class type conversion...........usnig overloading (casting operator)

#include <iostream>

using namespace std;

class Time {

    int hour, min;

    public:
        Time() {
            cout << "Default\n" << endl;
        }

        void operator =(int x) {

            cout << "inside overloading\n";

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