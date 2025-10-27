// Write a program to search one element from a single linked list

#include <iostream>
using namespace std;

struct link{
    int data;
    link *next;
} *start = NULL, *current, *node;

void create(){
    int n;
    cin >> n; // how many nodes user wants to create

    
    for(int i=0; i<n; i++){
        
        node = new link();
        cin >> node->data;
        node->next = NULL;

        if(start == NULL){
            start = node;
            current = node;
        }
        
        else{
            current->next = node;
            current = node;
        }

        
    }
}

void display(){
    // Printing the linked list
    link *ptr = start;
    cout << "The linked list is: ";
    while(ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

}

void search(){
    int no;
    cout << "Enter the number you want to search: ";
    cin >> no;
    link *ptr = start;
    
    while(ptr != NULL){
        if(no == ptr->data){
            cout << "The no is present";
            break;
        }
        ptr = ptr->next;
    }

    if(ptr == NULL){
        cout << "The no is not present";
    }
}

int main(){
    create();
    display();

    search();


    return 0;
}