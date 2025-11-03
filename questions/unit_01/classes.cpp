#include <iostream>
using namespace std;


class student{
    private:
    char name[20];
    int roll_no;
    float cgpa;

    public:
        void in(){
            cin >> name >> roll_no >> cgpa;

        }
        void out();

        void cgp();


    /*
    public:
        void inputValues(){
            cout << "Enter name of student: ";
            cin >> name ;

            cout << "Enter roll no of student: ";
            cin >> roll_no;
        }

        void displayValues(){
            cout << "Name of the student is: " << name << "\n roll no of student is: " << roll_no;
        }

        */
}s1, s2;


void student::out(){
    cout << name  << roll_no;
}

void student::cgp(){
    cout << "The CGPA entered was: " << cgpa << "\n The percentage is: " << cgpa * 10 << "%";
}


int main(){
    cout << sizeof(s2) << endl;
    


    s1.in();
    s1.out();
    s1.cgp();


    return 0;
}