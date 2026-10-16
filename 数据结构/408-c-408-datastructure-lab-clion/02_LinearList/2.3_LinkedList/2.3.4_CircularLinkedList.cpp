// 学习主题：2.3.4_CircularLinkedList
#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using ElemType = int; // 元素类型：练习中使用整数
struct LNode {
    ElemType data; // 数据域：保存一个元素
    LNode* next; // 指针域：保存后继结点地址
};
using LinkList = LNode*; // 循环单链表头指针；带头结点时尾结点 next 指向头结点

int main() {
    // TODO: 比较循环单链表与带头结点单链表的结构特点。
    // TODO: 设计循环遍历的结束条件，避免将空指针作为唯一终止标志。
    // TODO: 分别推演空表、单结点和多结点情形。
    return 0;
}

