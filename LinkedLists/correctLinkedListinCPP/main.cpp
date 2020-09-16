#include <iostream>

template <typename T>
struct node{
    T data;
    node * next;
};

template <typename T>
struct linkedList{
    node<T> * head = nullptr;
    void insert(T data);
    void print();
};

template<typename T>
void linkedList<T>::insert(T data) {
    // Insertion at the head of the list
    // Create a temporary pointer to node
    node<T> * temp = new node<T>();

    // Give the temporary pointer its data
    temp->data = data;
    temp->next = nullptr;

    // Move the head pointer to the next pointer so that we can insert at the head
    temp->next = head;

    // Make the head pointer point to the new head
    head = temp;

}

template<typename T>
void linkedList<T>::print() {

    // Go though the entire linked list
    for(node<T> * cursor = head; cursor != nullptr; cursor = cursor->next){
        std::cout << cursor->data << " ";
    }

    putchar('\n');

}

int main() {
    struct linkedList<int> ll;

    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);

    // Print the contents of the linked list out
    ll.print();
}
