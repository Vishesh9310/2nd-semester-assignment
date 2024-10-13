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
    int place,value;
    int count=0;

    printf("Enter number where you want to insert you digit:");
    scanf("%d",&place);
    printf("Enter digit which you want to insert:");
    scanf("%d",&value);

    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;
    struct Node* new_node;

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


    struct Node* temp=head;
    struct Node* next_backup=NULL;
    
    int position=place-1;
    
    while(temp!=NULL){
        if(count==position){
            next_backup->next=new_node;
            new_node->data=value;
            new_node->next=temp;
            //next_backup(address)=new-node;
        }
        next_backup=temp;
        temp=temp->next; 
        count++;
    }

    printlist(head);

    return 0;
}