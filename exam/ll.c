#include <stdio.h>
#include <stdlib.h>

//make structure
struct node{
    int data;
    struct node *next;
};

void print_linked_list(struct node *node){
    while(node!=NULL){
        printf("%d ",node->data);
        node=node->next;
    }
    printf("\n");
}

int main(){
    //making nodes
    struct node *head;
    struct node *second;
    struct node *third;

    //define size of nodes
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    //put data in node
    head->data=23;
    head->next=second;
    second->data=54;
    second->next=third;
    third->data=32;
    third->next=NULL;

//function call
    print_linked_list(head);

    return 0;

}