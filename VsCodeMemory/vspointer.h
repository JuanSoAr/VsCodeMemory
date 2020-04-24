#ifndef VSPOINTER_H
#define VSPOINTER_H

template<class T>

class VsPointer
{
private:
    T type;
    T value;
    int reference;
    int UUID;
    int bytes;
    int memoryAddress;
public:
    VsPointer();
    void New();
    T getType();
    T getValue();
    int getUUID();
    int getBytes();
    int getMemoryAddress();
    void setValue(T value);
};

#endif // VSPOINTER_H
