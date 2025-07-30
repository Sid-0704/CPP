#include <iostream>
using namespace std;

int main(){
    int arr[6] = {10,6,3,9,5,7};

    for(int i=0; i<5; i++){
        int index = i;

        for(int j=i+1; j<6; j++){

            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    
    // printing the numbers 
    for(int n=0; n<6; n++){
        cout << arr[n] << " ";
    }

    return 0;
}