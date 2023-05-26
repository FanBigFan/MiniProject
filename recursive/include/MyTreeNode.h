//
// Created by FanBig on 2023/5/13.
//

#ifndef DSPROJECT_MYTREENODE_H
#define DSPROJECT_MYTREENODE_H

template<class T>
class MyTreeNode {
public:
    T data;
    MyTreeNode *leftChild;
    MyTreeNode *rightChild;

    MyTreeNode(T data);

    void setChild(MyTreeNode *left, MyTreeNode *right);
};

#endif //DSPROJECT_MYTREENODE_H
