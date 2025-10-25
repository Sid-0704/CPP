// Write a program to find majority element in the array

#include <iostream>
using namespace std;

int main(){

    int arr[1000] = {2,2,1,1,1,2,2,2,2,2};
    int n =7;
    int major = arr[0];
    int counter =0;

    for(int i=0; i<n; i++){
        if(counter==0){
            major = arr[i];
        }
        if(arr[i] == major){
            counter++;
        }
        else{
            counter--;
        }

    }

    cout << major;

    return 0;
}