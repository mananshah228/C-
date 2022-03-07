#include <iostream>

using namespace std;

void display(int var) {     // function with one int parameter

    cout << "Integer number: " << var << endl;
}

void display(float vara) {      // function with same name but different parameter

    cout << "Float number: " << vara << endl;
}

void display(int var1, float var2) {        // function with same name but different parameter

    cout << "Integer number: " << var1 << endl;
    cout << "Float number: " << var2 << endl;
}

int main() {

    int a = 5;
    float b = 5.5;

    // invoking function overlading as function names are same but parameters are dfferent
    display(a);
    display(b);
    display(a,b);

    return 0;
}