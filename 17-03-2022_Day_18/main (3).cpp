#include <iostream>

using namespace std;

template <typename T>

T sum (T n1, T n2) {
    
    T rs;
    
    rs = n1 + n2;
    
    return rs;
}

int main()
{
    int A = 10, B = 20, C;
    long a = 11, b = 22, c;
    
    cout << "The sum of int is: " << sum(A,B) << endl;
    cout << "The sum of long is: " << sum(a,b) << endl;

    return 0;
}
