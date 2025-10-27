// Write a program to delete a specific word from the string

#include <iostream>
using namespace std;

int main(){

    string s = "This is DS I love DS no one loves DS";
    string word = "DS";
    int index=0, pos=0;

    // s.erase(5,6); // Remove 6 characters from index 5

    while ((index= s.find(word, pos)) != -1){
        
        s.erase(index ,word.length());
        pos = index + word.length();
    }


    cout << s;

    return 0;
}