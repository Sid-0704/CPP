#include <iostream>
using namespace std;

void change(int &a, int &b, int &c){
    int h = c;
    int m = b;
    c = a;
    b=h;
    a=m;
    cout << a << " " << b << " " << c << endl;
}


int main(){

    int x=10 ,y=20 ,z=30;

    change(x, y,z);

    cout << x << " " << y << " " << z << endl;



    return 0;
}