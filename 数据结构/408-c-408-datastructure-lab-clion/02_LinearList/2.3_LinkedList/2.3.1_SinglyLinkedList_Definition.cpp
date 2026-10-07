#include<iostream>
using namespace std;

struct LNode {
    int data; // 数据域：保存元素值
    LNode *next; // 后继指针：保存下一个结点的地址
};

int main() {
    // TODO: 用自己的话说明单链表的逻辑结构和存储特点。
    LNode a;
    LNode b;
    LNode c;

    a.data =10;
    b.data=20;
    c.data=30;

    a.next = &b; // 让 a 的后继指向 b，逻辑次序由指针建立
    b.next = &c; // 让 b 的后继指向 c
    c.next = nullptr; // c 是尾结点，普通单链表以空指针结束

    LNode *p = &a; // 本例不带头结点，工作指针从首元结点 a 开始

    while (p != nullptr) { // 当前结点存在就访问，尾结点也会被处理
        cout<<p->data<<" "; // 访问当前结点的数据域
        p = p->next; // 移到后继；到尾结点之后变为空，不能遗漏这一步
    }
    // TODO: 画出结点的数据域、指针域，以及头指针与头结点的关系。
    // TODO: 分清空表与带头结点的空表。
    return 0;
}

