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


void deleteit(){
    int no;
    cout << "Enter the number you want to delete: ";
    cin >>no;

    link *ptr = start;
    current = ptr ->next;

    if(ptr->data == no){
        start = start->next;
    }

    else{
        while(current!=NULL){
            if(current->data==no){
                break;
            }
            ptr=ptr->next;
            current =current->next;
        }
        ptr->next = current->next;
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
    deleteit();
    display();


    return 0;
}