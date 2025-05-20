#include <iostream>
#include <string>
using namespace std;

class car{
    public:
    void speedOfCar(int speedInkm);
};


void car::speedOfCar(int speedInkm){
    cout << "Max speed of the car is: " << speedInkm << "km per hour" << endl;

}

int main(){
    car mycar1; 
    mycar1.speedOfCar(85); 
  

    return 0;


}