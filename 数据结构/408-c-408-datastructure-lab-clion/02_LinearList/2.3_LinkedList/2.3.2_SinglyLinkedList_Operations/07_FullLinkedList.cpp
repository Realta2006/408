#include <iostream>
#include <cstdlib>
using namespace std;

using ElemType = int; // 元素类型，本节使用整数

struct LNode {
    ElemType data; // 数据域：保存元素值
    LNode* next; // 后继指针：保存下一个结点的地址
};

using LinkList = LNode*; // 链表指针类型；带头结点时，头指针指向头结点

int main() {
    // TODO: 综合实现单链表的初始化、判空、求表长和遍历。
    // TODO: 综合实现查找、插入和删除，并用小规模数据逐步检查。
    // TODO: 补充销毁操作，检查结点空间的申请与释放。
    return 0;
}

