// overloading unary operator using friend function

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
        
        friend void operator ++(space s1);      // declaring friend function
};

void operator ++(space s1) {        // defining friend function
    ++s1.x;
    ++s1.y;
    ++s1.z;
}

int main()
{
    space s1(5,4,3);        // creating object with parameters
    s1.display();
    ++s1;        // calling of friend function
    s1.display();
    
    return 0;
}
