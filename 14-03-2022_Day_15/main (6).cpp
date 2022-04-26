#include <iostream>
#include <exception>

using namespace std;

int main()
{
    try {
        int* myarray = new int[1999999999999999000];
    } catch(exception &e) {
        cout << "Std exception" << e.what() << endl;
    }
    return 0;
}
