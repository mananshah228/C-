#include <iostream>

using namespace std;

class item {

    int number;
    static int count;       // static variable declaration

    public:
        void getdata(int a) {

            number = a;
            count++;
        }

        static void getcount() {

            cout << "value of count = " << count << endl;
        }
};

int item::count;        // static variable definition

int main() {

    item a,b,c;

    a.getdata(100);
    item::getcount();       // calling static function

    b.getdata(200);
    item::getcount();       // calling static function

    c.getdata(300);
    item::getcount();       // calling static function

    return 0;
}