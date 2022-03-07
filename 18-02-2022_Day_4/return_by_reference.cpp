// retunr by reference

#include <iostream>

using namespace std;

int& max(int &x, int &y) {      // values passed as address/reference

    if (x>y) {
        return x;       // returning address
    } else {
        return y;       // returning address
    }
}

int main() {

    int a = 5, b = 6, ans;

    ans = max(a,b);

    cout << "Maximum = " << ans;
}