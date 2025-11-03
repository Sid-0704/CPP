// Write a program to merge to linked list
#include <iostream>
using namespace std;

struct link{
    int data;
    link *next;
};

link *start1=NULL, *start2=NULL, *start3=NULL, *current, *node;

void create(link *&start){
    int n;
    cout << "No of nodes to be created: ";
    cin >> n;

    for(int i=0; i<n; i++){
        node = new link();
        /*
        The above code can also written as:
        node=(struct link *)malloc(sizeof(struct link));
        */
        cin >> node->data;
        node ->next = NULL;

        if(start==NULL){
            start = node;
            current = node;
        }
        else{
            current->next = node;
            current = node;
        }
    }
}

void merge_linkedList(link *&s1, link *&s2){
        
    while(s1!=NULL && s2!=NULL){

            node = new link();

        if(s1->data <= s2->data){
            node->data = s1->data;
            s1= s1->next;
        }

        else if(s2->data < s1->data){
            node->data = s2->data;
            s2=s2->next;
        }
        node->next = NULL;
        
        

        if(start3 == NULL){
            start3=node;
            current=node;
        }
        else{
            current->next = node;
            current=node;
        }
    }

    while(s1!=NULL){
        node = new link();
        node ->data =s1->data;
        s1 = s1->next;
        current->next =node;
        current =node;
    }

    while(s2!= NULL){
        node = new link();
        node ->data =s2->data;
        s2 = s2->next;
        current->next =node;
        current =node;
    }



}

void display(link *&start){
    link *ptr=start;
    while (ptr!=NULL){
        cout << ptr-> data << " ";
        ptr=ptr->next;
    }
}

int main(){

    create(start1);
    create(start2);
    
    merge_linkedList(start1, start2);

    cout << "The merged linked list is: ";
    display(start3);
    
    return 0;
}

//34-206
//28-201a