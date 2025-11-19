/*

    Write cpp program to create 3 files, copy the content of the file in 3 separate files
    One containing alphabets, another containing numbers and rest special characters in third file

*/

#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ifstream f1;
    ofstream n1,n2,n3;

    f1.open("file_handling.cpp");
    n1.open("onlyChar.txt");
    n2.open("onlyNum.txt");
    n3.open("spChar.txt");

    char ch = f1.get();

    while(f1){
        if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
            n1.put(ch);
        }
        else if(ch >= 48 && ch <= 57){
            n2.put(ch);
        }
        else{
            n3.put(ch);
        }
        ch=f1.get();
    }
    f1.close();
    n1.close();
    n2.close();
    n3.close();
    
}