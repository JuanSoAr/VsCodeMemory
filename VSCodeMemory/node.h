#ifndef NODE_H
#define NODE_H

#include "iostream"
#include "vsptr.h"

using namespace std;
template<class T>
class Node
{
private:
    VSPtr<T> VSPTR;
public:
    Node *next;
    Node();
    Node(VSPtr<T> vsptr);
    VSPtr<T> getVSPtr();
    T* getNodePtr();
    void setNodePtr(T value);
    int getNodeID();
    void setNodeID(int ID);
};

#endif // NODE_H
