#include <iostream>
using namespace std;


int main(){
    // A wild pointer is a pointer which is not initialized
    
    int *a, b=10;
    a=&b;
    cout << a << endl;
    
    a=0; // null pointer
    //a= NULL; //We can do this too
    
    cout << a << endl;

    return 0;
}