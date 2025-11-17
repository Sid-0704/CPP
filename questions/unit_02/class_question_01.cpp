/*
    Create a class emp with name, salary, and designation
    Enter the detail for 5 emp with member function
    Display with member function 5 employee
    Take a designation and search the employee if exists then update the designation to one level next
    Levels are clerk, officer1, officer2, manager, manager2
*/
#include <iostream>
#include <string>
using namespace std;

class employee{
    string name;
    int salary;
    string designation;
    
    public:
        void inputIn();
        void compareIt(string des);
        void printIt();

}arr[5];

void employee::inputIn(){
    
    cout << "Enter name of employee: ";
    cin >> name;
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter designation: ";
    cin >> designation;
}

void employee::compareIt(string des){
    cout << "Search employee";
    cin >> des;
    
    if(des=="clerk"){
        des = "officer1";
    }

    else if(des == "officer1"){
        des="officer2";
    }
    
    
    
}

void employee::printIt(){
    cout << "Name: " << name << "\n" << "Salary: " <<salary << "\n" << "Designation: " << designation << "\n\n";

}



int main(){

    int theCase;


    while(true){
        cin >> theCase;
        switch (theCase){
            case 1:
                for(int i=0; i<5; i++){
                    arr[i].inputIn();
                }

            case 2:
                for(int i=0; i<5; i++){
                    arr[i].printIt();
                }

            case 3:


            case 4:
                exit(0);


        }
    }
    








}

