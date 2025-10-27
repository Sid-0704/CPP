// Write a program to insert a word at a particular index
#include <iostream>
using namespace std;

int main(){

    string s = "I love no one loves DS";
    string word = "DS";
    s.insert(9, word);
    s.insert(9, " ");

    cout << s;



    s.replace(5, 6, "string"); // from 5th index, all 6 characters will be replaced by string.

    return 0;
}