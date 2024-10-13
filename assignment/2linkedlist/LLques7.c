/*
Perform all operation on singly linked list
1. traversing
2. insertion
3. deletion
4. searching
5. updation
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
    int data;
    struct Node *next;
};

void traverse(struct Node *node);
void Insertion(struct Node *node, int index, int data);
void deletion(struct Node *head,int value);
void searching(struct Node *node, int value);
void updation(struct Node *node,int pre_value, int value);
bool checkUB(struct Node *node);

bool check=true;

int main(){
    int choice;
    int pos,value,pre_value;
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

    printf("Choose your choice:\n");
    printf("1: for Traversing\n2: for Insertion\n3: for Deletion\n4: for Searching\n5: Update\n");
    printf("Enter choice=");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            traverse(head);
            break;
        case 2:
            printf("Enter value:");
            scanf("%d",&value);
            printf("Enter position:");
            scanf("%d",&pos);
            Insertion(head,value,pos);
            break;
        case 3:
            traverse(head);
            printf("Enter value:");
            scanf("%d",&value);
            deletion(head,value);
            break;
        case 4:
            traverse(head);
            printf("Enter value:");
            scanf("%d",&value);
            searching(head,value);
            break;
        case 5:
            traverse(head);
            printf("Enter value which you want to change:");
            scanf("%d",&pre_value);
            printf("Enter final value:");
            scanf("%d",&value);
            updation(head,pre_value,value);
            break;
        default:
            printf("Enter suitable choice..."); 
    }
    return 0;
}

void traverse(struct Node *node){
    while(node !=NULL){
       printf("%d ",node->data);
       node=node->next;    
    }
    printf("\n");
}  

void Insertion(struct Node *head,int value,int pos){
    int count=0;
    printf("before insert a value:\n");
    traverse(head);

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

    printf("after insert a value:\n");
    traverse(head);
}

void deletion(struct Node *head,int value){
    struct Node *node=head;
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));

    //for LB
    if((node->data)==value){
        head=head->next;
        free(node);
        traverse(head);
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
        traverse(head);
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
        traverse(head);
    }
}

void searching(struct Node *node, int value){
    while(node!=NULL)
    if((node->data) == value){
        printf("value is founded.");
        node=node->next;
    }
    printf("value is not founded.");
}

void updation(struct Node *node, int pre_value, int value){
    while(node!=NULL){
        if((node->data)== pre_value){
            node->data=value;
            break;
        }
        node=node->next;
    }
    traverse(node);
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