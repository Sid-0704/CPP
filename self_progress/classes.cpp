#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;

};


int main(){
    Car c1;
    c1.brand = "Audi";
    c1.model = "R8 E-tron";
    c1.year = 2005;
    
    cout << "The car brand is " << c1.brand << " with model name as " << c1.model << ". It came to market on " << c1.year;

    return 0;
}