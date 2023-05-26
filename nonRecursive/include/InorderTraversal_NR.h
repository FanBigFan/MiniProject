//
// Created by FanBig on 2023/5/21.
//

#ifndef NONRECURSIVE_INORDERTRAVERSAL_NR_H
#define NONRECURSIVE_INORDERTRAVERSAL_NR_H

#include <iostream>
#include "MyTreeNode.h"
#include "MyStack.h"

template<class T>
class InorderTraversal_NR {
public:
    static void inorderTraversalNR(MyTreeNode<T> *root);
};


#endif //NONRECURSIVE_INORDERTRAVERSAL_NR_H
