//
// Created by FanBig on 2023/5/21.
//

#include "RecursiveHeads.h"

int main() {
    auto *MyNodeA = new MyTreeNode<char>('A'); // 创建结点对象
    auto *MyNodeB = new MyTreeNode<char>('B');
    auto *MyNodeC = new MyTreeNode<char>('C');
    auto *MyNodeD = new MyTreeNode<char>('D');
    auto *MyNodeE = new MyTreeNode<char>('E');
    auto *MyNodeF = new MyTreeNode<char>('F');
    auto *MyNodeG = new MyTreeNode<char>('G');
    auto *MyNodeH = new MyTreeNode<char>('H');
    auto *MyNodeI = new MyTreeNode<char>('I');

    MyNodeA->setChild(MyNodeB, MyNodeC); // 建立结点关系
    MyNodeB->setChild(nullptr, MyNodeD);
    MyNodeC->setChild(MyNodeE, MyNodeF);
    MyNodeD->setChild(MyNodeG, MyNodeH);
    MyNodeF->setChild(MyNodeI, nullptr);

    auto *root = MyNodeA; // 设置根节点

    // 输出结果
    std::cout << "---Recursive method---" << std::endl;
    std::cout << "PreOrder  : ";
    PreorderTraversal<char>::preorderTraverse(root);
    std::cout << std::endl;
    std::cout << "InOrder   : ";
    InorderTraversal<char>::inorderTraverse(root);
    std::cout << std::endl;
    std::cout << "PostOrder : ";
    PostorderTraversal<char>::postorderTraverse(root);
    std::cout << "\n--------------------------------------" << std::endl;
    return 0;
}
