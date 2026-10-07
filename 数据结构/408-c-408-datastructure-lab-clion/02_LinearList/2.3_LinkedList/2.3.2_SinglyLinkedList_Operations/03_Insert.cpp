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
    // TODO: 实现单链表第 i 个位置的插入操作。
    // TODO: 明确插入前需要定位的结点，并检查指针修改顺序。
    // TODO: 考虑首元结点、表尾和非法位序。
    return 0;
}

