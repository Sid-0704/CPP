/*
    Leetcode problem no. 34
    Find First and Last Position of Element in Sorted Array

*/
#include <iostream>
using namespace std;

void occurence(int arr[], int target){
    int start=0, end=6, first=-1, last=-1;
    
    while(start <= end){

        int mid=(start+end)/2;

        if(arr[mid] == target){
            first = mid;
            end = mid-1;
        }

        else if(arr[mid] < target){
            start= mid+1;
        }
        else{
            end = mid - 1;
        }
    } 

    start =0, end=6;
    // finding last element here

    while(start <= end){
        int mid=(start+end)/2;

        if(arr[mid] == target){
            last= mid;
            start = mid+1;
        }

        else if(arr[mid] < target){
            start= mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    
    cout << "first and last occurence of target is: " << first << " and " << last; 
}

int main(){
    int arr[7] = {2,3,5,5,5,6,9};

    occurence(arr, 5);

    return 0;
}