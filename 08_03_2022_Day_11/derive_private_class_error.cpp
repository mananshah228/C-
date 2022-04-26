// derive private class(error)

#include <iostream>

using namespace std;

class base {        // base class
    
    int i,j;
    
    public:
        void set(int a, int b) {
            i = a;
            j = b;
        }
        
        void show() {
            cout << i << " " << j;
        }
};

class derieved: private base {      // private derived class
    
    int k;
    
    public:
        derieved(int x) {
            k = x;
        }
        
        void showk() {
            cout << k;
        }
};

int main()
{
    // shows that private derived class can not access public members of base class
    derieved ob(3);
    ob.set(1,2);
    ob.show();
    // ob.showk()

    return 0;
}
