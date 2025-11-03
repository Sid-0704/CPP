#include <iostream>
using namespace std;

int main(){
    int a=20, *p;
    float b=10.50, *q=&b;
    char c='m', *r=&c;

    cout << a<< endl << b << endl << c << endl;


    p = &a;
    cout << p << endl << &p << endl;
    cout << *q << endl << *r <<endl;

}