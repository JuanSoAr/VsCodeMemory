#ifndef VSPTR_H
#define VSPTR_H

#include <iostream>
#include <string>

using namespace std;

template <class T>
class VSPtr
{
public:
    T *vsValue;
    VSPtr();
    T getValue();
    void operator =(T value);
};

#endif // VSPTR_H
