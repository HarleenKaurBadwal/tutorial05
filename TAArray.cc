#include "TAArray.h"
#include <iostream>

//Initializing  the array 
TAArray::TAArray(int capacity) : capacity(capacity), size(0) {

    arr = new TextArea*[capacity];  
}

//Deallocating memory 
TAArray::~TAArray() {

    for (int i = 0; i < size; ++i) {

        delete arr[i];  
    }
    delete[] arr;  
}

// Adding a TextArea object 

void TAArray::add(TextArea* ta) {
    if (size < capacity) {
        arr[size++] = ta;
    } else {
        std::cerr << "Array is full, cannot add more elements." << std::endl;
    }
}

// Adding a TextArea
void TAArray::add(TextArea* ta, int index) {

    if (index >= 0 && index <= size && size < capacity) {
        for (int i = size; i > index; --i) {

            arr[i] = arr[i - 1];
        }
        arr[index] = ta;
        ++size;
    } else {
        std::cerr << "Invalid index or array full." << std::endl;
    }
}

// Retrieving a TextArea by its index
TextArea* TAArray::get(int index) const {
    if (index >= 0 && index < size) {

        return arr[index];
    }
    return nullptr;
}

// Retrieving a TextArea by thee ID
TextArea* TAArray::get(const std::string& id) const {

    for (int i = 0; i < size; ++i) {

        if (arr[i]->getId() == id) {
            return arr[i];
        }
    }
    return nullptr;
}

// Removing a TextArea 
TextArea* TAArray::remove(int index) {

    if (index >= 0 && index < size) {
        TextArea* removed = arr[index];
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }

        --size;
        return removed;
    }
    return nullptr;
}

// Removing a TextArea by its ID
TextArea* TAArray::remove(const std::string& id) {
    for (int i = 0; i < size; ++i) {
        if (arr[i]->getId() == id) {
            TextArea* removed = arr[i];
            for (int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            --size;
            return removed;
        }
    }



    return nullptr;
}

// Printing all the TextArea objects 
void TAArray::print() const {
    for (int i = 0; i < size; ++i) {
        arr[i]->print();
    }
}

// Returning the current number of elements
int TAArray::getSize() const {
    return size;
}
