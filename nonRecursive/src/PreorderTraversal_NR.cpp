//
// Created by FanBig on 2023/5/21.
//

#include "../include/PreorderTraversal_NR.h"

template<class T>
void PreorderTraversal_NR<T>::preOrderTraverseNR(MyTreeNode<T> *root) {
    MyStack<MyTreeNode<T> *> ms; // 存放右子
    MyTreeNode<T> *curr = root;  // 指定当前节点

    // 当当前节点为空且栈为空结束
    while (curr != nullptr || !ms.isEmpty()) {
        // 若当前节点为空且栈不为空，将当前节点指向栈顶元素，并将栈顶元素 pop 掉。
        while (curr == nullptr && !ms.isEmpty()) {
            curr = ms.pop();
        }

        // 如果还是为空，结束循环。
        if (curr == nullptr) {
            break;
        }

        std::cout << curr->data << " "; // 先处理根节点
        ms.push(curr->rightChild); // 将右子入栈
        curr = curr->leftChild;    // 将当前结点指向左子
    }
}
