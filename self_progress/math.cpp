#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, max_num, min_num, square, root, root_2;

    cout << "Enter 1st number: "; cin >> a;
    cout << "Enter 2nd number: "; cin >> b;

    max_num = max(a,b);
    min_num = min(a,b);
    square = pow(a,b);
    root = sqrt(a);
    root_2= sqrt(b);

    cout << "Bigger number between " << a << " and " << b << " is " << max_num << "\n";
    cout << "Smaller number between " << a << " and " << b << " is " << min_num << endl;
    cout << a << " to the power " << b << " is " << square << endl;
    cout << "Square root of " << a << " is " << root << endl;
    cout << "Square root od " << b << " is " << root_2 << endl;
    
    


    return 0;
}