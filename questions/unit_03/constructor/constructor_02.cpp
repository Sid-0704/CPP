#include <iostream>
using namespace std;

class room{
    int a;
    float b;
    public:
        room(int aa, float bb):b(bb*10){
            a=aa+50;
        }

        void process(){
            cout << a << " " << b <<endl;
        }

        ~room(){
            cout << "destructor was called";
        }
};


int main(){

    class room r1(23, 45.789);
    r1.process();
    
}