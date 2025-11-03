#include <iostream>
using namespace std;

int binaryResearch(int arr[], int target, int n){
    int start=0, mid, end=n-1;

    while(start<=end){

        mid= (start+end)/2;
        if(arr[mid]==target){
            return mid;
        }

        else if(arr[mid] < target){
            start =mid+1;
        }

        else{ // arr[mid] < target
            end= mid-1;
        }
    }
}


int main(){
    int n=7;
    int arr[7] = {1,2,3,4,5,6,7};
    int target = 2;
    cout<< "Array is at index: " << binaryResearch(arr, target, n);

    return 0;
}