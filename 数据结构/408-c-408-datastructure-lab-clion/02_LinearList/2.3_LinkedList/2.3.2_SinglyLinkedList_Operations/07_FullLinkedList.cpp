// 学习主题：07_FullLinkedList
#include "LinkedList.h" // 复用结点定义和已学的链表函数
#include <cstdlib>      // malloc、free；使用时与 new、delete 区分
using namespace std;    // 使用标准库名称

bool InitList(LinkedList& L) {

    L = new LNode;
    L->next = nullptr;
    return true;
}

bool EmptyList(LinkedList& L) {

    return L->next == nullptr;
}

bool LengthList(LinkedList& L) {

    int length = 0;

    LNode* p = L->next;

    while (p != nullptr) {

        length++;
        p = p->next;
    }

    return length;
}

void PrintList(LinkList L) {
    LNode* p = L->next;

    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

LNode* GetElem(LinkList L, ElemType i) {
    if (i < 0)
        return nullptr;

    LNode* p = L;
    int j = 0;

    while (p != nullptr && j < i) {
        p = p->next;
        j++;
    }
    return p;
}

LNode* LocateElem(LinkList L, ElemType& e) {
    LNode* p = L->next;

    while (p != nullptr && p->data != e) {
        p = p->next;
    }
    return p;
}

bool ListInsert(LinkList& L, int i, ElemType e) {

    if (i < 1)
        return false;

    LNode* p = GetElem(L, i - 1);

    if (p == nullptr)
        return false;

    LNode* s = new LNode;
    s->data = e;
    s->next = p->next;
    p->next = s;

    return true;
}

bool ListDelete(LinkList& L, int i, ElemType& e) {

    if (i < 1)
        return false;

    LNode* p = GetElem(L, i - 1);

    if (p == nullptr || p->next == nullptr) {
    }
    return false;

    LNode* q = p->next;
    e = q->data;
    p->next = q->next;

    delete q;

    return true;
}

void DestroyList(LinkList& L) {
    LNode* p;

    while (p != nullptr) {
        p = L;
        L = L->next;
        delete p;
    }
}

int main() {
    // TODO: 综合实现单链表的初始化、判空、求表长和遍历。
    // TODO: 综合实现查找、插入和删除，并用小规模数据逐步检查。
    // TODO: 补充销毁操作，检查结点空间的申请与释放。
    return 0;
}
