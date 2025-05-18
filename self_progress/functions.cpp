#include <iostream>
#include <string>
using namespace std;

int add(int a, int b);

int main(){
    int x,y;
    cout << "Enter 1st number: ";   cin >> x;
    cout << "Enter 2nd number: ";   cin >> y;

    cout << "The sum of both numbers are: " << add(x,y);
    



    return 0;
}

int add(int a, int b){
    return a+b;

}