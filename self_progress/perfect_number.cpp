// Leetcode problem no 507
#include <iostream>
using namespace std;

bool isPerfectNumber(int n){
   int sum=0; 
    
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum +=i;
        }
    }

    switch(sum==n){
        case 1:
            return 1;
        default:
            return 0;
    }

}


int main(){


    cout << isPerfectNumber(28);

}