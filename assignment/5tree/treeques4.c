//Find nodes at “K” distance from the root.

#include <stdio.h>
#include <stdlib.h>

// Definition of a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to print nodes at distance K from the root
void printNodesAtDistanceK(struct Node* root, int K) {
    if (root == NULL) {
        return;
    }

    if (K == 0) {
        printf("%d ", root->data);
        return;
    }

    printNodesAtDistanceK(root->left, K - 1);
    printNodesAtDistanceK(root->right, K - 1);
}

int main() {
    // Creating a binary tree
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    int K = 2;
    printf("Nodes at distance %d from the root: ", K);
    printNodesAtDistanceK(root, K);
    printf("\n");

    // Free the allocated memory
    free(root->left->left);
    free(root->left->right);
    free(root->right->left);
    free(root->right->right);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
