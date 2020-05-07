#include "vsptr.h"


template<class T>
VSPtr<T> VSPtr<T>::New()
{
    VSPtr<T> newVSPtr;
    newVSPtr.ptr = nullptr;
    newVSPtr.references = 1;
   newVSPtr.ID = genID();

   return newVSPtr;
}

template<class T>
int VSPtr<T>::genID()
{
    static int i;
    return  ++i;
}

template<class T>
VSPtr<T>::VSPtr()
{

}

template<class T>
T *VSPtr<T>::getPtr()
{
    return ptr;
}

template<class T>
void VSPtr<T>::setPtr(T newPtr)
{
    ptr = new T(newPtr);
}

template<class T>
int VSPtr<T>::getID()
{
    return ID;
}

template<class T>
void VSPtr<T>::setID(int newID)
{
    ID = newID;
}

template<class T>
void VSPtr<T>::operator =(T value)
{
    setPtr(value);
}

template<class T>
void VSPtr<T>::operator =(VSPtr vsptr)
{
    ID = vsptr.ID;
    ptr = vsptr.ptr;
}



