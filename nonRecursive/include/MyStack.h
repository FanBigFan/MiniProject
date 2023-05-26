//
// Created by FanBig on 2023/5/21.
//

#ifndef NONRECURSIVE_MYSTACK_H
#define NONRECURSIVE_MYSTACK_H

#include <cstddef>

template<class T>
class MyStack {
public:
    T arr[100];
    int topIndex;

    MyStack();

    bool isEmpty();

    void push(T n);

    T pop();

    T top();
};


#endif //NONRECURSIVE_MYSTACK_H
