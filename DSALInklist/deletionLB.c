#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;

    //delete first node:
    // head=second;

    struct Node *ptr;
    if(head==NULL){
        printf("underflow");
    }else{
        ptr=head;
        head=head->next;
        free(ptr);
    }

    printlist(head);

    return 0;
}