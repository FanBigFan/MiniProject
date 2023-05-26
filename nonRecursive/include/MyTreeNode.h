//
// Created by FanBig on 2023/5/21.
//

#ifndef NONRECURSIVE_MYTREENODE_H
#define NONRECURSIVE_MYTREENODE_H

template<class T>
class MyTreeNode {
public:
    T data;
    MyTreeNode *leftChild;
    MyTreeNode *rightChild;

    MyTreeNode(T data);

    void setChild(MyTreeNode *left, MyTreeNode *right);
};

#endif //NONRECURSIVE_MYTREENODE_H
