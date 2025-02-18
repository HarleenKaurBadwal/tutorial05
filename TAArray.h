#ifndef TAARRAY_H
#define TAARRAY_H
#include "TextArea.h"
#include <iostream>

class TAArray {
private:
    TextArea** arr;
    int capacity;
    int size;

public:
    TAArray(int capacity = 10);

    ~TAArray();

    void add(TextArea* ta);


    void add(TextArea* ta, int index);
    TextArea* get(int index) const;
    TextArea* get(const std::string& id) const;
    TextArea* remove(int index);
    TextArea* remove(const std::string& id);
    void print() const;
    
    int getSize() const;
};
#endif 
