#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fin;
    string line;
    
    fin.open("data.txt");
    
    int count = 0;
    
    if(!fin) {
        
        cout << "file did not open" << endl;
        
    } else {
        
        while(getline(fin, line)) {

            count++;
        }
        
        cout << "total lines: " << count << endl;
        fin.close();
    }

    return 0;
}
