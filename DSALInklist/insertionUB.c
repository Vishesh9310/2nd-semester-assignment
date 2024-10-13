#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void printlist(struct Node* n){
    while(n!=NULL){
        printf("%d\n",n->data);
        n=n->next;
    }
}

int main(){
    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;
    struct Node* new_node=NULL;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    new_node=(struct Node*)malloc(sizeof(struct Node));

    head-> data=10;
    head-> next=second;
    second-> data=20;
    second-> next=third;
    third-> data=30;
    third-> next=NULL;

    struct Node* pointer=head;

    while(pointer!=NULL){
        if(pointer->next==NULL){
            pointer->next=new_node;
            new_node->data=50;
            new_node->next=NULL;
        }
        pointer=pointer->next;
    }

    printlist(head);

    return 0;
}