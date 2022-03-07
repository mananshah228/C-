// swapping values using call by reference

#include <iostream>

using namespace std;

void swap(int *a, int *b) {

    int temp;

    // swapping of values by pointer
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {

    int a = 10, b = 20, *p, *q;
    
    // storing of address in pointer variable
    p = &a;
    q = &b;

    swap(p, q); // invoking swap function

    cout << a << endl;
    cout << b;
}