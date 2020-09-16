#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
}* first = NULL;

void print(){
    struct Node * temp = first;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }
    putchar('\n');

    free(temp);
}

void insert(int data){
    struct Node * temp = (struct Node *) malloc(sizeof(struct Node));

    temp->data = data;
    temp->link = NULL;

    // Moving the current head pointer down the list
    temp->link = first;

    // Assigning the new head pointer the data we have passed
    first = temp;

    temp = NULL;

}

void deleteLl(){

    while(first != NULL){
        struct Node * temp;
        temp = first;
        first = first->link;
        free(temp);
    }
}

int main(){
    insert(1);
    insert(3);
    insert(5);

    print();

    deleteLl();
}