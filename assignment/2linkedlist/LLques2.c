//How do you check if a given linked list contains a cycle? How do you find the starting node of the cycle?
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int checking(struct Node *list){
    struct Node *slow_p=list,*fast_p=list;
    while(slow_p && fast_p&& fast_p->next){
        slow_p=slow_p->next;
        if(slow_p==fast_p){
            return 1;
        }
    }
    return 0;
}

int main(){
    struct Node *head=NULL;
    struct Node *second=NULL;
    struct Node *third=NULL;
    struct Node *fourth=NULL;
    struct Node *fifth=NULL;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node *)malloc(sizeof(struct Node));

    head->data=134;
    head->next=second;
    second->data=165;
    second->next=third;
    third->data=654;
    third->next=fourth;
    fourth->data=189;
    fourth->next=fifth;
    fifth->data=103;
    fifth->next=head;

    //check this linked list is contain cycle or not

    if(checking(head)){
        printf("Loop found");
    }else{
        printf("No Loop");
    } 

    return 0;
}