// base class parameterized constructor

#include <iostream>

using namespace std;

class base1 {
    
    protected:
        int i;
    
    public:
        
        base1(int x) {
            i = x;
            cout << "constructor base1\n";
        }
        
        ~base1() {
            cout << "destructor base1\n";
        }
};

class base2 {
    
    protected:
        int k;
    
    public:
        base2(int x) {
            k = x;
            cout << "constructor base2\n";
        }
        
        ~base2() {
            cout << "destructor base2\n";
        }
};

class derieved: public base1, public base2 {
    
    int j;
    
    public:
    
        derieved(int x, int y, int z): base1(y), base2(z) {
            
            j = x;
            cout << "constructor derieved\n";
        }
        
        ~derieved() {
            cout << "destructor derieved\n";
        }
        
        void show() {
            cout << i << " " << j << " " << k << endl;
        }
};

int main()
{
    derieved d1(1,2,3);
    
    d1.show();

    return 0;
}
