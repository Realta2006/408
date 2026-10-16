#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using ElemType = int; // 关键字类型
struct AVLNode {
    ElemType data; // 结点关键字
    int balance; // 平衡因子：左子树高度减右子树高度
    AVLNode* lchild; // 左孩子地址
    AVLNode* rchild; // 右孩子地址
};
using AVLTree = AVLNode*; // 根指针；空树为 nullptr

// 学习主题：05_AVL 习题练习
// 本文件练习：平衡二叉树的平衡因子、旋转调整与插入

// TODO: 完成平衡二叉树的平衡因子、旋转调整与插入的典型题目
// TODO: 手工推演一个边界情况并核对过程
// TODO: 总结算法复杂度、稳定性或适用条件（按本章内容选择）

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

