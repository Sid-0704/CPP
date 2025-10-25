// Write a program to find the occurence of each character from an array

#include <iostream>
using namespace std;

int main(){

    char arr[1000];
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }


    // sorting
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    // Printing array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }



    cout << "\n";

    int ctr = 1;
    for(int i=0; i<n; i++){
        while(arr[i]==arr[i+1]){
            ctr++;
            i++;
        }
        cout << arr[i] << " is present " << ctr << " times \n";
        ctr =1;
    }







    return 0;
}