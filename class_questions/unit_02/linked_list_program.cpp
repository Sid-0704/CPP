#include <iostream>
using namespace std;

struct link{

    int data;
    link *next;
};

link* insertAtBeg(link *&head, int no){
    
    link* node = new link();
    node->data = no;
    node->next = NULL;

    if(head==NULL){
        return node;
    }
    else{
        node->next = head;
        head = node;
        return head;
    }
}

link* insertAtLast(link *&head, int no){

    link* node = new link();
    node->data = no;
    node->next = NULL;
    
    link *ptr=head;
    if(head==NULL){
        return node;
    }

    else{
        while( ptr->next != NULL ){
            ptr= ptr->next;
            ptr->next = node;
            return head;
        }
    }
}

link* insertAtPos(link *&head, int no, int pos){

    link *node = new link();
    node->data = no;
    link *ptr=head;
    link *current=ptr->next;

    for(int i=0; i<pos-2; i++){
        ptr = ptr->next;
        current = current->next;
    }
    ptr->next = node;
    node->next = current;
    return head;
}



void display(link *&head){
    link *ptr = head;
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
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
        
        }
    }
}