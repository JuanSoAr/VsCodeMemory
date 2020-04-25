#include "garbagecollector.h"

template <typename T>
GarbageCollector<T>::GarbageCollector()
{

}

template<class T>
void GarbageCollector<T>::deleteVsPointer(T UUID)
{
    Garbage.deleteUUID(UUID);
}

template<class T>
void GarbageCollector<T>::addList(T VsPtr)
{
    Garbage.addLast(VsPtr);
}

template<class T>
void GarbageCollector<T>::changeValue(T value, T UUID)
{
    VsPointer<T> VsPtr = Garbage.getNodo(UUID);
    VsPtr.setValue(value);
}

template<class T>
void GarbageCollector<T>::changeUUIDMemory(T UUID1, T UUID2)
{
    if(Garbage.exists(UUID1) and Garbage.exists(UUID2)){
        VsPointer<T> VsPtr1 = Garbage.getNodo(UUID1);
        VsPointer<T> VsPtr2 = Garbage.getNodo(UUID2);
        VsPtr2.setUUID(VsPtr1.getUUID());
        VsPtr2.setMemoryAdress(VsPtr1.getMemoryAddress());
    }


}



template<class T>
GarbageCollector<T> &GarbageCollector<T>::getInstance()
{
}
