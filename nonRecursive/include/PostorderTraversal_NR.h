//
// Created by FanBig on 2023/5/21.
//

#ifndef NONRECURSIVE_POSTORDERTRAVERSAL_NR_H
#define NONRECURSIVE_POSTORDERTRAVERSAL_NR_H

#include <iostream>
#include "MyTreeNode.h"
#include "MyStack.h"

template<class T>
class PostorderTraversal_NR {
public:
    static void postorderTraversalNR(MyTreeNode<T> *root);
};


#endif //NONRECURSIVE_POSTORDERTRAVERSAL_NR_H
