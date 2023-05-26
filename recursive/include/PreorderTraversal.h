//
// Created by FanBig on 2023/5/21.
//

#ifndef DSPROJECT_PREORDERTRAVERSAL_H
#define DSPROJECT_PREORDERTRAVERSAL_H

#include <iostream>

#include "MyTreeNode.h"

template<class T>
class PreorderTraversal {
public:
    // 先序遍历
    static void preorderTraverse(MyTreeNode<T> *root);
};


#endif //DSPROJECT_PREORDERTRAVERSAL_H
