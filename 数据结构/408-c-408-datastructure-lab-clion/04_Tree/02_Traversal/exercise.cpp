#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using ElemType = int; // 二叉树结点的数据类型
struct BiTNode {
    ElemType data; // 数据域
    BiTNode* lchild; // 左孩子地址；没有左孩子时为 nullptr
    BiTNode* rchild; // 右孩子地址；没有右孩子时为 nullptr
};
using BiTree = BiTNode*; // 根指针；空树为 nullptr

// 学习主题：02_Traversal 习题练习
// 本文件练习：二叉树先序、中序、后序与层序遍历

// TODO: 完成二叉树先序、中序、后序与层序遍历的典型题目
// TODO: 手工推演一个边界情况并核对过程
// TODO: 总结算法复杂度、稳定性或适用条件（按本章内容选择）

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

