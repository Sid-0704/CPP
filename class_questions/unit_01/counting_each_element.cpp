// Write a program to accept a string and find how many numbers of alphabets, digits and space are there

#include <iostream>
using namespace std;

int main(){

    string s;
    int alpha=0, digit=0, space=0, spchar=0;

    getline(cin, s);

    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            alpha++;
        }
        else if(isdigit(s[i])){
            digit++;
        }
        else if(isspace(s[i])){
            space++;
        }

    }


    cout << "No of alphabets: "<< alpha << endl;
    cout << "No of digits: " << digit << endl;
    cout << "No of space: " << space << endl;


    return 0;
}