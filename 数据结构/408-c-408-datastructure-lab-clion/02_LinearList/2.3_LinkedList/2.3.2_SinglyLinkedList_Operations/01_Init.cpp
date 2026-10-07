#include <iostream>
using namespace std;

using ElemType = int; // 元素类型，本节使用整数

struct LNode {
    ElemType data; // 数据域：保存元素值
    LNode* next; // 后继指针：保存下一个结点的地址
};

using LinkList = LNode*; // 链表指针类型；带头结点时，头指针指向头结点

bool InitList(LinkList &L) { // 引用传递头指针，使调用者的 L 接收到新地址
    L=new LNode ; // 申请头结点；普通 new 分配失败时抛异常
    L->next = nullptr; // 带头结点的空表：头结点无后继，表长为 0
    return true;
}
int main() {
    // TODO: 定义单链表结点类型和链表类型。
    LinkList L; // 此时尚未初始化，调用 InitList 后才获得有效地址

    // TODO: 实现带头结点单链表的初始化，并思考如何判断初始化成功。
    InitList(L); // 建立头结点，头结点不计入表长
    cout<<(L!=nullptr)<<endl; // 检查头指针是否指向结点
    cout<<(L->next==nullptr)<<endl; // L 已初始化，此处检查空表条件
    // TODO: 明确空表时头结点指针域的状态。
    return 0;
}

