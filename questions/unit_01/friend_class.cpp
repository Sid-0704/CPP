#include <iostream>
using namespace std;

class one{
    float a,b,c;
    public:
    friend class two;
    friend class three;
    friend class four;

    
    void in(){
        cin >> a >> b >> c;
    }

};

class two{
    public:
    void process(class one t1){
        cout << "The addition of all three of them is: "<< t1.a + t1.b + t1.c << endl;
    }

};





int main(){
    class one a1;
    a1.in();
    class two t1;
    t1.process(a1);


    return 0;
}