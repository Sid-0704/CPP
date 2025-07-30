#include <iostream>
using namespace std;

/*
this approach of reversing an array changes the position of 1st element with its last element using "swap method"
*/


int main(){
    int arr[6]={1,2,3,4,5,6};
    int i=0, j=5;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    

    for(int m=0; m<6; m++){
    
        cout << arr[m] << " ";
    }
    return 0;
}