#include <stdio.h>
#include <malloc.h>

// This program demonstrates the use of operations on a doubly linked list

struct node{
    struct node * prev;
    int data;
    struct node * next;
};

// Inserts data of any type into the linked list
void insert(struct node ** head, int data){
    // Doing a head insert here
    struct node * newNode = (struct node *) malloc(sizeof(struct node));

    // Initializing the newNode struct pointer
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;

    // The previous pointer is now the head ptr
    // The head pointer is shifted right
    newNode->prev = (*head);
    newNode->next = (*head);

    // Head is now reinitialized
    (*head) = newNode;

}

int main() {
    struct node * head = NULL;
    int i = 0;

    for (; i < 8; ++i) {
        insert(&head, i);
    }


    return 0;
}
