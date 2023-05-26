//
// Created by FanBig on 2023/5/21.
//

#include "MyStack.h"

template<class T>
MyStack<T>::MyStack() {
    topIndex = 0;
}

template<class T>
bool MyStack<T>::isEmpty() {
    return topIndex == 0;
}

template<class T>
void MyStack<T>::push(T n) {
    arr[topIndex] = n;
    topIndex++;
}

template<class T>
T MyStack<T>::pop() {
    if (isEmpty()) {
        return NULL;
    }
    topIndex--;
    return arr[topIndex];
}

template<class T>
T MyStack<T>::top() {
    if (isEmpty()) {
        return NULL;
    }
    return arr[topIndex - 1];
}
