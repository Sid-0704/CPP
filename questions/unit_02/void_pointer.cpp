#include <iostream>
using namespace std;

int main(){
    void *p;
    int x=20;

    float m =12.12;
    p=&m;

    cout << *(float*)p << endl;

    char name = 'y';
    p=&name;
    cout << *(char*)p <<endl;

    int it=56;
    p=&it;
    cout << *(int*)p << endl;


    return 0;
}