// Write a program to accept a string and reverse it

#include <iostream>
#include <algorithm>
using namespace std;


int main(){

    string s;
    getline(cin , s);

    reverse(s.begin(), s.end());

    cout << s;

    return 0;

}