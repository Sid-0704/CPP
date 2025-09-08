#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[1000];
    int n;

    // taking user input
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(int m=0; m<n; m++){
        cin >> arr[m];
    }
    
    // sorting process
    for(int i=0; i< n-1; i++){

        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        
    }



    // printing the array
    cout << "The sorted array is: ";
    for(int k=0; k<n; k++){
        cout << arr[k] << " ";
    }

    return 0;
}