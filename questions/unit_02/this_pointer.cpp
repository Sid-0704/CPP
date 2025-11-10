#include <iostream>
using namespace std;

class student{
    string name;
    int roll;
    float cgpa;
    public:
        void in(){
            cin >> this-> name;
            cin >> roll >> cgpa;
        }

        friend void process(student);
    };
    
    
void process(student ss){
    cout << ss.name << " " << ss.roll << " " << ss.cgpa <<endl;

}

int main(){
    student s;

    
    
    s.in();
    process(s);


    return 0;
}