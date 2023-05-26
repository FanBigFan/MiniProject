//
// Created by FanBig on 2023/5/21.
//

#include "../include/PreorderTraversal.h"

template<class T>
void PreorderTraversal<T>::preorderTraverse(MyTreeNode<T> *root) {
    // 递归退出条件
    if (root == nullptr) {
        return;
    }
    std::cout << root->data << " ";          // 访问根节点
    preorderTraverse(root->leftChild);  // 访问左子
    preorderTraverse(root->rightChild); // 访问右子
}
