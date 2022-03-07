#include <iostream>

using namespace std;

class Complex{
    
    int real,img;
    
    public:
    
        // default constructor
        Complex() {     
            real = 0;
            img = 0;
        }
        
        // parameterized constructor
        Complex(int x, int y) {
            real = x;
            img = y;
        }
        
        // display function
        void display() {
            cout << "The real value part: " << real << " and img part is: " << img << endl << endl;
        }

        friend Complex operator + (Complex obj1, Complex obj2);
};

// overloading + operator
Complex operator + (Complex obj1, Complex obj2){
            
    Complex temp;
            
    temp.real = obj1.real + obj2.real;
    temp.img = obj1.img + obj2.img;
            
    return temp;
}  

int main()
{
    Complex c1(1,1), c2(5,10);
    Complex c3;
    
    c1.display();
    c2.display();
    c3.display();
    
    cout << "The action starts here: " << endl;
    
    //adding two object
    c3 = c1+c2;
    // c3 = c1.operator +(c2);
    c3.display();

    return 0;
}

