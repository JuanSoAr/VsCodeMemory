#include "vsptr.h"
#include "vsptr.h"

template<class T>
VSPtr<T>::VSPtr()
{

}

template<class T>
T *VSPtr<T>::getVsValue()
{
    return vsValue;
}

template<class T>
void VSPtr<T>::setVsValue(T value)
{
     vsValue = new T (value);
}


template<class T>
int VSPtr<T>::getID()
{
    return this->ID;
}

template<class T>
void VSPtr<T>::setID(int newID)
{    void setValue(T data);

    this->ID = newID;
}

template<class T>
void VSPtr<T>::operator =(T value)
{
    setVsValue(value);
}

template<class T>
void VSPtr<T>::operator =(VSPtr vsptr)
{
    setID(vsptr.getID());
    vsValue = vsptr.vsValue;
    references  -=1;
    vsptr.references +=1;
}

template<class T>
VSPtr<T> VSPtr<T>::New()
{
 VSPtr newVSPtr;
 newVSPtr.vsValue = nullptr;
 newVSPtr.references = 1;

 return newVSPtr;
}







