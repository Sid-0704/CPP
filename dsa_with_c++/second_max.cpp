#include <iostream>
using namespace std;

int main(){
    int arr[]={6,9,8,3,2};

    int ans = INT16_MIN;
    int second = INT16_MIN;
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<arr_size; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }

    for(int m=0; m<arr_size; m++){
        if(ans!=arr[m]){
            second = max(second,arr[m]);
        }
    }
    cout <<"The second max number in the array is: "<< second << endl;


    return 0;
}