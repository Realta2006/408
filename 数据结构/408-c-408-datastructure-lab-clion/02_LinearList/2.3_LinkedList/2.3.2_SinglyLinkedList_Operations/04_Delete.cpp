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
    // TODO: 实现单链表第 i 个结点的删除操作。
    // TODO: 思考如何返回被删结点的数据并回收结点空间。
    // TODO: 考虑删除首元结点、表尾结点和非法位序。
    return 0;
}

