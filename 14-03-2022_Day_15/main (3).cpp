#include <iostream>

using namespace std;

void Demo() throw(int, double) {
    
    int a = 3.3;
    
    if(a==1) {
        throw a;
    } else if(a==2) {
        throw 'A';
    } else if(a==3) {
        throw 4.5;
    }
}

int main() {
    
    try {
        Demo();
    } catch(int n) {
        cout << "\nException caught";
    }
    
    cout << "\nEnd of program";

    return 0;
}