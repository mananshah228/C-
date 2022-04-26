#include<iostream>

using namespace std;

class Base {
    public:
        void showBase(){
            cout << "Base\n"; 
        }
};

class Derv1 : public Base {
    public:
        void showDerived(){
            cout << "Derv1\n";
        }
};

int main(){
    
    Derv1 dv1;
    Base* ptr;
    
    ptr = &dv1;
    ptr->showBase();
    // ptr->showDerived();      // not working
    ((Derv1 *)ptr)->showDerived();      // working
}

