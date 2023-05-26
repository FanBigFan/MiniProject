//
// Created by FanBig on 2023/5/21.
//

#include "../include/PostorderTraversal.h"

template<class T>
void PostorderTraversal<T>::postorderTraverse(MyTreeNode<T> *root) {
    // 递归退出条件
    if (root == nullptr) {
        return;
    }
    postorderTraverse(root->leftChild);  // 访问左子
    postorderTraverse(root->rightChild); // 访问右子
    std::cout << root->data << " ";           // 访问根节点
}