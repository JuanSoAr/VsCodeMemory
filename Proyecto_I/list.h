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
    Node<T> getNode(int ID);
    void addLast(VSPtr<T> VSptr);
    void deleteUUID(int ID);
    void printList();
};


#endif // LIST_H
