// Write a program to check specific word is present inside a string or not, if present, find it's index

#include <iostream>
using namespace std;

int main(){

    string s = "I am not present at LPU";
    string word = "not present";

    int index = s.find(word); // Find first occurence
    int lastIndex = s.rfind(word); // Find last occurence

    if(index != -1){
    cout << "1st index: " << index << endl;
    cout << "Last index: " << lastIndex << endl;
    }
    else {
        cout << "Word is not in the sentence" << endl;
    }

    return 0;
}