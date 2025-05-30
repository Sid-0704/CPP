#include <iostream>
using namespace std;

int main(){

    int arrsize;

    int arr[1000];
    cout << "Enter the array size: ";
    cin >> arrsize;

    cout << "Enter the array elements: ";
    for(int z=0; z<arrsize; z++){
        cin >> arr[z];
    }

    int temp = arr[arrsize-1];
    
    for(int i=arrsize-2; i>=0; i--){

        arr[i+1] = arr[i];
        
    
    }
    arr[0] = temp;

    cout << "\nArray after being rotated by 1 is:\n";
    for(int m=0; m<arrsize; m++){
        cout << arr[m] << endl;
    }


    return 0; 
}