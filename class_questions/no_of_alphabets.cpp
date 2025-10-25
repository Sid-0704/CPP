// Count the number of alphabets in the string

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main(){

    string s;
    getline(cin , s);
    int ctr =0;

    for(char i : s ){
        if(isalpha(i)){
            ctr++;
        }
    }

    cout << "Number of alphabets: " << ctr;

    return 0;
}