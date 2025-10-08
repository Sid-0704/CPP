#include <iostream>
using namespace std;

int main(){

    int x,y,z;

    cin >> x >> y >> z;
    /*
    if(x>y>z){
        cout << x;
    }
    else if(x <z<y){
        cout << y;
    }
    else{
        cout << z;
    }
    */
   int largest = x;

    if(y>largest){
    largest = y;
   }
   else if(z>largest){
    largest = z;
   }
   cout << largest;
    return 0;
}