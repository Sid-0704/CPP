#include <iostream>
#include <string>
using namespace std;

int add(int a, int b);
void sayHi(string charName){
    cout << "Hi! " << charName ;
}

int main(){
    int x,y,pow1,pow2;
    cout << "Enter 1st number: ";   cin >> x;
    cout << "Enter 2nd number: ";   cin >> y;

    cout << "The sum of both numbers are: " << add(x,y) << endl;
    sayHi("User");
    return 0;
}

int add(int a, int b){
    return a+b;

}