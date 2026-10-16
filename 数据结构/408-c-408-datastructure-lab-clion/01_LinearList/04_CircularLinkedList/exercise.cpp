#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using ElemType = int; // 元素类型：练习中使用整数
struct LNode {
    ElemType data; // 数据域：保存一个元素
    LNode* next; // 指针域：保存后继结点地址
};
using LinkList = LNode*; // 循环单链表头指针；带头结点时尾结点 next 指向头结点

// 学习主题：04_CircularLinkedList 习题练习
// 本文件练习：循环链表的判空、尾结点与循环遍历终止条件

// TODO: 完成循环链表的判空、尾结点与循环遍历终止条件的典型题目
// TODO: 手工推演一个边界情况并核对过程
// TODO: 总结算法复杂度、稳定性或适用条件（按本章内容选择）

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

