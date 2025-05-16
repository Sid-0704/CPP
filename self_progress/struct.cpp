#include <iostream>
#include <string>
using namespace std;

// This structure is called a named structure
struct oldStruct
{
    string student;
    int marks;
    float percentage;
    
};



int main(){

    struct{
        string name;
        int age;
    
    } newstruct;
    

    newstruct.name = "Siddharth Raj";
    newstruct.age = 20;

    cout << "new structure has name as " << newstruct.name << " and age as " << newstruct.age << endl;



    // To use named structure, we first need to declare a variable that uses the structure
    oldStruct namedStruct;
    namedStruct.marks = 78;
    namedStruct.student = "Demo Name";
    namedStruct.percentage = namedStruct.marks/1;

    cout << "All the details of the stdent are available here: " << endl << namedStruct.student << endl << namedStruct.marks << endl << namedStruct.percentage;


    return 0;
}