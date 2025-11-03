// Write a program to find sum of 2 integers using inline function but function is defined outside class
#include <iostream>
using namespace std;

class addTheNum{
    private:
    int a,b;

    public:
        void takeInput();
        int addThe();
        int cube();
        void table();
};

inline void addTheNum::takeInput(){
    cin >> a >> b;
}

inline int addTheNum::addThe(){
    return a + b;
}

inline int addTheNum::cube(){
    return a * a *a;
}

inline void addTheNum::table(){
    for(int i=0; i<10; i++){
        cout << a << " * " <<  i+1 << " = " << a*(i+1) << endl;
    }
}

int main(){
    addTheNum aa;
    aa.takeInput();
    cout << aa.addThe() << endl;
    cout << aa.cube() << endl;
    aa.table();


}
