#include <iostream>
#include <string.h>
using namespace std;

union car
{
    char name[20];
    float cost;

};

int main(){
    union car cat;
    
    cat.cost = 256666;
    strcpy(cat.name, "catCar");

    cout << cat.cost << " " << cat.name;

    return 0;
}