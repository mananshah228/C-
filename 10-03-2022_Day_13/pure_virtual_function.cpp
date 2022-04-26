// pure virtual function

#include <iostream>

using namespace std;

class Shape {
    
    protected:
        float x;
    
    public:
        void getData(){
            cin >> x;
        }
        
        virtual float calculateArea() = 0;
};

class Square: public Shape {
    
    public:
        float calculateArea() {
            return x*x;
        }
};

class Circle: public Shape {
    
    public:
        float calculateArea() {
            return 3.14*x*x;
        }
};

int main()
{
    Square s;
    Circle c;
    
    cout << "Enter length to calculate the area of square: ";
    s.getData();
    cout << "Area of square: " << s.calculateArea() << endl;
    
    cout << "Enter radius to calculate the area of a circle: ";
    c.getData();
    cout << "Area of circle: " << c.calculateArea() << endl;

    return 0;
}
