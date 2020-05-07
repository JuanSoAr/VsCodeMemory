#include "node.h"

template<class T>
Node<T>::Node()
{

}

template<class T>
Node<T>::Node(VSPtr<T> vsptr)
{
    next = nullptr;
    VSPTR = vsptr;
}

template<class T>
VSPtr<T> Node<T>::getVSPtr()
{
    return VSPTR;
}

template<class T>
T *Node<T>::getNodePtr()
{
    return  VSPTR.getPtr();
}

template<class T>
void Node<T>::setNodePtr(T value)
{
    VSPTR.setPtr(value);
}

template<class T>
int Node<T>::getNodeID()
{
    return VSPTR.getID();
}

template<class T>
void Node<T>::setNodeID(int ID)
{
    VSPTR.setID(ID);
}


