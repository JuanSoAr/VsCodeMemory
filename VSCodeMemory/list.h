#ifndef LIST_H
#define LIST_H


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
    void setNodeID(int ID,int newID);
    void setNodePtr(int ID, T value);
    void addLast(VSPtr<T> VSptr);
    void deleteVSPtrID(int ID);
    void printList();
};


#endif // LIST_H
