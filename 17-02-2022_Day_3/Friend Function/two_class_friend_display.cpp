#include <iostream>

using namespace std;

class Square;      //declaring class Square
class Rectangle {

    int width = 5, height = 6;

    public:

        friend void display(Rectangle, Square);        //declaring friend to class Rectangle
};

class Square {

    int side = 9;

    public:

        friend void display(Rectangle, Square);     //declaring friend to class Square
};

void display(Rectangle r, Square s) {       // frined function definition

    cout << "Rectangle: " << r.width * r.height << endl;
    cout << "Square: " << s.side + s.side;
}

//initializing of main function
int main() {

    Rectangle rec;
    Square sq;

    display(rec, sq);
    
    return 0;
}
