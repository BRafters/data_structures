//
// Created by brenr on 2020-09-12.
//

#ifndef DYNAMIC_ARRAYS_USING_CLASSES_CONTAINER_H
#define DYNAMIC_ARRAYS_USING_CLASSES_CONTAINER_H

#include <iostream>

template<typename T>
class container {
public:
    // Default constructor which will initialize the size of the array and the array itself
    container<T>() : size(5), used(0), arr(new T[size]){};

    // Deconstructor
    ~container<T>();

    // Inserts an element into the dynamic array
    void insert(T data);

    // Determines if the array is full
    inline bool isFull() {return used == size;}

    // Resizes the array
    T * resize(T * arr);

    // Get the amount of elements that are taken up in the dynamic array
    inline int getUsedAmnt(){return used;}

    // Overload the array[] operator
    T operator[](int index);

    // Overload the output operator
    template <typename U>
    friend std::ostream& operator<< (std::ostream& output, container<U> array);

    void print();

private:
    T * arr;
    int size, used;

};

template<typename T>
void container<T>::insert(T data) {
    // First, check if the array is full, if so, we will do some resizing
    if(isFull()){
        this->arr = resize(arr);
    }
    // Once resized or not, we will add an element into the array
    this->arr[used] = data;

    // Increment used
    ++used;

}

template<typename T>
T *container<T>::resize(T * arr) {
    // Create a temporary pointer with size (size) + 1
    T * temp = new T[size + 5];

    // Copy over all of the elements from the old pointer to the temp pointer
    for (int i = 0; i < this->size; ++i) {
        temp[i] = arr[i];
    }

    // Delete the old array
    delete [] arr;

    // Copy over the address of the temp pointer to our the new array
    arr = temp;

    // Increment the size by 5
    size += 5;

    // Assign temp to null
    temp = nullptr;

    // Return the newly resized array
    return arr;

}

template<typename T>
T container<T>::operator[](int index) {
    // Determine if the index is larger than the array
    try{
        if(index > used){
            throw 20;
        }
    }
    catch(int e){
        std::cout << "Array index out of bounds. ";
        return e;
    }

    return this->arr[index];

}

template<typename U>
std::ostream &operator<<(std::ostream &output, container<U> array) {
    for (int i = 0; i < array.getUsedAmnt(); ++i) {
        output << array[i] << " ";
    }
    output << '\n';

    return output;
}

template<typename T>
container<T>::~container() {
    delete [] this->arr;
}

template<typename T>
void container<T>::print() {
    for (int i = 0; i < used; ++i) {
        std::cout << arr[i] << " ";
    }
    putchar('\n');
}


#endif //DYNAMIC_ARRAYS_USING_CLASSES_CONTAINER_H
