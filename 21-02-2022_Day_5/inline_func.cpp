// inline function demostration

#include <iostream>

using namespace std;

// inline function
inline int cube(int x) {
    return x*x*x;
}

int main(){

    int n = 3;

    cout << "Cube of " << n << " is " << cube(n);        //invoking inline function

    return 0;
}