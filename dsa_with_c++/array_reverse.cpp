#include <iostream>
using namespace std;

/*
this approach of reversing an array uses another array and 
value of 1st element of 2nd array is set to last element of 1st array and use for loop to do this method for every element in the array

*/

// void reverseString();

int main(){
    int arrsize;
    int arr[1000];

    cout << "Enter the array size: ";
    cin >> arrsize;

    cout << "Enter the array elements: ";
    for(int z=0; z<arrsize; z++){
        cin >> arr[z];
    }




    int newarr[arrsize]={0};
    int i=arrsize -1 , j=0;
    while(i>=0 ){
        newarr[j] = arr[i];
        i--;
        j++;
    }
    cout << "The reversed array is:\n";

    for(int m=0; m<arrsize ; m++){
        cout << newarr[m] << "\n";
    }
    

    return 0;
}

/*
void reverseString(){
    int arr[5] = {1,2,3,4,5};
    int newarr[5], i=5, j=0;
    while(i>=0 ){
        arr[i] = newarr[j];
        i--;
        j++;
    }

}
*/