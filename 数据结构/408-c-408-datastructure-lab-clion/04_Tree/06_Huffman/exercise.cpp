#include <iostream> // 标准输入输出：cin、cout
using namespace std; // 使用标准库名称

constexpr int MaxLeaves = 100; // 最大叶子数
struct HTNode {
    int weight; // 结点权值
    int parent; // 双亲下标；从 1 编号，0 表示无双亲
    int lchild; // 左孩子下标；0 表示无孩子
    int rchild; // 右孩子下标；0 表示无孩子
};
using HuffmanTree = HTNode[2 * MaxLeaves]; // n 个叶子对应 2n-1 个结点，下标 0 不用

// 学习主题：06_Huffman 习题练习
// 本文件练习：哈夫曼树构造、带权路径长度与哈夫曼编码

// TODO: 完成哈夫曼树构造、带权路径长度与哈夫曼编码的典型题目
// TODO: 手工推演一个边界情况并核对过程
// TODO: 总结算法复杂度、稳定性或适用条件（按本章内容选择）

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

