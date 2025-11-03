// Write a program to delete n nodes after m nodes

#include <iostream>
using namespace std;

struct link{
    int data;
    link *next;

};

link *start=NULL, *current, *node;

void create(){
    int n;
    cout << "Enter size of linked list: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        node = new link();
        cin >> node->data;
        node->next =NULL;
        
        if(start==NULL){
            start = node;
            current = node;
        }
        else{
            current ->next = node;
            current = node;
        }
    }
}



void selectedDelete(){
    int n,m;
    cin >> n;
    cin >> m;

    link *ptr = start;

    for(int i=0; i<m-1; i++){
        ptr = ptr->next;
        current = current->next;
    }
     
    for(int i=0; i< n; i++){
        current = current->next;
    }
    


}


void display(){
    link *ptr =start;
    while(start != NULL){
        cout << ptr->data << " ";
        ptr= ptr->next;
    }

}

int main(){
    create();
    selectedDelete();
    display();


    return 0;
}