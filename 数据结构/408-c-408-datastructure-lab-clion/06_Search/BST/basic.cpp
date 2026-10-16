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

// 学习主题：BST 基础练习
// 本文件练习：二叉排序树查找及平均查找长度

// TODO: 梳理二叉排序树查找及平均查找长度
// TODO: 选择合适的存储结构并说明操作步骤
// TODO: 分析关键操作的时间复杂度与空间复杂度

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

