#include <iostream>
using namespace std;

class data{
    int n;
    char name[1000];
    char sr;
    int count=0;

    public:
        void in();
        void process();
        void print();

}d1;


void data::in(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> name[i];
    }
    cin >> sr;
}

void data::process(){
    for(int i=0; i<n; i++){
        if(name[i]==sr){
            count++;
        }
    }
}

void data::print(){
    
    if(count>0){
    cout << "The letter is present: " << count << " times.";
    }

    else{
        cout << "The letter does not exist in the string.";
    }
}

int main(){
    data d;
    d.in();
    d.process();
    d.print();
    return 0;
}