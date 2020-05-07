#ifndef GARBAGECOLLECTOR_H
#define GARBAGECOLLECTOR_H

#include "thread"
#include "chrono"
#include "time.h"
#include "list.h"
#include "list.cpp"

#include <thread>
template<class T>

class GarbageCollector
{
private:
    GarbageCollector();
    static GarbageCollector* instance;
public:
    List<T> Garbage;
    static GarbageCollector* getInstance();
    void threadRun();
};

#endif // GARBAGECOLLECTOR_H
