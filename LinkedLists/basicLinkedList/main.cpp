#include <iostream>

template <typename T>
struct node{
    T data;
    node * link;
};

template <typename T>
struct LinkedList{
    struct node<T> * head = nullptr;
    struct node<T> * tail = nullptr;
    void insert(T init_data, node<T> * init_link = nullptr);
    void deleteLinkedList();
    void print();
};

template<typename T>
void LinkedList<T>::insert(T init_data, node<T> * init_link) {
    if(head == nullptr){
        head = new node<T>{init_data};
        tail = head;
    }
    else{
        tail->link = new node<T>{init_data};
        tail = tail->link;
    }
}

template<typename T>
void LinkedList<T>::print() {
    for (node<T> * cursor = head; cursor != nullptr; cursor = cursor->link) {
        std::cout << cursor->data << " ";
    }
    putchar('\n');
}

template<typename T>
void LinkedList<T>::deleteLinkedList() {
    node<T> * cursor = head;

    while(cursor != nullptr){
        node<T> * temp = cursor;
        cursor = cursor->link();

        delete temp;
    }
}

int main() {
    struct LinkedList<int> ll;

    // Insert numbers 1 through 5
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);

    // Print the contents of the array
    ll.print();

}
