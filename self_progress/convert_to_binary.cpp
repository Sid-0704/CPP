#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    string binary ="";

    if(num==0){
        binary="0";
    }
    else{
        while(num>0){
            binary = char((num%2) + '0')+binary;
            num/=2;
        }
    }

    cout << "Binary number is: " << binary << endl;



    return 0;
}