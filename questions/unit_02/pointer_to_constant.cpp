#include <iostream>
using namespace std;

int main(){
    // In pointer to constant, value cannot be changed, but the pointer can point towards another variable
    int x=100, y=300;

    const int* p1=&x;

    // *p1=200 //It is not possible

    cout << *p1 << endl;

    p1=&y;
    cout << *p1<< endl;

    return 0;
}