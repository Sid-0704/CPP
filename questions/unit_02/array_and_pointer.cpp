#include <iostream>
using namespace std;

int main(){

    int a[5],i;

    for(i=0; i<5; i++){
        cin >> *(a+i);
    }

    cout << *(a+0) << endl;
    cout << *(2+a) << endl;

    return 0;
}