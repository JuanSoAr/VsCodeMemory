#ifndef VSPTR_H
#define VSPTR_H

#include <iostream>
#include <string>
#include <math.h>


using namespace std;

template <class T>
class VSPtr
{
private:
    T *vsValue;
    int ID;
    int references;
public:
    VSPtr();
   T* getVsValue();
    void setVsValue(T value);
    int getID();
    void setID(int newID);
    void operator =(T value);
    void operator = (VSPtr vsptr);
    T& operator * () const;
    static VSPtr<T> New();
};

#endif // VSPTR_H
