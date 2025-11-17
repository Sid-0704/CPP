#include <iostream>
using namespace std;

class student{
    int student;
    int roll;
    float marks;
    string name;

    public:
        void takeEverything();
};

void student::takeEverything(){

    cin >>roll;
    cin>>marks;

    
    int student::*ptrr = &student::roll;
    float student::*ptrm = &student::marks;
    string student::*ptn=&student::name;

    cout << this->*ptrr << endl;
    cout << this->*ptrm << endl;

}

int main(){

    student s1;
    s1.takeEverything();
    return 0;
}