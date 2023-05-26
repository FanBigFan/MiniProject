//
// Created by FanBig on 2023/5/21.
//

#include "../include/PostorderTraversal_NR.h"

template<class T>
void PostorderTraversal_NR<T>::postorderTraversalNR(MyTreeNode<T> *root) {
    MyStack<MyTreeNode<T> *> sta_left;  // 左栈
    MyStack<bool> bool_left;         // 辅助左栈，判断是否是左子
    MyStack<MyTreeNode<T> *> sta_right; // 右栈
    MyStack<bool> bool_right;        // 辅助右栈，判断是否是右子

    MyTreeNode<T> *curr = root;

    int status = 0;    // 0 -> 左子未处理    1 -> 右子未处理    2 -> 根未处理
    bool flag = false; // 判断是左子还是右子，false -> 左子    true -> 右子

    // 当当前节点为空、左栈为空、右栈为空，结束循环。
    while (curr != nullptr || !sta_left.isEmpty() || !sta_right.isEmpty()) {
        if (status == 0 && curr->leftChild != nullptr) {
            /**
             * 如果左子未处理、左子不为空，
             * 将左子入左栈，将 flag 入辅助左栈
             * 将当前节点指向左子， flag 设为 false ， status 设为 0
             */
            sta_left.push(curr);
            bool_left.push(flag);

            curr = curr->leftChild;

            flag = false;
            status = 0;
        } else {
            if (status != 2 && curr->rightChild != nullptr) {
                /**
                 * 如果左子处理了、右子未处理、右子不为空，
                 * 将右子入右栈，将 flag 入辅助右栈
                 * 将当前节点指向右子， flag 设为 true ， status 设为 0
                 */
                sta_right.push(curr);
                bool_right.push(flag);

                curr = curr->rightChild;

                flag = true;
                status = 0;
            } else {
                /**
                 * 如果左子处理了、右子处理了，
                 * 则处理根节点，并将当前节点指向空。
                 */
                std::cout << curr->data << " ";
                curr = nullptr;
            }
        }

        // 判断是左子还是右子
        if (flag) {
            /**
             * 如果是右子、当前节点为空、右栈不为空，
             * 则将当前节点指向右栈栈顶元素，并将栈顶元素 pop 掉，
             * 并将 flag 指向辅助右栈栈顶元素，并将栈顶元素 pop 掉，
             * 将 status 设为 2 .
             */
            if (curr == nullptr && !sta_right.isEmpty()) {
                curr = sta_right.pop();
                flag = bool_right.pop();
                status = 2;
            }

            /**
             * 如果是右子、当前节点为空、右栈为空、左栈不为空，
             * 则将当前节点指向左栈栈顶元素，并将栈顶元素 pop 掉，
             * 并将 flag 指向辅助左栈栈顶元素，并将栈顶元素 pop 掉，
             * 将 status 设为 1 .
             */
            if (curr == nullptr && !sta_left.isEmpty()) {
                curr = sta_left.pop();
                flag = bool_left.pop();
                status = 1;
            }

            /**
             * 如果是右子、当前节点为空、右栈为空、左栈为空，
             * 结束循环。
             */
            if (curr == nullptr) {
                break;
            }
        } else {
            /**
             * 如果是左子、当前节点为空、左栈不为空，
             * 则将当前节点指向左栈栈顶元素，并将栈顶元素 pop 掉，
             * 并将 flag 指向辅助左栈栈顶元素，并将栈顶元素 pop 掉，
             * 将 status 设为 1 .
             */
            if (curr == nullptr && !sta_left.isEmpty()) {
                curr = sta_left.pop();
                flag = bool_left.pop();
                status = 1;
            }

            /**
             * 如果是左子、当前节点为空、左栈为空、右栈不为空，
             * 则将当前节点指向右栈栈顶元素，并将栈顶元素 pop 掉，
             * 并将 flag 指向辅助右栈栈顶元素，并将栈顶元素 pop 掉，
             * 将 status 设为 2 .
             */
            if (curr == nullptr && !sta_right.isEmpty()) {
                curr = sta_right.pop();
                flag = bool_right.pop();
                status = 2;
            }

            /**
             * 如果是左子、当前节点为空、左栈为空、右栈为空，
             * 结束循环。
             */
            if (curr == nullptr) {
                break;
            }
        }
    }
}
