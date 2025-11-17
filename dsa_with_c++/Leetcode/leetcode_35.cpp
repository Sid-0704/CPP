/*

    Leetcode problem no. 35
    Given a sorted array of distinct integers and a target value, return the index if the target is found. 
    If not, return the index where it would be if it were inserted in order.

*/
#include <iostream>
using namespace std;

int search(int nums[], int target){


        int start=0;
        int end= 6 ;//nums.size()-1
        int mid;
        int ans= 7; //nums.size();

        while(start<=end){
            mid = start + (end - start)/2;

            if(nums[mid]==target){
                ans = mid;
                break;
            }
            else if(nums[mid] < target){
                start = mid+1;
            }
            else{
                ans = mid;
                end = mid-1;
            }
        }
        return ans;
}


int main(){
    int arr[7] = {1,2,5,6,7,12,15};
    int target = 4;

    cout << search(arr, target);
}