#ifndef NODE_H
#define NODE_H


#include "iostream"
#include "vsptr.h"

using namespace std;
template <class T>
class Node
{
private:
    VSPtr<T> VSptr;
public:
    Node *next;
    Node();
    Node(VSPtr<T> vsptr);
    VSPtr<T> getVSPtr();
    T* getVSPtrValue();
    int getVSPtrID();
    void setVSPtr(VSPtr<T> newVSPtr);

};
#endif // NODE_H
