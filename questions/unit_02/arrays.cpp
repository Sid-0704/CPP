#include <iostream>
using namespace std;

void sumPrime(int a[]){

    int sum_prime = 0, sum_nonPrime=0;

    for(int i = 0; i < 5; i++) {
        int count = 0;

        for(int j = 1; j <= a[i]; j++) {
            if(a[i] % j == 0) {
                count++;
            }
        }

        if(count == 2) { 
            sum_prime += a[i];
        }
        else if(count >=3){
            sum_nonPrime += a[i];
        }
    }
    cout << "Sum of non prime is: " << sum_nonPrime << endl;
    cout << "Sum of prime is: " << sum_prime << endl;

}

int main(){

    int a[6] = {1,2,3,4,5,6};
    float b[] = {1.6, 2.4};
    char c[5];

    cout << "Enter 5 characters: ";
    for(int i=0; i<5; i++){cin >> c[i];}

    cout << "The outputs are: " <<endl;
    for(int i=0; i<6; i++){cout << a[i] << endl;}
    cout << endl;

    for(int i=0; i<2; i++){cout << b[i] << endl;}
    cout << endl;

    for(int i=0; i<5; i++){cout << c[i] << endl;}
    cout << endl;


    
    sumPrime(a);




}