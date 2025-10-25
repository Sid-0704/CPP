// Write a program to count a word is present how many times in a string

#include <iostream>
using namespace std;

int main(){

    string s = "In this sem I am having DS and I love DS DA DA DA";
    string word = "DS";
    int ctr =0;
    int pos =0;
    int index;

    while ((index= s.find(word, pos)) != -1){
        ctr ++;
        pos = index + word.length();
    }
    
    cout << "The word is present " << ctr  << " times" << endl;

    return 0;
}