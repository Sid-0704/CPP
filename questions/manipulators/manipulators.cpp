#include <iostream> 
#include <iomanip>
using namespace std;

int main(){

    int x =20;
    float y =80.646813;

    cout << hex << x << " " << dec << x << " " << oct << x << endl;

    cout <<setbase(16) << x << " " << setbase(10) << x << " " << setbase(8) << x << endl;

    cout <<  setw(5) << setfill('@')  << x  << endl;
    
    cout << setprecision(3) << y << endl;

    


    return 0;
}