#include <iostream>
using namespace std;

int main(){
    int arr[1000],n;
    cout << "Enter the number: ";
    cin >> n;

    arr[0]=0;
    arr[1]=1;

    for(int i=2; i<n; i++){
        arr[i] = arr[i-1] + arr[i-2];

    }

    cout << "The fibonacci series till the desired number is:\n";

    for(int m=0; m<n; m++){
        cout << arr[m] << endl;
    }

    return 0;
}