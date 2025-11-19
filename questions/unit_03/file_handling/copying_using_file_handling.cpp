/*
    Write a program to copy the entire sequence cpp file from one file to anotber file
*/

#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main(){

    ifstream ff;
    ofstream f2;

    ff.open("file_handling_02.cpp");
    char c;
    c = ff.get();

    f2.open("filecopyk24ps.cpp");



    while(ff){ //termination condition

        cout << c;
        f2.put(c);
        c =ff.get(); 

    }
    ff.close();
    f2.close();
    
    
}