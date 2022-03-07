// basic inheritance public, private, protected
#include <iostream>

using namespace std;

// base class or parent class
class Person {
    
    public:
        int a1;
        
        void publicFunction() {
            cout << "inside public";
        }
    
    private:
        int a2;
        
        void privateFunction() {
            cout << "inside private";
        }
    
    protected:
        int a3;
        
        void protectedFunction() {
            cout << "inside protected";
        }
};

// derieved class or child class
class Doctor: public Person {
    
    public:
        int b1;
        
        void derivedFunction() {
            cout << "derived function";
        }
};

int main()
{
    Doctor d1;
    
    d1.publicFunction;      // calling of public function of parent class
    // d1.privateFunction();        // calling of private function of parent class
    // d1.protectedFunction();      // calling of protected function of parent class

    return 0;
}