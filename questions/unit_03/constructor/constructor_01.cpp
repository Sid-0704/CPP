#include <iostream>
using namespace std;

class data{
    int num;
    float detail;
    public:
        data(){ //default constructor (becasuse it has no parameters)
            cout << "Constructor default\n";
            cin >> num;
            cin >> detail;
        }

        data(int a, float b){ //constructor with 2 arguments
            num=a;
            detail =b;
        }

        data(int a){
            num =a; //constructor with 1 arguments
            detail =9000;
        }

        void res(){
            cout << num << " " << detail << endl;
        }
        
};


int main(){
    class data d;
    d.res();

    class data d2(10, 12.12);
    d2.res();

    class data d3(56);
    d3.res();

}

// If atleast 1 parameterised constructor is created, compiler won't create a default constructor