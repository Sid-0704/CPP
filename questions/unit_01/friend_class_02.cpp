#include <iostream>
using namespace std;

class one{
    float x, y;
    friend class two; //declaration
    public:
        void fun(){
            cin >> x >> y;

        }

};

class two{
    public:
        void process1(one a1){
            cout << a1.x / a1.y << endl;

        }
        
        
        void process2(one a2){
            cout << a2.x+a2.y << endl;

        }
};







int main(){

    class one aa;
    aa.fun();
    class two tq;
    tq.process1(aa);
    tq.process2(aa);


    return 0;
}
