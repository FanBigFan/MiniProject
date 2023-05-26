//
// Created by FanBig on 2023/5/21.
//

#ifndef NONRECURSIVE_PREORDERTRAVERSAL_NR_H
#define NONRECURSIVE_PREORDERTRAVERSAL_NR_H

#include <iostream>
#include "MyTreeNode.h"
#include "MyStack.h"

template<class T>
class PreorderTraversal_NR {
public:
    // 先序遍历
    static void preOrderTraverseNR(MyTreeNode<T> *root);
};

#endif //NONRECURSIVE_PREORDERTRAVERSAL_NR_H
