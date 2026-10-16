#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using ElemType = int; // 结点数据类型
struct ThreadNode {
    ElemType data; // 数据域
    ThreadNode* lchild; // ltag 为 0 时指向左孩子，为 1 时指向前驱线索
    ThreadNode* rchild; // rtag 为 0 时指向右孩子，为 1 时指向后继线索
    int ltag; // 左指针标志：0 表示孩子，1 表示线索
    int rtag; // 右指针标志：0 表示孩子，1 表示线索
};
using ThreadTree = ThreadNode*; // 根指针

// 学习主题：03_ThreadedTree 习题练习
// 本文件练习：线索二叉树的线索标志、线索化与遍历

// TODO: 完成线索二叉树的线索标志、线索化与遍历的典型题目
// TODO: 手工推演一个边界情况并核对过程
// TODO: 总结算法复杂度、稳定性或适用条件（按本章内容选择）

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

