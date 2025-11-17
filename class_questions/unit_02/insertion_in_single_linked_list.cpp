/*

    Write a program to take 5 options from the user in single circulat linked list

*/

#include <iostream> 
using namespace std;

struct link{
    int data;
    link *next;
};

void insertAtBeg(link *&head, int no){
    link *node =new link;
    node->data =no;
    
    if(head==NULL){
        head =node;
        node->next =head;
        return;
    }
    
    
    link *ptr=head;
    while(ptr->next != head){
        ptr =ptr->next;
    }
    node->next =head;
    head =node;
    ptr->next = node;
    
}

void insertAtLast(link *&head, int no){
    link *node=new link();
    node->data =no;
    if(head==NULL){
        head =node;
        node->next =head;
        return;
    }

    link *ptr=head;
    while(ptr->next != head){
        ptr = ptr->next;
    }
    ptr ->next = node;
    node->next =head;
}

void insertAtPos(link *&head, int pos, int no){
    link *node =new link;
    node->data =no;

    link *ptr=head, *curr = ptr->next;
    for(int i=0; i<pos-2; i++){
        ptr=ptr->next;
        curr=curr->next;

    }   
    ptr->next =node;
    node->next =curr; 

}

void displayData(link *&head){
    link *ptr=head;
    do{
        cout << ptr->data << " ";
        ptr = ptr->next;
    }while(ptr !=head);
}

void reverse(link *&ptr){
    static link *temp=ptr;
    if(ptr->next != temp){
        
    }
}




int main(){

    int choice;
    link *head=NULL;
    int no, pos;


    while(true){
        cin >> choice;
        
        switch (choice){
            case 1:
                cout << "Enter the no you want to insert at beggining: ";
                cin >>no;
                insertAtBeg(head, no);
                break;
                    
            case 2:
                cin >> no;
                insertAtLast(head, no);
                break;
                        
            case 3:
                cin >> pos;
                cin >> no;
                insertAtPos(head, pos, no);
                break;

            case 4:
                displayData(head);

            case 5:
                exit(0);

            case 6:
                reverse(head);
                    
        }
    }
   
}