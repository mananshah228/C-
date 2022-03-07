#include <iostream>

using namespace std;

class item {

    int number;
    static int count;

    public:
        void getdata(int a) {
            number = a;
            count++;
        }

        void getcount(){
            cout << "\nvalue of count: " << count;
        }
};

int item::count;

int main() {

    item a,b,c;

    a.getdata(100);
    a.getcount();

    b.getdata(200);
    b.getcount();

    c.getdata(300);
    c.getcount();
    
    return 0;
}