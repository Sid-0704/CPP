#include <iostream>
using namespace std;

int main(){
    /*
    float a, *b, **c, ***d;

    a=10.3651;
    cout << a << endl;
    b=&a;
    cout << b << endl;

    c=&b;
    cout <<*c <<endl;

    d= &c;
    cout << **d << endl;
    */

    int arr[3] = {11 ,22, 33};
    int *p1, *p2;
    p1 = &arr[0];
    
    cout << p1 <<" "<< ++p1 << endl;
    cout << p1;


    // addition of two pointers is not allowed

    return 0;
}