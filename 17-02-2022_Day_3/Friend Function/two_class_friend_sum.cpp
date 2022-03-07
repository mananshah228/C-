#include <iostream>

using namespace std;

class XYZ;      //declaring class XYZ
class ABC {

    int numA;

    public:

        void set(int num1) {

            numA = num1;
        }
        friend int add( ABC numA, XYZ numB);        //declaring friend to class ABC
};

class XYZ {

    int numB;

    public:

        void set(int num1) {

            numB = num1;
        }
        friend int add(ABC numA, XYZ numB);     //declaring friend to class XYZ
};

int add(ABC num1, XYZ num2) {       // frined function definition

    return (num1.numA+num2.numB);
}

//initializing of main function
int main() {

    ABC num1;
    XYZ num2;

    num1.set(1);
    num2.set(2);

    cout << "Sum: " << add(num1, num2);
    
    return 0;
}
