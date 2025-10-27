#include <iostream>
using namespace std;

// Write a program to insert a number in particular position of an array


/*
Inserting a number at the beggining of the array
Time complexity is: O(n)

Inserting a number at the mid of the array
Time complexity is: O(n)

Inserting a number at the end of the array
Time complexity is: O(1)

*/
int main(){
    
    int arr[1000];
    int pos1, n, desiredVariable;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    cout << "Enter elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << "Elements addition complete" << endl;
    
    cout << "Enter the position you want to add the element on: ";
    cin >> pos1;
    
    cout << "The value of the position: ";
    cin >> desiredVariable;
    
    for(int i=n-1; i>=pos1; i--){
        arr[i+1] = arr[i];
        
    }
    
    arr[pos1] = desiredVariable;
    
    
    for(int i=0; i<=n; i++){
        cout << arr[i]<< " ";
    }
    
    
    
    
    return 0;
}