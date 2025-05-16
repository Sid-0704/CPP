#include <iostream>
#include <string>
using namespace std;

int main(){
    string cars[5] = {"Audi", "Tesla", "Ferrari", "Lamborgini", "BMW"};

    for(int i=0;i<5;i++){
        // printed using for loop
        cout << cars[i] << endl;
    }

    cout << "\n \n"; // For better output, this space is given

    int n=0;
    while (n<5){
        cout << cars[n] << endl;
        n++;
        // printed using while loop
    }

    cout << "\n \n";

    for(string x : cars){
        cout << x << "\n";
        // printed using for each loop
    }


    



    return 0;
}