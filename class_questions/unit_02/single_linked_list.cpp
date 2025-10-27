// Write a program to create a single linked list

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
    while(ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

}

int main(){
    create();
    display();
    return 0;
}