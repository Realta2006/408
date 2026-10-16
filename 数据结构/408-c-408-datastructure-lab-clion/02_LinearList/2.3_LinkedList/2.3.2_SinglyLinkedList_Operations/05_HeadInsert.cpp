// 学习主题：05_HeadInsert
#include "LinkedList.h" // 复用结点定义和已学的链表函数
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

LinkList HeadInsert(){

    LinkList L= new LNode;

    L -> next = nullptr;

    ElemType x;



    while (cin >> x) {
        LNode* p = new LNode;

        p->data = x;

        p->next = L -> next;

        L -> next = p;


    }
    return L;
}
int main() {
    // TODO: 使用头插法建立单链表。
    LinkList L = HeadInsert();
        PrintList(L);
    // TODO: 手工追踪每次插入后头结点与新结点的链接变化。
    // TODO: 比较输入数据次序与最终链表次序。
    return 0;
}

