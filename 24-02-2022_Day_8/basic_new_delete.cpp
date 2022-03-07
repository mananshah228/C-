// basic new/delete.


#include <iostream>

using namespace std;

int main() {

    int *ptr1, *ptr2, sum;      // declaration of variable
    
    // allocated memory space using new operator
    ptr1 = new int;
    ptr2 = new int;
    
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