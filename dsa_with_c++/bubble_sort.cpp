#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[1000] = {6, 3, 5, 1, 2, 4};
    int last_element = 5;

    for(int i=0; i< 4; i++){

        for(int j=0; j<last_element; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        last_element -= 1;
    }


    // printing the array
    for(int k=0; k<6; k++){
        cout << arr[k] << " ";
    }

    return 0;
}