#include "garbagecollector.h"

#include "garbagecollector.h"

using namespace std;

template <typename T>
GarbageCollector<T>* GarbageCollector<T>::instance = 0;

template <typename T>

GarbageCollector<T>::GarbageCollector(){

}



template <typename T>
GarbageCollector<T>* GarbageCollector<T>::getInstance()
{
    if (instance == 0)
    {
        instance = new GarbageCollector;
    }

    return instance;
}


template<class T>
void GarbageCollector<T>::threadRun()
{
    cout<<"Hilo iniciado"<<endl;
    this_thread::sleep_for (chrono::seconds(1/2));
    while(true){

    }
}
