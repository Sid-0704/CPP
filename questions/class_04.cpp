#include <iostream>
#include <limits>
using namespace std;


class lib{

    string noBook;
    string sub;
    float cost;

    public:
        void take(){
            cin >> cost ;
            cin >> noBook;
            cin >> sub;
        }

        void process(){
            cout << noBook << "\t" << cost << "\t" <<sub << endl;
        }

        string re(){
            return noBook;
        }

};


int main(){

    lib b[3];
    string search;
    int j=-1;

    for(int i=0; i<3; i++){
        b[i].take();

    }

    cout << "Enter the book to search: ";
    cin >> search;
    for(int i=0; i<3; i++){
        if(search == b[i].re()){
            j=i;            
        }
    }


    if(j>=0){
            b[j].process();
        
    }
    else{
        cout << "The book does not exist..";
    }

    return 0;
}