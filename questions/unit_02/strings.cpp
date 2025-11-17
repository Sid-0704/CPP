#include <iostream>
#include <string>
using namespace std;


int main(){
    string s1 = "abcdefghijk";
    cout << s1.at(6)<< endl;

    string s2= s1.substr(3,4);
    cout << s2 << endl;

    cout << s1.find("cd") << endl;

    string s3 = "abcdefghabcd";
    cout << s3.rfind("bc") << endl;
    
    cout << s3.find_first_of("cd") << endl;

    string s4;
    getline(cin, s4);
    cout << s4;


}