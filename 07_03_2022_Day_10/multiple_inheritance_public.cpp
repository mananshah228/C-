// Multiple inheritance

#include <iostream>

using namespace std;

// base class or parent class
class Person {
    
    private:
        int a;
        
    public:
        void displayPublicPerson() {
            cout << "inside displayPublicPerson" << endl;
        }
};

// base class or parent class
class Student {
    
    private:
        int b;
        
    public:
        void displayPublicStudent() {
            cout << "inside displayPublicStudent" << endl;
        }
};

// child class of class person, multiple inheritance, inherits from class person and students
class ITStudent: public Person, public Student {
    
    private:
        int c;
        
    public:
        void displayPublicITStudent() {
            cout << "inside displayPublicITStudent" << endl;
        }
};

int main()
{
    Person p1;      // parent class object
    Student s1;     // parent class object
    ITStudent it1;      // child class object with multiple inheritance
    
    p1.displayPublicPerson();       // calling its own member function
    s1.displayPublicStudent();      // calling its own member function
    
    // calling member function from two parent class
    it1.displayPublicPerson();      // calling member function from class person
    it1.displayPublicStudent();     // calling member function from class student
    
    it1.displayPublicITStudent();       // calling its own member function

    return 0;
}