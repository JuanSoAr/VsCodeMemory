#ifndef GARBAGECOLLECTOR_H
#define GARBAGECOLLECTOR_H


class GarbageCollector
{
private:
    GarbageCollector();
    static GarbageCollector* instance;
public:
     static GarbageCollector* getInstance();
};

#endif // GARBAGECOLLECTOR_H
