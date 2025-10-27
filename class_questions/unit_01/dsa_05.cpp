// Write a program to find the occurence of each character from an array with time complexity of O(n) times

#include <iostream>
using namespace std;

int main(){

    char arr[1000];
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    int hash[256] = {0};

    for(int i=0; i<n; i++){
        char ch = arr[i];
        hash[(int)ch]++;
    }

    for(int i=0; i<256; i++){
        if(hash[i]!=0){
            cout << (char)i << " is present " << hash[i] << " times \n";
        }
    }




    return 0;
}