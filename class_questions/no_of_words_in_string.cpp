// Write a program to count the number of words present in a string

#include <iostream>

using namespace std;

int main(){
    string s = "       I am           not    present    at    LPU        ";
    int ctr =0;

    if(isspace(s[0]) || s.empty()){
        ctr =-1;
    }

    for(int i=0; i<s.size(); i++){

        if(isspace(s[i]) && !isspace(s[i+1])){
            ctr++;
        }

        if(isspace(s[i]) && s[i+1] == '\0'){
            ctr--;
        }     
    }
    
    cout << "Number of words are: " << ctr+1 << endl;
    
    return 0;
}
