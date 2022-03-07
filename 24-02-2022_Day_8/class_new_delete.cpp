// basic new/delete.

#include <iostream>

using namespace std;

class A {

    public:
        int i,j;

    A() {

        cout << "inside the const" << endl;
        i=0;
        j=10;
    }
};

int main() {

    int *ptr1, *ptr2, sum;      // declaration of variable
    A a1,*a2;
    
    // allocated memory space using new operator
    ptr1 = new int;
    ptr2 = new int;

    //ptr2 = new int [5];     // initializing array dynamically
    cout << "before the new operator in A\n";
    
    a2 = new A;
    
    cout << "Enter 1st number: ";
    cin >> *ptr1;
    
    cout << "Enter 2nd number: ";
    cin >> *ptr2;
    
    sum = *ptr1 + *ptr2;
    
    cout << "The sum of pointer variable = " << sum;
    
    // delete pointer variable
    delete ptr1;
    delete ptr2;
    
    return 0;
}