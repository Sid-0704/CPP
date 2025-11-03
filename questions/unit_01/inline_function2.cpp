#include <iostream>
using namespace std;

class data{
    float a,b;
    public:
        void in(){ // default inline member function
            cin >> a >> b;
        }
        float process();
};

inline float data::process(){ // inline member function
    return a*b;
}


int main(){
    
    data aa;
    aa.in();
    cout << aa.process();

    return 0;
}