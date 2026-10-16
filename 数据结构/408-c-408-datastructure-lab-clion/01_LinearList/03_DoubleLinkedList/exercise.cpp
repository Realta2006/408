#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using ElemType = int; // 元素类型
struct DNode {
    ElemType data; // 数据域
    DNode* prior; // 前驱结点地址
    DNode* next; // 后继结点地址
};
using DLinkList = DNode*; // 双链表头指针类型

// 学习主题：03_DoubleLinkedList 习题练习
// 本文件练习：双链表的前驱后继指针、插入删除与指针修改顺序

// TODO: 完成双链表的前驱后继指针、插入删除与指针修改顺序的典型题目
// TODO: 手工推演一个边界情况并核对过程
// TODO: 总结算法复杂度、稳定性或适用条件（按本章内容选择）

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

