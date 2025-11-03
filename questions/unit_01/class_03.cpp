// Create a class with data member marks of 3 subjects (float) member function 1 will take marks of sub1
// member function 2 and 3 will take marks of sub2 and sub3 
// 4th function is average  

#include <iostream>
using namespace std;

class student{
    private:
    float sub1, sub2, sub3, avg;
    
    public:
    int marksSub1(){
        cin >> sub1;
        return sub1;
    }

    int marksSub2(){
        cin >> sub2;
        return sub2;
    }

    int marksSub3(){
        cin >> sub3;
        return sub3;
    }

    int theAverage(){
        avg = (sub1 + sub2 + sub3) / 3;
        return avg;
    }

};

    




int main(){

    student stud[1000];
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    for(int i=0; i < n; i++){
        cout << "Enter details of student " << i+1 << endl;
        cout << "Enter 1st subject marks: ";
        stud[i].marksSub1();

        cout << "Enter 2nd subject marks: ";
        stud[i].marksSub2();

        cout << "Enter 3rd subject marks: ";
        stud[i].marksSub3();

        cout << "The average marks of student " << i+1 << " is: " <<stud[i].theAverage() << endl;
    }

    return 0;
}