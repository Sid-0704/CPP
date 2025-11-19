#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;


int main(){

    ifstream f1;
    ofstream f2;

    char ch;
    f2.open("test.txt"); //cursor is at the beginning
    ch = getche();
    
    while(ch != '@'){
        f2 << ch;
        ch = getche();
    }
    f2.close();

    f1.open("test.txt");
    ch = f1.get();

    while(f1){
        cout << ch;
        ch=f1.get();
    }
    f1.close();
}