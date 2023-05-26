//
// Created by FanBig on 2023/5/21.
//

#include "MyTreeNode.h"

template<class T>
MyTreeNode<T>::MyTreeNode(T data) {
    this->data = data;
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

template<class T>
void MyTreeNode<T>::setChild(MyTreeNode *left, MyTreeNode *right) {
    this->leftChild = left;
    this->rightChild = right;
}
