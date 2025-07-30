#include <iostream>
#include <string>
using namespace std;

enum difficulty{
    low = 1,
    medium, // medium and high will be automatically assigned value 2 and 3 respectively  
    high, // we don't use semicolon here
    unbearable
};

int main(){
    
    enum difficulty gameDifficulty = medium;
    
    switch (gameDifficulty){
    case 1:
        cout << "The game has low difficulty.." << endl;
        break;
    
    case 2:
        cout << "The game has medium difficulty.." << endl;
        break;

    case 3:
        cout << "The game has high difficulty.." << endl;
        break;

    case 4:
        cout << "The game has unbearable.." << endl;

    default:
        cout << "Difficulty not set.." << endl;
        break;
    }



    return 0;
}