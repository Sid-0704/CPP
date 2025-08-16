#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[1000] = {5, 6, 2, 1, 3, 4};
    
    for(int i=0; i<4; i++){

        for(int j=0; j<5; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }


    // printing the array
    for(int k=0; k<6; k++){
        cout << arr[k] << " ";
    }

    return 0;
}