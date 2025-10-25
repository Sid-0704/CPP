// Write a program to convert a string into multiple words

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string s;
    getline(cin , s);

    string snew = "";
    for(char i: s){
        if(int(i) == 32){
            cout << snew << endl;
            snew= "";
            
        }
        snew +=i;
    }

    return 0;
}