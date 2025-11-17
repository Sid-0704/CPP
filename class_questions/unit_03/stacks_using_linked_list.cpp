#include <iostream>
using namespace std;

struct link{
    int data;
    link *next;
};

link *top = NULL, *node;

void push(){
    node =new link();
    cin >> node->data;
    node->next =top;
    top =node;
    cout << node->data << " inserted into stack\n";
}

void pop(){

    if(top==NULL){
        cout << "underflow conditon\n";
    }

    else{
        cout << top->data << " has been deleted from stack\n";
        top = top->next;
    }
}

void peek(){
    if(top==NULL){
        cout << "Stack is empty\n";
    }

    else{    
        cout << "The top element of the stack is: " << top->data << endl; 
    }
}

void display(){

    if(top==NULL){
        cout << "Stack is empty\n";
        return;
    }

    link *ptr = top;
    cout << "stack elements are:\n";
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr= ptr->next;
    }
    cout << endl;
}

int main(){
    int choice;

    while(true){
        cin >> choice;

        switch (choice){
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
                cout << "invalid choice\n";
        }
    }

}
 