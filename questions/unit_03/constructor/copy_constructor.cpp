#include <iostream>
using namespace std;

class car{
    string comp;
    string model;
    float cost;

    public:
        void take();
        void process();
        car(car &c);
        car(string c1, string c2, float c3);
        car();
};
void car::process(){
    cout << comp << endl;
    cout << model << endl;
    cout << cost << endl;
}
car::car(car &cc){
    this->comp= cc.comp;
    this->model=cc.model;
    this->cost = cc.cost;    
}
car::car(string c1, string c2, float c3){
    cin >> comp >> model >> cost;
}
int main(){
    class car c1("Audi" , "R8", 15613100);
    class car c2(c1);
    class car c3;
    c3=c2;
    c3.process();
}