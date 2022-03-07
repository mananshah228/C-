// Hybrid inheritance

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

// child class
class Student: public Person {
    
    private:
        int b;
        
    public:
        void displayPublicStudent() {
            cout << "inside displayPublicStudent" << endl;
        }
};

// child class
class ITStudent: public Person {
    
    private:
        int c;
        
    public:
        void displayPublicITStudent() {
            cout << "inside displayPublicITStudent" << endl;
        }
};

// child class of class person, multiple inheritance, inherits from class students and class ITStudents
class BTECHStudent: public Student, public ITStudent {
    
    private:
        int d;
        
    public:
        void displayPublicBTECHStudents() {
            cout << "inside displayPublicBTECHStudents" << endl;
        }
};

int main()
{
    Person p1;
    Student s1;
    ITStudent it1;
    BTECHStudent bts1;
    
    p1.displayPublicPerson();
    s1.displayPublicPerson();
    s1.displayPublicStudent();
    it1.displayPublicPerson();
    it1.displayPublicITStudent();
    bts1.displayPublicStudent();
    bts1.displayPublicITStudent();
    bts1.displayPublicBTECHStudents();

    return 0;
}