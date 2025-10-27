// Write a program to insert a number in particular position of a linked list

#include <iostream>
using namespace std;

struct link{
    int data;
    link *next;
} *start = NULL, *current, *node;

void create(){
    int n;
    cout << "Enter size of linked list: ";
    cin >> n; // how many nodes user wants to create

    cout << "Enter the elements: ";
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

void insert(){
    int pos, no;
    cout << "Enter the position: ";
    cin >> pos;
    cout << "Enter the number: ";
    cin >> no;

    link *ptr = start;
    current = ptr->next;

    for(int i=0; i<pos-2; i++){
        ptr = ptr->next;
        current = current ->next;
    }

    node = new link();
    node->data = no;
    ptr ->next = node;
    node->next = current;

}





void display(){
    // Printing the linked list
    link *ptr = start;
    while(ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

}

int main(){
    create();
    insert();
    display();
    return 0;
}