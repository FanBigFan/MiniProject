//
// Created by FanBig on 2023/5/21.
//

#include "../include/InorderTraversal.h"

template<class T>
void InorderTraversal<T>::inorderTraverse(MyTreeNode<T> *root) {
    // 递归退出条件
    if (root == nullptr) {
        return;
    }
    inorderTraverse(root->leftChild);  // 访问左子
    std::cout << root->data << " ";         // 访问根节点
    inorderTraverse(root->rightChild); // 访问右子
}