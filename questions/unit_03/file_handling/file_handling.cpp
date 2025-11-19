#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    ofstream n;
    n.open("k24.txt");
    n << "last row\n";
    n << "sit properly\n";
    n << "left corner, do not use mobile phone.\n";
    n.close();
    
    ifstream m;
    
    m.open("k24.txt");

    char ch=m.get();
    while(m){
        cout << ch;
        ch = m.get();
    
    }
}