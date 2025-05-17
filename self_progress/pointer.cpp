#include <iostream>
#include <string>
using namespace std;

int main(){

    int number = 10;
    int* ptrNumber = &number;
    cout << ptrNumber << endl;
    
    cout << *ptrNumber << endl; // It is acting as a dereference operator now. It will give "10" as the output

    *ptrNumber = 54;
    cout << "The modified value of the pointer is now " <<*ptrNumber << " and the original variable will now also be " << number << "\n";
    // changing the pointer value to 54 has also changed the original variable value to 54
    return 0;
}