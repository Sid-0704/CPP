#include <iostream>
using namespace std;

// // void fun(int a, int b, int c);
// void fun(char a, char b);
// void fun(float a, float b, float c, float d);
void fun(int a, double b){
    cout << "fun 01: " << a/b <<endl;
}


void fun(double m, int n){
    cout << "fun 02: " << m/n << endl;
}


int main(){

    // fun(6,9);
    // fun('a', 'b', 'c');
    // fun(2.4, 3.6, 5.4, 8.6);

    fun(45, 10.6);
    // fun(34.67, 10);



    return 0;
}

// void fun(int aa, int bb, int cc){
//     cout << aa + bb + cc << endl;
// }

// void fun(char n, char m){
//     cout << n+m << endl;
// }

// void fun(float aa, float bb, float cc, float dd){
//     cout << aa+bb+cc+dd << endl;

// }