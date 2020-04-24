#include "list.h"

template<typename  T>
List<T>::List()
{
    first = nullptr;
}

template<typename  T>
Node<T> List<T>::getFirst()
{
    return *this->first;
}
template<typename  T>
void List<T>::addLast(T data)
{
    if(this->first == nullptr){
        this->first = new Node<T>(data);
    }
    else{
        Node<T> *present =  this->first;
        while(present->next != nullptr){
            present = present->next;
        }
        present->next = new Node<T>(data);
    }
}

template<class T>
void List<T>::deleteUUID(T UUID)
{
    Node<T> *temp1 = this->first;
    Node<T> *temp2 = this->first->next;
    if(temp1->getValue() ==UUID){
        this->first = temp1->next;
    }
    else{
        while(temp2->getValue() != UUID){
            temp1 = temp1->next;
            temp2 = temp2->next;
    }
        Node<T> *aux = temp2;
        temp1->next = temp2->next;
        delete aux;
    }
}

template<typename  T>
void List<T>::printList()
{
    Node<T> *present = this->first;
    cout<<"{";
    while (present != nullptr) {
        cout<<present->getValue();
        cout<<",";
        present = present->next;
    }
    cout<<"}"<<endl;
}
