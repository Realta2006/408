#include <iostream>
#include <cstdlib>
using namespace std;

using ElemType = int; // 元素类型，本节使用整数

struct LNode {
    ElemType data; // 数据域：保存元素值
    LNode* next; // 后继指针：保存下一个结点的地址
};

using LinkList = LNode*; // 链表指针类型；带头结点时，头指针指向头结点
using ElemType = int; // 元素类型，本节使用整数

LNode* GetElem(LinkList L, int x) { // 按位查找，返回结点地址；约定 L 指向头结点
    if (x<0) return nullptr; // 负位序非法；位置 0 对应头结点

    LNode* p =L; // 工作指针从头结点开始移动
    int j=0; // 当前位序：头结点记作 0，首元结点记作 1
    while (p!=nullptr&&j<x) { // 结点存在且尚未到目标位序时继续
        p = p->next; // 移到后继；到尾结点之后变为空，不能遗漏这一步
        j++; // 工作指针前进后，位序也增加 1
    }
    return p; // 找到则返回结点地址，超范围返回 nullptr
}
int main() {
    // TODO: 按位序查找第 i 个结点（GetElem）。

    LNode head; // 独立头结点：不计入表长，数据域不参与查找
    LNode a;
    LNode b;
    LNode c;

    a.data =10;
    b.data=20;
    c.data=30;

    head.next = &a; // 头结点后继指向首元结点 a
    a.next = &b; // 让 a 的后继指向 b，逻辑次序由指针建立
    b.next = &c; // 让 b 的后继指向 c
    c.next = nullptr; // c 是尾结点，普通单链表以空指针结束

    LinkList L=&head; // 初始化真正传入查找函数的头指针

    LNode* p = GetElem(L, 2); // 查找第 2 个元素，p 保存数据为 20 的结点地址
    if (p != nullptr) { // 查找后先判空，避免解引用空指针
        cout << p->data; // 输出结点的数据；直接输出 p 则是地址
    }
    // TODO: 按值查找第一个数据域等于给定值的结点（LocateElem）。
    // TODO: 处理位序越界，并分析查找过程的时间复杂度。
    return 0;
}

