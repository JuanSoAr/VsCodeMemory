#include "node.h"

template <typename T>
Node<T>::Node()
{
    next = nullptr;
}

template<class T>
Node<T>::Node(VSPtr<T> vsptr)
{
    next = nullptr;
    VSptr = vsptr;
}

template<class T>
VSPtr<T> Node<T>::getVSPtr()
{
    return VSptr;
}

template<class T>
T *Node<T>::getVSPtrValue()
{
    return VSptr.getVsValue();
}

template<class T>
int Node<T>::getVSPtrID()
{
    return VSptr.getID();
}

template<class T>
void Node<T>::setVSPtr(VSPtr<T> newVSPtr)
{
    this->VSptr = newVSPtr;
}



