//
// Created by FanBig on 2023/5/21.
//

#ifndef DSPROJECT_POSTORDERTRAVERSAL_H
#define DSPROJECT_POSTORDERTRAVERSAL_H

#include <iostream>

#include "MyTreeNode.h"

template<class T>
class PostorderTraversal {
public:
    // 后序遍历
    static void postorderTraverse(MyTreeNode<T> *root);
};

#endif //DSPROJECT_POSTORDERTRAVERSAL_H
