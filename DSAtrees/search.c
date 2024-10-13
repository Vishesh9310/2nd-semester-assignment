#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node *createnode(int value){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

void traverseInOrder(struct node *root){
    if(root==NULL){
        return;
    }
    traverseInOrder(root->left);
    printf("%d->",root->data);
    traverseInOrder(root->right);
}

struct node *search(struct node *root, int key){
    if(root==NULL||root->data==key){
        return root;
    }
    if(root->data < key){
        return search(root->right,key);
    }
    return search(root->left,key);
}

int main(){
    int key;

    struct node *root=createnode(20);
    root->left=createnode(12);
    root->right=createnode(28);

    root->left->left=createnode(4);
    root->left->right=createnode(20);

    root->right->left=createnode(20);
    root->right->right=createnode(36);

    //traverse Inorder
    traverseInOrder(root);

    printf("\nEnter key value:");
    scanf("%d",&key);

    if(search(root,key)==NULL){
        printf("%d not found\n",key);
    }else{
        printf("%d found\n",key);
    }

    return 0;
}