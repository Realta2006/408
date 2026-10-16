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

// 学习主题：03_ThreadedTree 基础练习
// 本文件练习：线索二叉树的线索标志、线索化与遍历

// TODO: 梳理线索二叉树的线索标志、线索化与遍历
// TODO: 选择合适的存储结构并说明操作步骤
// TODO: 分析关键操作的时间复杂度与空间复杂度

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

