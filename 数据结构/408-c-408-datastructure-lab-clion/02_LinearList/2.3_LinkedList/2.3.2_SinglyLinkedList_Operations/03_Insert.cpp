// 学习主题：03_Insert
#include "LinkedList.h" // 复用结点定义和已学的链表函数
#include <cstdlib>      // malloc、free；使用时与 new、delete 区分
using namespace std;    // 使用标准库名称

bool Insert(LinkList& p, ElemType x) {
    if (p == nullptr) {
        return false;
    }

    LNode* s = new LNode;
    s->data = x;
    s->next = p->next;
    p->next = s;
    return true;
}

bool ListInsert(LinkList& L, int i, ElemType x) {
    if (i < 1)
        return false;

    LNode* p = L; // 找第i-1个节点
    int j = 0;
    while (p != nullptr && j < i - 1) {
        p = p->next;
        j++;
    }

    if (p == nullptr) {
        return false;
    }

    LNode* q = new LNode;
    q->data = x;
    q->next = p->next;
    p->next = q;
    return true;
}

int main() {
    int values[] = {10, 20, 30};        // 改数组即可更换测试数据
    LinkList L = CreateList(values, 3); // 自动创建头结点和数据结点

    PrintList(L);
    // 10 20 30

    LNode* p = LocateElem(L, 20);

    bool flag = Insert(p, 99);

    if (flag)
        cout << "插入成功" << endl;
    else
        cout << "插入失败" << endl;

    PrintList(L);
    // 10 20 99 30

    // TODO: 实现单链表第 i 个位置的插入操作。
    bool flag1 = ListInsert(L, 2, 99);

    PrintList(L);

    if (flag)
        cout << "插入成功" << endl;
    else
        cout << "插入失败" << endl;

    // TODO: 明确插入前需要定位的结点，并检查指针修改顺序。
    // TODO: 考虑首元结点、表尾和非法位序。
    DestroyList(L); // 释放本次练习动态创建的所有结点
    return 0;
}
