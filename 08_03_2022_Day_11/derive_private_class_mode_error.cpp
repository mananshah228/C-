// shows that private members can not be accessible anywhere inside the derived class(output:error)

#include <iostream>

using namespace std;

class base {
    
    protected:
        int i,j;
    
    public:
        void set(int a, int b) {
            i = a;
            j = b;
        }
        
        void show() {
            cout << i << " " << j << "\n";
        }
};

class derieved1: private base {     // inheriting base class in private mode
    
    int k;
    
    public:
        void setk() {
            k = i*j;
        }
        
        void showk() {
            cout << k << "\n";
        }
};

class derieved2: public derieved1 {     // inheriting derieved class in public mode
    
    int m;
    
    public:
        void setm() {
            m = i-j;
        }
        
        void showm() {
            cout << m << "\n";
        }
};

int main()
{
    derieved1 ob1;
    derieved2 ob2;
    
    ob1.set(1,2);
    ob1.show();
    ob2.set(3,4);
    ob2.show();
    
    return 0;
}
