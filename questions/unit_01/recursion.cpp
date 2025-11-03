#include <iostream>
using namespace std;

class first{
    
    public:
        
        long long int fun(int x);

};

class sum{
    
    public:
        int add(int a);

};

int sum::add(int a){
            if(a<=0){
                return 0;
            }
            else{
                return (a + add(a-1));
            }

        }



long long int first::fun(int a){
    if(a>0){
        return (a * fun(a- 1));
    }

    else{
        return 1;
    }
}


int main(){

    class first f1;
    class sum s1;
    int a;
    cin >> a;

    cout << f1.fun(a) << endl;

    cout << s1.add(a) << endl;

    return 0;
}