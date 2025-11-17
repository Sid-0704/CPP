#include <iostream>
using namespace std;

const int maxSize=5;
int stack[maxSize];
int top = -1;
int no;

void push(){
    if(top == (maxSize-1)){
        cout << "Overflow condition\n";
    }
    else{
        top += 1;
        cin >> no;
        stack[top] =no;
        cout << no << " inserted into the stack\n";
    }
}

void pop(){
    if(top==-1){
        cout << "Underflow condition\n";
    }
    else{
        cout << stack[top] << " deleted from stack\n";
        top -= 1;
        
    }
}

void peek(){
    if(top==-1){
        cout << "Stack is empty\n";
    }
    
    else{
        cout << "Top element of the stack is: " << stack[top] << endl;
    }
}


void display(){
    if(top==-1){
        cout << "Stack is empty\n";
    }
    else{
        cout << "Stack elements are: \n";
        for(int i=top; i>=0; i--){
            cout << stack[i] << " ";
        }
        cout << "\n";
    }
}



int main(){
    while(true){

        int choice;
        cin >> choice;

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;
            
            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                cout << "Invalid choice";

        }
    }









}