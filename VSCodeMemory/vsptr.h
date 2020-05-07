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
    T * ptr;
    int ID;
    int references;
public:
    static VSPtr<T> New();
    static int genID();
    VSPtr();
    T* getPtr();
   void setPtr(T newPtr);
   int getID();
  void setID(int newID);
  void operator =(T value);
  void operator =(VSPtr vsptr);

};


#endif // VSPTR_H
