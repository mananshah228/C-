#include <iostream>

using namespace std;

template <class T, class U>

void swap (T *num1, U *num2) {
    
    T c;
    
    c = *num1;
    *num1 = *num2;
    *num2 = c;
}

int main()
{
    int a=1;
    char b='a';
    
    swap(&a,&b);
    
    cout << (char)a << endl << (int)b;
    
    return 0;
}
