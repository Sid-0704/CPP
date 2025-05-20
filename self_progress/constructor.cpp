#include <iostream>
#include <string>
using namespace std;

class construct{
    public:
    /*
    construct(){
        cout << "A constructor is created and called ..." << endl;
        // This is a constructor
    }
    */
    construct(int a, int b){
        cout << "The sum is " << a + b << endl;
    }
};


int main(){
    int x, y ;
    cout << "Enter 1st number: ";   cin >> x;
    cout << "Enter 2nd number: ";   cin >> y;

    construct objectOfClass(x , y); // We named the object, it will automatically call the constructor

    // *IMPORTANT*
    // The constructor has the same name as the class, it is always public, and it does not have any return value.

    return 0;
}