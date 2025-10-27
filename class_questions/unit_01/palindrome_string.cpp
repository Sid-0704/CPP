// Write a program to check whether string is palindrom or not

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string s;
    getline(cin, s);

    string naya = "";
    for(char i: s){
        if(isalpha(i)){
            naya += tolower(i);
        }
    }


    string a = naya;
    reverse(naya.begin(), naya.end());

    if(s == a){
        cout << "It is palindrome" << endl;
    }

    else if(s != a){
        cout << "It is not palindrome" << endl;
    }
    
    cout << naya << endl;
    cout << a << endl;


    return 0;
}