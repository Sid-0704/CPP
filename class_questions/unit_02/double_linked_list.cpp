// Write a program to accept 1-5 from user by using double linked list

#include <iostream>
using namespace std;

struct link{
    int data;
    link *prev;
    link *next;
};

link* insertAtBeg(link *&head, int no){

    link *node = new link();
    node->data = no;
    node->next = NULL;
    node->prev = NULL;

    if(head==NULL){
        return node;
    }
    else{
        node->next = head;
        head->prev = node;
        head = node;
        return head;
    }
}

link* insertAtLast(link *&head, int no){

    link *node = new link();
    node->data = no;
    node->next = NULL;
    node->prev = NULL;

    link *ptr=head;

    if(head==NULL){
        return node;
    }
    else{
        while(ptr->next != NULL){
            ptr= ptr->next;

        }
        ptr->next = node;
        node->prev = ptr;
        return head;
    }    
}

link* insertAtPos(link *&head, int no, int pos){

    link *node = new link;
    node->data = no;

    link *ptr = head;
    link *current= ptr->next;

    for(int i=0; i<pos-2; i++){
        ptr = ptr->next;
        current = current->next;
    }

    ptr->next =node;
    node ->prev = ptr;
    node->next = current;
    current->prev =node;
    return head;
    
}



void display(link *&head){
    link *ptr = head;
    while(ptr!= NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

void displayReversed(link *&head){
    link *ptr=head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr = ptr->prev; 
    }

}

link* sortLinkedList(link *&head){

    int n =0;
    link *ptr=head;
    while(ptr!=NULL){
        n++;
        ptr = ptr->next;
    }

    ptr = head;
    link *current= ptr->next;

    for(int i=0; i<n; i++){
    
        while(current!=NULL){
            if(ptr->data > current->data){
                swap(ptr->data, current->data);
            }
            ptr= ptr->next;
            current=current->next;
        }
        ptr = head;
        current = ptr->next;

    }
  return head;

}


int main(){

    link *head=NULL;
    int no, pos;
    int choice;
    
    while(true){
        cin >> choice;
        switch (choice)
        {

        case 1:
            cin >> no;
            head = insertAtBeg(head, no);
            break;
            
        case 2:
            cin >> no;
            head= insertAtLast(head, no);
            break;

        case 3:
            cin >> pos;
            cin >> no;
            head= insertAtPos(head, no, pos);
            break;

        case 4:
            display(head);
            break;

        case 5:
            exit(0);

        case 6:
            displayReversed(head);
            break;

        case 7:
            cout << "\n Sorted order is: ";
            head = sortLinkedList(head);
            break;
        }
    }
}