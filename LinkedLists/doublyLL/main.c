#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node * prev;
    int data;
    struct node * next;
}* HEAD = NULL;

void create(int A[], int n){
    int i;
    struct node * newNode, *last; // With the help of the 'last' node, we can continue creation of the rest of the nodes

    // Loop through the entire contents of the array
    for (i = 0; i < n; ++i) {
        if(HEAD == NULL){
            HEAD = (struct node *) malloc(sizeof(struct node));
            HEAD->data = A[i];
            HEAD->prev = NULL;
            HEAD->next = NULL;
            last = HEAD;
        }
        else{
            newNode = (struct node *) malloc(sizeof(struct node));
            newNode->prev = last;
            newNode->data = A[i];
            newNode->next = last->next; // NULL
            last->next = newNode;
            last = newNode;
        }
    }
}

void display(struct node * p){
    while (p){
        printf("%d ", p->data);
        p = p->next;
    }

    putchar('\n');
}

int length(struct node *p){
    int i = 0;
    while(p){
        ++i;
        p = p->next;
    }

    return i;
}

int main() {
    int a[] = {10,20,30,40,50};
    const int size = sizeof(a) / sizeof(int);
    create(a, size);
    display(HEAD);

    // Print the length of the doubly linked list
    printf("There are %d nodes in this doubly linked list\n", length(HEAD));

    return 0;
}
