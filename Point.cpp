#include <iostream>
#include "Point.h"

void Point::push_back(int elem) {
    // 1
    int *tmp = new int[size + 1];
    // 2
    for(int i = 0; i < size; i++)
        tmp[i] = data[i];
    // 3
    tmp[size] = elem;
    // 4
    size += 1;
    // 5
    delete [] data;
    // 6
    data = tmp;
}

void Point::insert(int elem, int pos) {
    // 1
    int *tmp = new int[size + 1];
    // 2
    for(int i = 0, j = 0; i < size; i++, j++) {
        if( j == pos) {
            tmp[pos] = elem;
            i--;
        } else {
            tmp[j] = data[i];
        }        
    }
    // 3
    size += 1;
    // 4
    delete [] data;
    // 5
    data = tmp;
} 

void Point::remove(int pos) {
    int *tmp = new int[size-1];

    for(int i = 0, j = 0; i < size; i++, j++) {
        if( j == pos) {
            i--;
        } else {
            tmp[j] = data[i];
        }        
    }
    size -= 1; 
    data = tmp;
    }

Point::~Point() {
    delete[] data;
}
