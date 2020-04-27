#include "vsptr.h"

template<class T>
VSPtr<T>::VSPtr()
{

}

template<class T>
T VSPtr<T>::getValue()
{
    cout<<*this->vsValue<<endl;
}

template<class T>
void VSPtr<T>::operator =(T value)
{
    this->vsValue = &value;
    cout<<this->vsValue<<endl;
}







