//  Multilevel inheritance

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

// child class of class person
class Student: public Person {
    
    private:
        int b;
        
    public:
        void displayPublicStudent() {
            cout << "inside displayPublicStudent" << endl;
        }
};

// child class of class student
class ITStudent: public Student {
    
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
    Student s1;     // child class object
    ITStudent it1;      // child class object
    
    p1.displayPublicPerson();       // calling its own member function
    s1.displayPublicPerson();       // calling member function of parent class i.e. class person
    s1.displayPublicStudent();      // calling its own member function
    it1.displayPublicPerson();      // calling member function of class public though it inherits from class student(i.e. multilevel inheritence)
    it1.displayPublicStudent();     // calling member function of parent class i.e. class student
    it1.displayPublicITStudent();       // calling its own member function

    return 0;
}