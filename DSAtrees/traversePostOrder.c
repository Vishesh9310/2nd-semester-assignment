#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node *createnode(int value){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
}

void Postorder_traverse(struct node *root){
    if(root==NULL){
        return;
    }
    Postorder_traverse(root->left);
    Postorder_traverse(root->right);
    printf("%d->",root->data);
}

int main(){
    struct node *root=createnode(20);
    root->left=createnode(8);
    root->right=createnode(21);

    root->left->left=createnode(4);
    root->left->right=createnode(9);

    root->right->left=createnode(19);

    Postorder_traverse(root);

    return 0;
}