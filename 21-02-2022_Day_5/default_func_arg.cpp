// defaut args

#include <iostream>

using namespace std;

int cubevolume(int l=5, int w=6, int h=7) {

    return l*w*h;
}

int main() {

    //testing default args
    cout << cubevolume() << endl;
    cout << cubevolume(9) << endl;
    cout << cubevolume(15,7) << endl;
    cout << cubevolume(3,4,12) << endl;

    return 0;
}