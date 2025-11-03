#include <iostream>
using namespace std;

int name =100; // storage class static for global var

int main(){


    int name =20;
    cout << name << endl;

    cout << ::name << endl;  // Using ::name, we can access the outer scope


    return 0;

}