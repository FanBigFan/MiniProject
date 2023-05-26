//
// Created by FanBig on 2023/5/21.
//

#include "../include/InorderTraversal_NR.h"

template<class T>
void InorderTraversal_NR<T>::inorderTraversalNR(MyTreeNode<T> *root) {
    MyStack<MyTreeNode<T> *> ms;
    MyTreeNode<T> *curr = root;
    bool flag = false; // 判断是否是从栈里出来的结点

    // 当当前节点为空且栈为空结束
    while (curr != nullptr || !ms.isEmpty()) {
        if (!flag && curr != nullptr && curr->leftChild != nullptr) {
            /* 如果不是从栈中出来的结点、当前节点不为空、左子不为空，
            则将当前节点入栈，并将当前节点指向左子，
            将 flag 设为 false */
            ms.push(curr);
            curr = curr->leftChild;
            flag = false;
        } else if (!flag && curr != nullptr && curr->leftChild == nullptr && curr->rightChild != nullptr) {
            /* 如果不是从栈中出来的结点、当前节点不为空、左子为空、右子不为空，
            则处理当前节点，并将当前节点指向右子，
            将 flag 设为 false */
            std::cout << curr->data << " ";
            curr = curr->rightChild;
            flag = false;
        } else if (!flag && curr != nullptr && curr->leftChild == nullptr && curr->rightChild == nullptr) {
            /* 如果不是从栈中出来的结点、当前节点不为空、左子为空、右子为空，
            则处理当前节点，并将当前节点指向空，
            将 flag 设为 false */
            std::cout << curr->data << " ";
            curr = nullptr;
            flag = false;
        }

        if (curr == nullptr && !ms.isEmpty()) {
            /* 如果当前节点为空、栈不为空，
            将当前节点指向栈顶元素，并将栈顶元素 pop 掉。
            处理当前节点
            将 flag 设为 true */
            curr = ms.pop();
            std::cout << curr->data << " ";
            flag = true;
        }

        if (flag && curr != nullptr && curr->rightChild != nullptr) {
            /* 如果是从栈中出来的结点、当前节点不为空、右子不为空，
            则将当前节点指向右子，
            将 flag 设为 false */
            curr = curr->rightChild;
            flag = false;
        }

        if ((flag || curr == nullptr) && ms.isEmpty()) {
            /* 如果是从栈中出来的结点或当前节点为空且栈为空，
            结束循环 */
            break;
        }
    }
}
