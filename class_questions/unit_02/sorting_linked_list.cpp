// Write a program to sort the elements of a single linked list

#include <iostream>
using namespace std;

struct link{
    int data;
    link *next;
};
link *start = NULL, *current, *node;

void create(){
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

void displaySorted(){

    link * ptr=start;
    current= ptr->next;
    int n;

    for(int i=0; i<n; i++){
        while(current!=NULL){
            if(ptr->data > current->data){
                swap(ptr->data, current->data);
            }
            ptr = ptr->next;
            current = current->next;
        }
    }

    
}

int main(){
    create();
    displaySorted();

    return 0;
}

