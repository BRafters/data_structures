#include <stdio.h>
#include <stdlib.h>

// This program will demonstrate the use of doubly linked lists

// Create the node structure
struct node{
    // A doubly linked list requires a previous pointer and a next pointer, as well as some data
    struct node * prev;
    int data;
    struct node * next;
};

int length(struct node * head){
    int i = 1;
    while(head){
        ++i;
        head = head->next;
    }

    return i;
}

// Inserts at a given target in the list - This takes constant time in best case and linear time in worst case
void insertAtTarget(struct node ** head, int target, int x){
    // Determine if target is less than list size
    if(target <= length((*head))){
        // Create a new node
        struct node * newNode = (struct node*) malloc(sizeof(struct node));

        newNode->data = x;

        // Create our cursor
        struct node * cursor = (*head);
        int i = 1;

        // Loop to the node prior to our target
        for(; i < target - 1; ++i){
            cursor = cursor->next;
        }

        // Assign the previous ptrs 'next' ptr to newNodes 'next' ptr
        newNode->next = cursor->next;

        // Assign newNode's 'prev' ptr to the node prior to target
        newNode->prev = cursor;

        // The previous node's next node will point to newNode
        cursor->next = newNode;

        // If cursors next ptr is not null, we can then assign its next ptrs prev ptr to newNode
        if(newNode->next){
            // The node after newNode will have its 'prev' pointer pointing to newNode
            newNode->next->prev = newNode;

        }

    }

}


// Inserts at the head of the doubly linked list - This takes constant time in best and worst case scenario
void insertAtHead(struct node ** head, int x){
    // Create a new node
    struct node * newNode = NULL;

    // Determine if the head node is NULL or not
    if((*head) == NULL){
        (*head) = (struct node *) malloc(sizeof(struct node));
        // If it is NULL, then we are creating the first node, has no other nodes to link to, so prev and next are NULL
        (*head)->prev = NULL;
        (*head)->data = x;
        (*head)->next = NULL;
    }
    else{
        // Initialize newNode on the heap
        newNode = (struct node *) malloc(sizeof(struct node));

        // Point newNode's previous pointer to NULL
        newNode->prev = NULL;

        // Give newNode its data
        newNode->data = x;

        // Set newNode's next link to head
        newNode->next = (*head);

        // Set heads 'prev' pointer to head
        (*head)->prev = newNode;

        // Update head to the new head of the linked list
        (*head) = newNode;

    }
}

int main() {
    // Create a node
    struct node * head = NULL;

    insertAtHead(&head, 1);
    insertAtTarget(&head, 2, 2);

    return 0;

}
