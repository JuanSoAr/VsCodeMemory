#include "node.h"
#include "iostream"

using namespace std;


template<typename  T>
Node<T>::Node()
{
    next = nullptr;
}


template<typename  T>
Node<T>::Node(T data)
{
    next = nullptr;
    value = data;
}


template<typename  T>
T Node<T>::getValue()
{
    return  value;

}


template<typename  T>
void Node<T>::setValue(T data)
{
    this->value = data;
}
