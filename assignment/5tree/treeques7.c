//Separate chaining implementation in C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

// Node structure for the linked list
struct Node {
    int key;
    int value;
    struct Node* next;
};

// Hash table structure
struct HashTable {
    struct Node* table[TABLE_SIZE];
};

// Function to create a new node
struct Node* createNode(int key, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// Function to create a new hash table
struct HashTable* createTable() {
    struct HashTable* hashTable = (struct HashTable*)malloc(sizeof(struct HashTable));
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable->table[i] = NULL;
    }
    return hashTable;
}

// Hash function
int hashFunction(int key) {
    return key % TABLE_SIZE;
}

// Function to insert a key-value pair into the hash table
void insert(struct HashTable* hashTable, int key, int value) {
    int hashIndex = hashFunction(key);
    struct Node* newNode = createNode(key, value);

    if (hashTable->table[hashIndex] == NULL) {
        hashTable->table[hashIndex] = newNode;
    } else {
        struct Node* temp = hashTable->table[hashIndex];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to search for a value by key in the hash table
int search(struct HashTable* hashTable, int key) {
    int hashIndex = hashFunction(key);
    struct Node* temp = hashTable->table[hashIndex];

    while (temp != NULL) {
        if (temp->key == key) {
            return temp->value;
        }
        temp = temp->next;
    }

    return -1; // Key not found
}

// Function to delete a key-value pair from the hash table
void delete(struct HashTable* hashTable, int key) {
    int hashIndex = hashFunction(key);
    struct Node* temp = hashTable->table[hashIndex];
    struct Node* prev = NULL;

    if (temp != NULL && temp->key == key) {
        hashTable->table[hashIndex] = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->key != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        return; // Key not found
    }

    prev->next = temp->next;
    free(temp);
}

// Function to display the hash table
void display(struct HashTable* hashTable) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        struct Node* temp = hashTable->table[i];
        printf("Index %d: ", i);
        while (temp != NULL) {
            printf("(%d, %d) -> ", temp->key, temp->value);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    struct HashTable* hashTable = createTable();

    insert(hashTable, 1, 10);
    insert(hashTable, 2, 20);
    insert(hashTable, 12, 120);
    insert(hashTable, 22, 220);

    printf("Hash Table:\n");
    display(hashTable);

    int key = 12;
    int value = search(hashTable, key);
    if (value != -1) {
        printf("Key %d found with value %d\n", key, value);
    } else {
        printf("Key %d not found\n", key);
    }

    delete(hashTable, 12);
    printf("Hash Table after deleting key 12:\n");
    display(hashTable);

    free(hashTable);

    return 0;
}