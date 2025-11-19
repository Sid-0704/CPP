#include <iostream>
#include <fstream>
using namespace std;

int main(){

    fstream ff;
    ff.open("test.txt",ios::app);
    int x=1000;
    ff << x;
    
    
    
    ff.close();
}