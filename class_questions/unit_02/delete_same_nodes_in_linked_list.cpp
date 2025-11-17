#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};


void create(Node *&head, int no){
    Node *node=new Node;
    node->data = no;
    node->next=NULL;

    if(head==NULL){
        head=node;
        return;
    }

    Node *ptr=head;
    while(ptr->next !=NULL){
        ptr=ptr->next;
    }
    ptr->next =node;
}

void deleteSame(Node *&head1, Node *&head2){

    Node *ptr1=head1;
    Node *current=ptr1->next;

    Node *ptr2=head2;

    while(ptr2!=NULL){
        int no=ptr2->data;

        if(ptr1->data == no){
            head1 = head1->next;
            ptr1 =ptr1->next;
            current = current->next;

            ptr2 = ptr2->next;
            continue;
        }

        while(current !=NULL){
            if(no==current->data){
                break;
            }
            else{
                ptr1 = ptr1->next;
                current= current->next;
            }
        }

        if(current !=NULL){

            ptr1->next =current->next;
        }
        
        ptr1=head1;
        current =ptr1->next;
        ptr2=ptr2->next;
        
    }
}



void display(Node *&head){
    Node *ptr=head;
    while(ptr!=NULL){
       cout << ptr->data << " ";
       ptr = ptr->next;
    }
}




int main(){
    Node *head1=NULL;
    Node *head2=NULL;

    int n1, n2;
    int no1,no2;
    cin >> n1;

    for(int i=0; i<n1; i++){
        cin >> no1;
        create(head1, no1);
    }


    cin >> n2;
    for(int i=0; i<n2; i++){
        cin >> no2;
        create(head2, no2);
    }

    deleteSame(head1, head2);
    
    display(head1);

}


