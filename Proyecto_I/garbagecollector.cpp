#include "garbagecollector.h"

#include <clocale>
#include <cstdlib>
#include <new>
#include <iostream>
#include "garbagecollector.h"

using namespace std;

GarbageCollector* GarbageCollector::instance = 0;

GarbageCollector::GarbageCollector(){

}

GarbageCollector* GarbageCollector::getInstance()
{
    if (instance == 0)
    {
        instance = new GarbageCollector;
    }

    return instance;
}
