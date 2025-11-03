#include <iostream>
using namespace std;

int main(){
    /*
    int n, sum=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout << sum;
    */
    
    int theNumber;
    int count=0;
    cin >>theNumber;
    for(int i=1; i<=theNumber; i++){

        if(theNumber%i==0){
            count +=1;
        }
    }

    if(count > 2){
        cout << "It is not prime";
    }
    else{
        cout << "It is prime";
    }


    return 0;
}