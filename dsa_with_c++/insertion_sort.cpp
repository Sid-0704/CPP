#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if(n > 1000){
        cout << "Array size cannot exceed 1000" << endl;
    }
    else if(n < 0){
        cout << "Array size cannot be negative" << endl;
    }

    else{
        cout << "Enter the elements: ";
        for(int m=0; m<n; m++){
            cin >> arr[m];
        }

        for(int j=0; j<n-1; j++){

            for(int i=n-1; i>0; i--){

                if(arr[i] < arr[i-1]){
                    swap(arr[i-1], arr[i]);
                }

            }
        }

        // printing the array
        cout << "The sorted array is: ";
        for(int k=0; k<n; k++){
            cout << arr[k] << " ";
        }

    }
    
    return 0;
}