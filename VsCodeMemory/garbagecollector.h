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
public:
    GarbageCollector();

};

#endif // GARBAGECOLLECTOR_H
