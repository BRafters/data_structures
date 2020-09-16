#include <stdio.h>
#include <malloc.h>

// This program will demonstrate the use of circular linked lists in a program

// We first must create structure (node)
struct node{
    int data;
    struct node * next;
}* HEAD = NULL, * TAIL = NULL;

void insert(int newData){
    struct node * newNode;
    if(HEAD == NULL){
        // Initialize the head pointer
        HEAD = (struct node *) malloc(sizeof(struct node));
        HEAD->data = newData;
        HEAD->next = HEAD; // Make head point to itself making it circular
        TAIL = HEAD;

    }
    else{
        newNode = (struct node *) malloc(sizeof(struct node));
        newNode->data = newData;

        // This keeps the circular structure of the linked list
        newNode->next = TAIL->next;
        TAIL->next = newNode;
        TAIL = newNode;

    }

}


// This portion will demonstrate the deletion of a node from a linked list

// Instead of looping through the entire linked list to get tail (which takes O(n) time),
// We can instead use the tail pointer and redirect its 'next' pointer
// Deletion from the head node
void deleteAtHead(){
    // Assign head to a temporary pointer that we will be deleting
    struct node * temp = HEAD;

    // Make the tail pointer head to the next element from head
    TAIL->next = HEAD->next;

    // Reassign head
    HEAD = HEAD->next;

    // Delete the old head pointer
    free(temp);

}

// This deletes an element at the target index
void deleteAtTarget(int target){
    // Create a cursor pointer that begins at the HEAD pointer
    struct node * cursor = HEAD;
    struct node * targetNode = NULL;

    // Point to the node prior to our target node
    for(int i = 1; i < target - 1; ++i){
        cursor = cursor->next;
    }

    // We are now going to retrieve our target pointer
    targetNode = cursor->next;

    // Now that we have our target pointer, we will redirect cursor->next (prior nodes 'next' ptr)
    // To the pointer after the one we are wanting to delete
    cursor->next = targetNode->next;

    // Free the node we are wanting to delete from memory
    free(targetNode);

}

// Recursive function that prints the circular linked list
void display(struct node * nodePtr){
    static int flag = 0; // Must make static as in each function the flag with be in local scope
    if(nodePtr != HEAD || flag == 0){
        printf("%d ", nodePtr->data);
        flag = 1;
        display(nodePtr->next);
    }
}

int main() {
    // Insert into the linked list
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    // Should delete 3 from the list
    deleteAtTarget(3);

    // If we delete at head, the result of the linked list should be 2, 4, 5
    deleteAtHead();

    display(HEAD);
}
