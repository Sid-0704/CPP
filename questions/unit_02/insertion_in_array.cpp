#include <iostream>
using namespace std;


class data{
    int a[10],i, pos, ins, posToDelete;
    public:
        void process(); //non-inline 
        void deleteit();
        void print();

};

void data::process(){
    for(i=0; i<9; i++){
        cin >> a[i];
    }

    cout << "Enter the position you want to insert element in: ";
    cin >> pos;

    cout << "Enter the number you want to insert: ";
    cin >> ins;

    for(int i=8; i>=pos; i--){
        a[i+1] = a[i];
    }
    a[pos]=ins;

}


void data::print(){
    for(int i=0; i<10; i++){
        cout << a[i] << " ";
    }
}




int main(){

    class data d;
    d.process();
    d.deleteit();
    d.print();


    return 0;
}