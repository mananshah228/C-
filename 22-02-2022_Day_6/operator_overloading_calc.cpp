#include <iostream>

using namespace std;

class Complex{
    
    float real,img;
    
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
        
        // overloading + operator
        Complex operator + (Complex obj){
            
            Complex temp;
            
            temp.real = real + obj.real;
            temp.img = img + obj.img;
            
            return temp;
        }  

        // overloading - operator
        Complex operator - (Complex obj){
            
            Complex temp;
            
            temp.real = real - obj.real;
            temp.img = img - obj.img;
            
            return temp;
        }  

        // overloading * operator
        Complex operator * (Complex obj){
            
            Complex temp;
            
            temp.real = real * obj.real;
            temp.img = img * obj.img;
            
            return temp;
        }  

        // overloading / operator
        Complex operator / (Complex obj){
            
            Complex temp;
            
            temp.real = real / obj.real;
            temp.img = img / obj.img;
            
            return temp;
        }  

        // // overloading = operator
        // Complex operator = (Complex obj){
            
        //     Complex temp;
            
        //     temp.real = 100;
        //     temp.img = 200;
            
        //     return temp;
        // }  
};

int main()
{
    Complex c1(1,1), c2(5,10);
    Complex c3;
    
    c1.display();
    c2.display();
    c3.display();
    
    cout << "The action starts here: " << endl;
    
    
    // c3 = c1+c2;
    c3 = c1.operator +(c2);     // adding two object
    c3.display();

    c3 = c1.operator -(c2);     // substracting two object
    c3.display();

    c3 = c1.operator *(c2);     // multiplying two object
    c3.display();

    c3 = c1.operator /(c2);     // dividing two object
    c3.display();

    // c3 = c1.operator =(c2);     // equal to two object
    // c3.display();

    return 0;
}

