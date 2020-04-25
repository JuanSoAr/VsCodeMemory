#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include "node.h"

using namespace std;

template <class T>
class List
{
private:
    Node<T> *first;
public:
    List();
    Node<T> getFirst();
    Node<T> getNodo(T UUID);
    void addLast(T data);
    void deleteUUID(T UUID);
    bool exists(T UUID);
    void printList();
};

#endif // LIST_H
