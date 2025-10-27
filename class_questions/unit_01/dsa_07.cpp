#include <iostream>
using namespace std;

int main(){

    string s = "I am from LPU";

    cout << s.size() << endl;
    // cout << s.length();

    cout << s.empty() << endl;
    // checks if string is empty or not

    // s.resize(4); // Keeps the first 4 characters
    cout << s << endl;

    s.clear();
    cout << s << endl; // Remove all characters
    

    // Converting string to integer
    string s1 = "123";
    int n = stoi(s1);
    cout << n << endl;

    // Converting integer to string
    int m=5;
    string s2 = to_string(m);
    cout << s2 << endl;
    



    return 0; 
}