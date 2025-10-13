#include <iostream>
using namespace std;

// Write a program to delete a number from an array

int main(){

    int arr[1000], arr2[1000];
    int n, no, position;
    int j=0;

    cout << "Enter the size of the array: ";
    cin >> n;
    
    cout << "Enter elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the number you want to delete: ";
    cin >> no;

    for(int i=0; i<n; i++){
        if(arr[i]!= no){
            arr2[j++]=arr[i];
        }
    }

    /*
    for(int i=position; i<n-1; i++){
        arr[i] = arr[i+1];;
    }
    */

    cout << "The array is: ";
    for(int i=0; i<n-1; i++){
        cout << arr2[i]<< " ";
    }
    

    return 0;
}