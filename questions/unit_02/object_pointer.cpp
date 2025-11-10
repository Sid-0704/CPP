#include <iostream>
using namespace std;

class data{
    float num;
    float *var;
    public:
        void fun(float n){
            num = n;
            var=&num;
            }

            float  process(){

                return ((*var)*(*var)*(*var));


            }
           
}d, *d2;


int main(){

    int n;
    cin >> n;
    d2 = &d;

    d.fun(n);
    cout << "For pointer to object: " << d2-> process() << endl;

    cout << "The process is: " << d.process() << endl;
    
    // above line can also be witten as
    // cout << (*d2).process();

}