#include <iostream> 
using namespace std;

void fun(int a=5, int b=10, int c=20);

int main(){
    int x,y,z;
    cin >> x >> y >>z;
    cout << "The end result is: ";
    fun(x,y,z);

    cout << "The end result with 1 default argument is: ";
    fun(4,5);

    cout << "Result with 2 default arguments: ";
    fun(10);

    cout << "Result with all default arguments: ";
    fun();

    return 0;
}

void fun(int aa, int bb, int cc){
    int res;
    res =aa * bb * cc;

    cout << res << endl;

    
}