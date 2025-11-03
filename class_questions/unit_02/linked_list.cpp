#include <iostream>
using namespace std;

struct link{
    int data;
    link *next;
};

link *start[10]={NULL}, *current, *node;

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


void display(link *&start){
    link *ptr=start;
    while (ptr!=NULL){
        cout << ptr-> data << " ";
        ptr=ptr->next;
    }
}

int main(){

    for(int i=0; i<10; i++){
    
        create(start[i]);
    }
    
    for(int i=0; i<10; i++){
    cout << "first linked list elements are: ";
    display(start[i]);
    cout << endl;
    }
    
    return 0;
}