#include <iostream>
using namespace std;

int main(){ 

    int num, original, reversed=0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    while (num > 0)
    {
        int digit = num%10;
        reversed = reversed *10 +digit;
        num /=10;
    }

    if(original == reversed){
        cout << "It is a palindrome number";
    }
    else if(original!=reversed){
        cout << "It is not a palindrome number";
    }
    




    return 0;
}