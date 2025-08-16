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
    int last_element = n-1;

    for(int i=0; i<= n-1; i++){

        for(int j=0; j<last_element; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        last_element -= 1;
    }



    // printing the array
    cout << "The sorted array is: ";
    for(int k=0; k<n; k++){
        cout << arr[k] << " ";
    }

    return 0;
}