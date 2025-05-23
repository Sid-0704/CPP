#include <iostream>
#include <string>
using namespace std;


class Car{
    public:
    string brand;
    string model;
    int year;

};
    class Computer{
    public:
    string company;
    int price;
};


int main(){
    Car c1;
    Computer lapy;
    lapy.company="Lenovo";
    lapy.price= 55000;
    c1.brand = "Audi";
    c1.model = "R8 E-tron";
    c1.year = 2005;
    
    cout << "The car brand is " << c1.brand << " with model name as " << c1.model << ". It came to market on " << c1.year <<\n"";
    cout<<lapy.company;

    return 0;
}