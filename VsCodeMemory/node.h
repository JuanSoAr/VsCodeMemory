#ifndef NODE_H
#define NODE_H

#include "iostream"

using namespace std;
template <class T>
class Node
{
private:
    T value;
public:
    Node *next;
    Node();
    Node(T data);
    T getValue();
    void setValue(T data);
};

#endif // NODE_H
