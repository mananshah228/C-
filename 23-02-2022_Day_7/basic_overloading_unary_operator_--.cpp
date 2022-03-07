// overloading unary operator --

#include <iostream>

using namespace std;

class space {
    
    private:
        int x,y,z;      // initializing private members
        
    public:
        space() {
            x=y=z=0;
        }
        
        space(int a, int b, int c) {
            x=a;
            y=b;
            z=c;
        }
        
        void display() {
            cout << "\nx=" << x << ",y=" << y << ",z=" << z;
        }
        
        void operator --() {
            x--;
            y--;
            z--;
        }
};

int main()
{
    space s1(5,4,3);        // creating object with parameters
    s1.display();
    --s1;        // values will be decremented
    s1.display();
    
    return 0;
}
