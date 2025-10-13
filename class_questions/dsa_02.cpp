#include <iostream>
using namespace std;

// Write a program to insert a number in particular position of an array

int main(){
    
    int arr[1000];
    int pos1, n,no;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    cout << "Enter elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << "Elements addition complete" << endl;
    cout << "The value of the position: ";
    cin >> no;

    for(int i=0; i<n; i++){
        if(no>=arr[i] && no <arr[i+1]){
            pos1 = i+1;
            break;
        }
    }


    for(int i=n-1; i>=pos1; i--){
        arr[i+1] = arr[i];
        
    }
    
    arr[pos1] = no;
    
    cout << "The array is: ";
    for(int i=0; i<=n; i++){
        cout << arr[i]<< " ";
    }
    
    return 0;
}