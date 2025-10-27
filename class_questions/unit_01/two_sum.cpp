// Write a program to find two numbers whose sum is equal to the target
// Array is sorted

#include <iostream>
using namespace std;

int main(){

    char arr[1000]= {0};
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Only write sorted elements
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int target;
    cin >> target;
    
    int i=0, j=n-1;
    // Two pointer approach
    while(i<j){

        int addition = arr[i] + arr[j];
        
        if(addition > target){
            j--;
        }
        else if(addition < target){
            i++;
        }

        else if(addition == target){
            // addition == target
            cout << arr[i] << " , "<< arr[j];
            exit(0);

        }
    }
    cout << "No two such numbers exist in the array";





    return 0;
}