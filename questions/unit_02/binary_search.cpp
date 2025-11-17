#include <iostream>
using namespace std;

int binary(int *a, int size, int num_to_search){
    int start=0 ,end=size-1 , mid=0;
    
    while(start<=end){
        mid=(start+end)/2;
        if(a[mid]==num_to_search){
            return mid;
            
        }
        else if(a[mid] < num_to_search){
            start=mid+1;

        }
        else if(a[mid] > num_to_search){
            end = mid-1;
        }
        else if(a[mid!=num_to_search]){
            return -1;
        }


    }

}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sr;
    cout << "Enter the number to search: ";
    cin >> sr;

    if(binary(arr, 10, sr)>=1){
        cout << "The no is at index: " << binary(arr, 10, sr);
    }
    else{
        cout << "Element not found.";
    }
    return 0;
}