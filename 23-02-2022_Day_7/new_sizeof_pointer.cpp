// 'new' keyword, size of pointer

#include <iostream>

using namespace std;

int main()
{
    float *pt = new float;
    
    *pt = 55;
    
    cout << "value = " << *pt;
    cout << "\naddress = " << pt;
    cout << "\nsize = " << sizeof(*pt);
    cout << "\nsize ptr = " << sizeof(pt);
    cout << "\naddress of pointer" << &pt;

    return 0;
}
