//
// Created by FanBig on 2023/5/13.
//

#include "../include/MyTreeNode.h"

template<typename T>
MyTreeNode<T>::MyTreeNode(T data) {
    this->data = data;
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

template<typename T>
void MyTreeNode<T>::setChild(MyTreeNode *left, MyTreeNode *right) {
    this->leftChild = left;
    this->rightChild = right;
}
