#include <iostream>

using namespace std;

template<class T1>

class Test {
    
    public:
    
    Test() {
        
        static int i=10;
        
        cout << ++i << endl;
    
        return;
    }
};

int main()
{
    Test<int> a;
    Test<int> b;
    Test<float> c;

    return 0;
}
