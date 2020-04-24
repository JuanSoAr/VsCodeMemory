#include "vspointer.h"

template <typename T>
VsPointer<T>::VsPointer()
{

}

template<class T>
void VsPointer<T>::New()
{
}

template<class T>
T VsPointer<T>::getType()
{
    return this->type;
}

template<class T>
T VsPointer<T>::getValue()
{
    return this->value;
}

template<class T>
int VsPointer<T>::getUUID()
{
    return this->UUID;
}

template<class T>
int VsPointer<T>::getBytes()
{
    return this->bytes;
}

template<class T>
int VsPointer<T>::getMemoryAddress()
{
    return this->memoryAddress;
}

template<class T>
void VsPointer<T>::setValue(T value)
{
    this->value = value;
}


