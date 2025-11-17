#include <iostream>
using namespace std;

int main(){
    // A constant pointer cannot point to any other 
    int x=100, y=500;

    int* const ptr=&x;

    cout << *ptr << endl;
    *ptr +=100;
    
    
    cout << *ptr << endl;
    cout << y<< endl;
    
    // ptr = &y; // This is not possible for a constant pointer to do

    
    return 0;
}