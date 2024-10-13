//write a c program to find a height of the tree

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

void Inordertraversal(struct node *root){
    if(root==NULL){
        return;
    }
    Inordertraversal(root->left);
    printf("%d->",root->data);
    Inordertraversal(root->right);
}

int height(struct node *root){
    if(root == NULL)
    return 0;
    else{
        int left_side;
        int right_side;
        left_side = height(root -> left);
        right_side = height(root -> right);
        if(left_side > right_side){
            return left_side + 1;
        }else{
            return right_side+1;
        }
    }
}

int main(){
    struct node* root=createnode(20);
    root->left=createnode(18);
    root->right=createnode(32);

    root->left->left=createnode(13);
    root->left->right=createnode(19);

    root->right->left=createnode(30);

    Inordertraversal(root);

    printf("\nheight of the tree=%d",height(root));

    return 0;
}