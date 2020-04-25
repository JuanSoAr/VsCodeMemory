#ifndef GARBAGECOLLECTOR_H
#define GARBAGECOLLECTOR_H

#include "iostream"
#include "list.h"
#include "node.h"
#include"node.cpp"
#include "list.cpp"
#include "vspointer.h"
#include "vspointer.cpp"

template<class T>
class GarbageCollector
{
private:
    List<VsPointer<T>> Garbage;
    GarbageCollector();
    static GarbageCollector *instance;
public:
    static GarbageCollector &getInstance();
    void deleteVsPointer(T UUID);
    void addList(T VsPtr);
    void changeValue(T value,T UUID);
    void changeUUIDMemory(T UUID1,T UUID2);
    void treet();
};

#endif // GARBAGECOLLECTOR_H
