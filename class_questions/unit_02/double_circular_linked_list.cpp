#include <iostream>
using namespace std;


struct link{
    int data;
    link* prev;
    link* next;
};

void create(link **head, int no){
    link *node=new link();
    node->data =no;
    if(*head==NULL){
        *head =node;
        node->next =*head;
        node->prev =*head;
        return;
    }
    link *ptr=*head;
    while(ptr->next != *head){
        ptr = ptr->next;
    }
    (*head)->prev = node;
    ptr ->next = node;
    node->prev =ptr;
    node->next =*head;
}



void display(link **head){
    link *ptr=*head;
    do{
        cout << ptr->data << " ";
        ptr = ptr->next;
    }while(ptr!=(*head));
}

void reverse(link *&head){
    link *ptr=head->prev;
    do{
        cout << ptr->data << " ";
        ptr = ptr->prev;
    }while(ptr!=head->prev);
}


int main(){

    int n;
    cin >> n;
    link* head= NULL;
    int no;
    for(int i=0; i<n; i++){
        cin >>no;
        create(&head, no);
    } 

    display(&head);

    reverse(head);

}