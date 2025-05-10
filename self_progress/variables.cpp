#include <iostream>
using namespace std;
int main(){
    int age = 20;
    const float pi =3.14;
    int radius;
    cout << "I am " << age << " years old\n";
    cout<< "Enter the raius of the circle: ";
    cin >> radius;

    float area = pi * radius* radius;

    cout << "Area of circle is: "<< area << "\n";




    return 0;
}