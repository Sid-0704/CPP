#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int z=0; z<n; z++){
        cin >> arr[z];
    }


    for(int i=0; i<n-1; i++){
        int index = i;

        for(int j=i+1; j<n; j++){

            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    
    cout << "Your sorted array is: ";
    // printing the numbers 
    for(int c=0; c<n; c++){
        cout << arr[c] << " ";
    }

    return 0;
}