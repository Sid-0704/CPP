#include <iostream>
using namespace std;

int main(){
    int a,b;
    // We are going to use ternary operator 
    cout << "Enter 1st number: ";   cin >> a;   
    cout << "Enter 2nd number: ";    cin >> b;

    string ternary = (a>b) ? "1st number is grater than the 2nd" : "2nd number is grater than the 1st"; 
    // Ternary operator is used in this way
    cout << ternary;

    




    return 0;
}