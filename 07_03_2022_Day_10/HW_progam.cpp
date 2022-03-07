// Create a class student that stores roll_no, name. Create a class test that stores marks
// obtained in five subjects. Class result derived from student and test contains the total
// marks and percentage obtained in test. Input and display information of a student.

#include <iostream>

using namespace std;

class student {
    
    public:
        int roll_no = 1;
        char name[50] = "Manan";
};

class test {
    
    public:
        int m[5] = {90,95,99,98,100};
};

class result: public student, public test {
    
    public:
        int total, percentage;
        
        void calculation() {
            total = m[0] + m[1] + m[2] + m[3] + m[4];
            percentage = (total*100)/500;
            
            cout << "Total: " << total << endl;
            cout << "Percentage: " << percentage << "%" << endl;
        }
};

int main()
{
    student s1;
    test t1;
    result r1;
    
    r1.calculation();

    return 0;
}
