// 学习主题：02_Search
#include "LinkedList.h" // 复用结点定义和已学的链表函数
using namespace std; // 使用标准库名称

int main() {
    // 已实现：带头结点单链表的按位查找（GetElem）。

    int values[] = {10, 20, 30}; // 改数组即可更换测试数据
    LinkList L = CreateList(values, 3); // 自动创建头结点和数据结点

    LNode* p = GetElem(L, 2); // 查找第 2 个元素，p 保存数据为 20 的结点地址
    if (p != nullptr) { // 查找后先判空，避免解引用空指针
        cout << p->data<<endl; // 输出结点的数据；直接输出 p 则是地址
    }
    // 已实现：按值查找，函数定义见 LinkedList.h。

    LNode* q = LocateElem(L, 20);
    if (q != nullptr) {
        cout << q->data;
    }
    else {
        cout << "Not Found!" <<endl;
    }
    // TODO: 处理位序越界，并分析查找过程的时间复杂度。
    DestroyList(L); // 释放本次练习动态创建的所有结点
    return 0;
}
