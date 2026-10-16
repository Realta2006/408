// 学习主题：2.3.3_DoublyLinkedList
#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称
using ElemType = int; // 元素类型，本节使用整数

struct DNode {
    ElemType data; // 数据域：保存元素值
    DNode* prior; // 前驱指针：指向前一个结点
    DNode* next; // 后继指针：指向后一个结点
};

using DLinkList = DNode*; // 双链表指针类型

int main() {
    // TODO: 描述双链表结点中的数据域、前驱指针和后继指针。
    // TODO: 练习在指定结点前后插入时两侧链接的调整。
    // TODO: 练习删除结点并检查前驱、后继链接。
    return 0;
}

