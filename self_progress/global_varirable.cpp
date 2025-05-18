#include <iostream>
#include <string>
using namespace std;

int x =10;

void addString(string x){
    int m =10;  // m is local variable here
    cout << x << " and this string is added " << m << "\n";

}

int main(){
    
    cout << "Right now x, whose value is " << x << " is a global variable.\n";
    addString("This is main string");

    return 0;

}

