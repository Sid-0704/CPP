#include <iostream>
#include <string>
using namespace std;

int main(){
    char toSearch;
    int count=0;
    cout << "Enter the alphabet to search: ";
    cin >> toSearch;
    
    char a[2][7];
    for(int i=0; i<2; i++){
        for(int j=0; j<7; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<7; j++){
            if(a[i][j]==toSearch){
                count++;
            }
        }
    }
    cout << "The alphabet is present "<< count << " times in the string";    
    return 0;
}