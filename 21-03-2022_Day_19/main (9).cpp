#include <iostream>

using namespace std;

template<typename T>

void func(const T &x) {
    
    static int i=10;
    
    cout << ++i << endl;
    
    return;
}

int main()
{
    func<int>(1);
    func<int>(2);
    func<double>(10.1);
    
    return 0;
}
