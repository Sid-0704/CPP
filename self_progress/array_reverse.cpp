#include <iostream>
using namespace std;
// void reverseString();

int main(){
    int arr[5] = {1,2,3,4,5};
    int newarr[5]={0};
    int i=4, j=0;
    while(i>=0 ){
        newarr[j] = arr[i];
        i--;
        j++;
    }

    for(int m=0; m<5; m++){
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