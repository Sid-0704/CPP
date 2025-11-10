#include <iostream>
using namespace std;


int main(){

    int *pointer;
    {
        int x=100;
        pointer=&x;
        cout << pointer << " " << *pointer << endl;
    }

    cout << *pointer << endl;
    // Dangling pointer pointer problem

    // Solution to dangling pointer is null pointer
    pointer = NULL;
    cout << pointer << endl;

    return 0;
}