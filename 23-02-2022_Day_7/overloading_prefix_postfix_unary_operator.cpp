//  overloading prefix and postfix operator

#include <iostream>

using namespace std;

class demo {
    
    private:
        int m;
        
    public:
        demo() {
            m=0;
        }
        
        demo(int x) {
            m=x;
        }
        
        // void display() {
        //     cout << "\nx=" << x << ",y=" << y << ",z=" << z;
        // }
        
        void operator ++() {
            ++m;
            cout << "pre increment: " << m << endl;
        }
        
        void operator ++(int) {
            m++;
            cout << "post increment: " << m << endl;
        }
        
        void operator --(int) {
            m--;
            cout << "post decrement: " << m << endl;
        }
        
        void operator --() {
            --m;
            cout << "pre decrement: " << m << endl;
        }
};

int main()
{
    demo d1(5);
    ++d1;           //++d1()
    d1++;           //d1++(int)
    
    --d1;
    d1--;
    
    return 0;
}
