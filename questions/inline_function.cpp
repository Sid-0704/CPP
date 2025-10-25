#include <iostream>
using namespace std;



inline float small(float a, float b){
    
    return (a>b?b:a);
}

int main(){
    cout << small(2.5, 5.6);


    return 0;
}