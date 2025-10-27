// Leetcode question number 11

#include <iostream>
#include <climits>
using namespace std;

int main(){

    int arr[1000] = {1,8,6,2,5,4,8,3,7};
    int maxArea =0;
    int n=9;

    int i=0, j=n-1;


    while (i<  j){
        int area = min(arr[i], arr[j]) * (j-i);
        if(arr[i] < arr[j]){
            i++;
        }
        else{
            j--;
        }

        if(area > maxArea){
            maxArea = area;
        }
    }

    cout << maxArea << endl;



}