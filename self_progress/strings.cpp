#include <iostream>
#include <string>
using namespace std;

int main(){
    string Name;

    cout << "Enter your full name: ";
    getline(cin,Name); // In this process, whitespaces are also considered
    cout<<"You entered your name as \""<< Name << "\"\n"; 



    return 0;
}
