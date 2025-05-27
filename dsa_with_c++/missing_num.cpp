#include <iostream>
using namespace std;
/*
    This method of finding missing number involves adding each element of array and then 
    subtracting it with the A.P. sum formula
    This method is only applicable if the elements of an array is consecutive
*/


int main(){
    int arr[]={1,2,4,5,6};
    int sum = 0;
    int arrSize = sizeof(arr)/sizeof(int) +1;
    
    for(int i=0; i<arrSize-1; i++){
        sum +=arr[i];
    }
   
    // Below code is of an A.P.
    int ap = arrSize * (arrSize +1)/2;
    int missing_num = ap - sum;
    cout << "The missing number is: " << missing_num << endl;
    return 0;
}