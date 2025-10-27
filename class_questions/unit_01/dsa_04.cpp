#include <iostream>
using namespace std;
// Linear search

int main(){
    
    int arr[1000], n, desiredNumber, index;
    bool isItTrue=0;
    cout << "Enter size of array: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the number you want to find: ";
    cin >> desiredNumber;

    for(int i=0; i<n; i++){
        if(arr[i]== desiredNumber){
            index = i;
            isItTrue =1;
            break;
        }
    }

    if(isItTrue==0){
        cout << "The number is not present in the array.";
    }

    else{
    cout << "The index of the element is: " << index;
    }
    return 0;
}