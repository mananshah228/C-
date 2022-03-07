#include <iostream>

using namespace std;

class number {

    int num1, num2;

    public:
        void setData(int a, int b) {

            num1 = a;
            num2 = b;
        }

        friend int add(number N);
};

int add(number N) {
    return N.num1 + N.num2;
}

int main() {

    number N;

    N.setData(10,20);
    cout << "Sum: " << add(N);

    return 0;
}