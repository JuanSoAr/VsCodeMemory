#include "list.h"


template<class T>
List<T>::List()
{
    this->first = nullptr;
}

template<class T>
Node<T> List<T>::getFirst()
{
    return  this->first;
}

template<class T>
Node<T> List<T>::getNode(int ID)
{
    Node<T> *present = this->first;
    while (present != nullptr) {
        if(present->getVSPtrID() == ID){
            return present;
        }
        else{
            present = present->next;
        }
    }
    exit(1);
}

template<class T>
void List<T>::addLast(VSPtr<T> VSptr)
{
    if(this->first == nullptr){
        this->first = new Node<T>(VSptr);
    }
    else{
        Node<T> *present = this->first;
        while(present->next != nullptr){
            present = present->next;
        }
        present->next = new Node<T>(VSptr);
    }
}

template<class T>
void List<T>::deleteUUID(int ID)
{
    Node<T> *temp1 = this->first;
    Node<T> *temp2 = this->first->next;
    if(temp1->getVSPtrID() == ID){
        this->first = temp1->next;
    }
    else{
        while(temp2->getVSPtrID()!= ID){
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
        cout<<present->getVSPtrValue();
        cout<<",";
        present = present->next;
    }
    cout<<"}"<<endl;
}


