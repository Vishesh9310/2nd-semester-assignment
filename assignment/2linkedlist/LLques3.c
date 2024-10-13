//How to add and remove an element in the middle of the linked list?
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
    int data;
    struct Node *next;
};

void print(struct Node *node){
    while(node!=NULL){
        printf("%d ",node->data);
        node=node->next;
    }
    printf("\n");
}
void add_element(struct Node *head,int value,int pos);
void remove_element(struct Node *head,int value);
bool checkUB(struct Node *node);

bool check=true;

int main(){
    int choice,pos,value;
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
    fifth->next=NULL;

    print(head);

    printf("Enter choice:\n1.for add element.\n2.for remove element.\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter value:");
            scanf("%d",&value);
            printf("Enter position:");
            scanf("%d",&pos);
            add_element(head,value,pos);
            break;
        case 2:
            print(head);
            printf("Enter position:");
            scanf("%d",&value);
            remove_element(head,value);
            break;
        default:
            printf("invalid choice...");
            break;
    }

    return 0;
}

void add_element(struct Node *head,int value,int pos){
    int count=0;

    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp=head;
    struct Node* next_backup=NULL;
    
    int position=pos-1;
    
    while(temp!=NULL){
        if(count==position){
            next_backup->next=new_node;
            new_node->data=value;
            new_node->next=temp;
        }
        next_backup=temp;
        temp=temp->next; 
        count++;
    }

    print(head);
}
void remove_element(struct Node *head,int value){
    struct Node *node=head;
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));

    //for LB
    if((node->data)==value){
        head=head->next;
        free(node);
        print(head);
    }else if(checkUB(head)==true){
        while(node!=NULL){
            if(node->next==NULL){
                temp=NULL;
                free(node);
                break;
            }
            temp=node;
            node=node->next;
        }
        print(head);
    }else{
        //for middle
        while(node!=NULL){
            if((node->data)==value){
                temp->next=node->next;
                free(node);
                break;
            }
            temp=node;
            node=node->next;
        }
        print(head);
    }
}

bool checkUB(struct Node *node){
    while(node!=NULL){
        if(node==NULL){
            return true;
            break;
        }
        node=node->next;
    }
    return false;
}