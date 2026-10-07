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
    // TODO: 使用头插法建立单链表。
    // TODO: 手工追踪每次插入后头结点与新结点的链接变化。
    // TODO: 比较输入数据次序与最终链表次序。
    return 0;
}

