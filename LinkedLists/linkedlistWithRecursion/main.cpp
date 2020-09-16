#include <iostream>

struct node{
    int data;
    node * next;

};

static void insert(node ** link, int data){
    // Create a temporary variable
    node * temp = new node();

    // Give the temp pointer its data
    temp->data = data;
    temp->next = (*link);

    // Move the head down the list by one
    temp->next = (*link);

    // Initialize the new head pointer
    (*link) = temp;

    temp = nullptr;

}

int length(node * link){
    int i = 0;
    for (node * cursor = link; cursor != nullptr; cursor = cursor->next) {
        ++i;
    }
    return i;
}

void print(node * link){
    if(link != nullptr){
        std::cout << link->data << " ";
        print(link->next);
    }

}

int search(node * link, int target){
    int i = 0, searched_value;
    bool isFound = false;
    for(node * cursor = link; cursor != nullptr; cursor = cursor->next){
        if(cursor->data == target){
            std::cout << "Target found at index: " << i << std::endl;
            searched_value = cursor->data;
            isFound = true;
        }
        ++i;
    }

    if(!isFound){
        searched_value = -1;
        std::cout << "Couldn't find target value in linked list" << std::endl;
    }

    return searched_value;

}

int getMax(node * link){
    // Create a variable for holding the largest number
    int maxNumber = 0;

    // Loop through the linked list and determine if there are any elements larger than maxNumber
    for (node * cursor = link; cursor != nullptr; cursor = cursor->next) {
        if(cursor->data > maxNumber){
            maxNumber = cursor->data;
        }

    }

    return maxNumber;

}

int sumOfLinkedList(node * link){
    // Use a linked list cursor to traverse and get the sum of all of the elements in the linked list
    int sum = 0;

    for (node * cursor = link; cursor != nullptr ; cursor = cursor->next) {
        sum += cursor->data;
    }

    return sum;
}

void deleteLl(struct node * head){
    if(head != nullptr){
        node * temp = head;
        head = head->next;
        delete temp;
        deleteLl(head);
    }

}


int main() {
    node * head = nullptr;

    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 7);
    insert(&head, 6);
    insert(&head, 9);
    insert(&head, 4);

//    std::cout << "The largest number in the linked list is " << getMax(head) << std::endl;
//    std::cout << "The sum of all of the numbers in the linked list is " << sumOfLinkedList(head) << std::endl;
//    std::cout << "The length of the linked list is " << length(head) << " elements" << std::endl;

//    search(head, 1);

    putchar('\n');

    print(head);
    deleteLl(head);

}
