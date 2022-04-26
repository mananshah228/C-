#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fin;
    string word;
    
    fin.open("data.txt");
    
    int count = 0;
    
    if(!fin) {
        
        cout << "file did not open" << endl;
        
    } else {
        
        while(!fin.eof()) {
            
            fin >> word;
            count++;
        }
        
        cout << "total words: " << count << endl;
        fin.close();
    }

    return 0;
}
