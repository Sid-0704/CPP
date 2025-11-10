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
           
};


int main(){

    int n;
    cin >> n;
    data d;
    d.fun(n);
    cout << "The process is: " << d.process();


}