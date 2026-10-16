// 学习主题：06_TailInsert
#include "LinkedList.h" // 复用结点定义和已学的链表函数
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

LinkList TailInsert() {

    LinkList L = new LNode;

    L->next = nullptr;

    LNode* r = L;

    ElemType x;

    while (cin >> x && x!=-1) {
        LNode* s = new LNode;
        s ->data =x;
        s->next = nullptr;
        r->next = s;
        r = s;
    }
    return L;
}
int main() {
    // TODO: 使用尾插法建立单链表。
    LinkList L=TailInsert();
    PrintList(L);
    // TODO: 维护尾指针并追踪每次插入后的链接变化。
    // TODO: 比较头插法与尾插法建立链表的过程。
    return 0;
}

