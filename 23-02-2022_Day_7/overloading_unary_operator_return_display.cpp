// overloading unary operator with retrun and display

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
        
        space operator ++() {
            
            space temp;
            
            temp.x = x++;
            temp.y = y++;
            temp.z = z++;
            
            return temp;
        }
};

int main()
{
    space s1(5,4,3);        // creating object with parameters
    space s2;
    s1.display();
    s2 = ++s1;        // values will be incremented
    // s1.display();
    s2.display();       // storing, returning and displaying the value
    
    return 0;
}
