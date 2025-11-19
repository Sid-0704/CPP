#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};


void insertAtBeggining(Node* &head, int no){
    Node* jack = new Node();
    jack->data = no;
    jack->next = head;
    head = jack;
}

void insertAtEnd(Node* &head, int no){
    Node* jack = new Node();
    Node* ptr = head;

    jack->data = no;
    jack->next =NULL;

    while(ptr->next!=NULL){
        ptr= ptr->next;
    }
    ptr->next=jack;
}

void insertAtPos(Node* &head, int no, int pos){
    Node* jack= new Node();
    jack->data =no;
    Node* ptr=head;
    Node*current=head->next;
    for(int i=0; i<pos-2; i++){
        ptr=ptr->next;
        current=current->next;
    }
    ptr->next = jack;
    jack->next =current;
}

void displayData(Node* &head){
    Node* ptr=head;

    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr =ptr->next;
    }
    cout << "\n";
}

int main(){
    Node* head=NULL;
    int choice;
    int no;
    int pos;

    while(true){
        cin>> choice;
        switch (choice){
        case 1:
            cin >>no;
            insertAtBeggining(head, no);
            break;

        case 2:
            cin >> no;
            insertAtEnd(head, no);
            break;
            
        case 3:
            cin >> no;
            cin >> pos;
            insertAtPos(head, no, pos);
            break;
        
        case 4:
            displayData(head);
            break;

        case 5:
            exit(0);
        
        }
    }
}