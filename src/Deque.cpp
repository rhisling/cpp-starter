//
// Created by havok on 4/12/23.
//
/*

#include "deque/Deque.hpp"
#include "stdexcept"
*/




/*
template<typename T>
T Deque<T>::front() {
    if (!head) {
        throw std::domain_error("container is empty");
    }
    return head->val;
}


template<typename T>
T Deque<T>::back() {

}

template<typename T>
T Deque<T>::pop_front() {

}


template<typename T>
void Deque<T>::push_back(T val) {

    Node<T> *newNode = new Node(val);
    // case when the container is empty
    if (!head && !tail) {
        head = newNode;
        tail = newNode;
        return;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = nullptr;
        tail = newNode;
    }
    this->len++;
}


template<typename T>
int Deque<T>::size() {
    return this->len;
}

*/
