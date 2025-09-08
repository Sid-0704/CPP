#include <iostream>
#include <algorithm>
using namespace std;

int binarysearch(int arr[], int n, int target){

    int start =0, mid, end=n-1;
    while(start<=end){

        mid=(start+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }

        else{
            end = mid-1;
        }
        
    }
    return -1;
}

int main(){
    int arr[1000];
    int n;
    int key;
    


    cout << "Enter number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the target value: ";
    cin >> key;

    // Printing the answer
    cout << "The target value is at index: ";
    cout << binarysearch(arr,n , key);
    return 0;
}