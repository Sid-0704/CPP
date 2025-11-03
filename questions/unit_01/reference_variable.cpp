#include <iostream>
using namespace std;

void fun(float &a, float &b){ // formal arguments
    float t;

    t=a;
    a=b;
    b=t;
    cout << "Inside fun, values are: "<< a << endl << b <<endl;
}

int main(){
    float x,y;
    cin >> x >> y; // actual arguments
    fun(x,y);
    
    cout << "after swapping inside the main function: " << x << endl << y << endl;




    return 0;
}