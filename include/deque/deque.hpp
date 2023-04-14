//
// Created by havok on 4/12/23.
//

#ifndef DSALGO_DEQUE_HPP
#define DSALGO_DEQUE_HPP

#include "stdexcept"
#include <iostream>

template<class T>
struct Node {
    Node *next;
    Node *prev;
    T val;

    explicit Node(T val, Node *next, Node *prev) : val(val), next(next), prev(prev) {}
};


template<class T, int i>
class Matrix {
    int a[i][i];
};

template<class T>
class Deque {

    Node<T> *head;
    Node<T> *tail;
    int _size;

public :
    explicit Deque() : head(nullptr), tail(nullptr), _size(0) {}

    T pop_front() {
        if (empty()) {
            throw std::out_of_range("container is empty");
        }
        auto *temp = head;
        head = head->next;
        // single element
        if (head == nullptr) {
            tail = nullptr;
        } else {
            head->prev = nullptr;
        }
        T val = temp->val;
        delete temp;
        _size--;
        return val;
    }

    T pop_back() {
        if (empty()) {
            throw std::out_of_range("container is empty");
        }
        auto *temp = tail;
        tail = tail->prev;
        if (tail == nullptr) {
            head = nullptr;
        } else {
            tail->next = nullptr;
        }
        T val = temp->val;
        _size--;
        delete temp;
        return val;
    }

    bool empty() {
        return _size == 0;
    }

    void push_back(T val) {
        auto *newNode = new Node<T>(val, nullptr, tail);
        // case when the container is empty
        if (empty()) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode;
        _size++;
    }

    void push_front(T val) {
        auto *newNode = new Node<T>(val, head, nullptr);
        // case when the container is empty
        if (empty()) {
            tail = newNode;
        } else {
            head->prev = newNode;
        }
        head = newNode;
        _size++;
    }

    int size() {
        return _size;
    }

    T front() {
        if (empty()) {
            throw std::out_of_range("container is empty");
        }
        return head->val;
    }

    T back() {
        if (empty()) {
            throw std::out_of_range("container is empty");
        }
        return tail->val;
    }

    void display() {
        auto *curr = head;
        while (curr) {
            std::cout << curr->val << " -> ";
            curr = curr->next;
        }
        std::cout << "NULL" << std::endl;
    }

    ~Deque() {
        auto *curr = head;
        while (curr) {
            Node<T> *temp = curr;
            curr = curr->next;
            delete temp;
        }
        std::cout << "cleaned...";
    }
};



#endif //DSALGO_DEQUE_HPP
