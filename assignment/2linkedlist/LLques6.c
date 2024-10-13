//Traverse the doubly linked list, circular linked list and circular doubly linked list

//1. traverse a doubly linked list
//a) in forward to first element
/*
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *pre;
    struct Node *next;
};

void display(struct Node *node){
    while(node!=NULL){
        printf("%d ",node->data);
        node=node->next;
    }
    printf("\n");
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

    head->pre=NULL;
    head->data=134;
    head->next=second;

    second->pre=head;
    second->data=165;
    second->next=third;

    third->pre=second;
    third->data=654;
    third->next=fourth;

    fourth->pre=third;
    fourth->data=189;
    fourth->next=fifth;

    fifth->pre=fourth;
    fifth->data=103;
    fifth->next=NULL;

    display(head);

    return 0;
}*/

//b) in backward to last element
/*
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *pre;
    struct Node *next;
};

void display(struct Node *node){
    while(node!=NULL){
        printf("%d ",node->data);
        node=node->pre;
    }
    printf("\n");
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

    head->pre=NULL;
    head->data=134;
    head->next=second;

    second->pre=head;
    second->data=165;
    second->next=third;

    third->pre=second;
    third->data=654;
    third->next=fourth;

    fourth->pre=third;
    fourth->data=189;
    fourth->next=fifth;

    fifth->pre=fourth;
    fifth->data=103;
    fifth->next=NULL;

    display(head);

    return 0;
}
*/

//2. traverse a circular linked list
/*
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int display(struct Node *list){
    struct Node *slow_p=list,*fast_p=list;
    printf("%d ",list->data);
    while(slow_p && fast_p&& fast_p->next){
        slow_p=slow_p->next;
        while(slow_p!=fast_p){
          printf ("%d ", slow_p->data);
          slow_p = slow_p->next;
    }
  printf ("\n");
  break;
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

    display(head);

    return 0;
}
*/

//3. circular doubly linked list

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *pre;
    struct Node *next;
};

int display(struct Node *list){
    struct Node *slow_p=list,*fast_p=list;
    printf("%d ",list->data);
    while(slow_p && fast_p&& fast_p->next){
        slow_p=slow_p->next;
        while(slow_p!=fast_p){
          printf ("%d ", slow_p->data);
          slow_p = slow_p->next;
    }
  printf ("\n");
  break;
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

    head->pre=NULL;
    head->data=134;
    head->next=second;

    second->pre=head;
    second->data=165;
    second->next=third;

    third->pre=second;
    third->data=654;
    third->next=fourth;

    fourth->pre=third;
    fourth->data=189;
    fourth->next=fifth;

    fifth->pre=fourth;
    fifth->data=103;
    fifth->next=NULL;

    display(head);

    return 0;
}