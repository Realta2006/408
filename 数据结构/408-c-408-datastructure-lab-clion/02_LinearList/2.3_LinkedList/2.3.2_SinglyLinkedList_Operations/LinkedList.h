#pragma once // 同一个 cpp 多次包含时，只展开一次

#include <iostream> // PrintList 使用标准输出
#include <stdexcept> // 非法建表参数使用 invalid_argument 报错

using ElemType = int; // 链表元素类型

struct LNode {
    ElemType data; // 数据域
    LNode* next; // 后继结点地址
};
using LinkList = LNode*; // 本文件的操作默认带头结点、非循环单链表

// 已学函数和练习用辅助函数放在这里；inline 允许多个 cpp 包含这些定义。
// 初始化前 L 不应持有尚未释放的链表；new 失败时会抛异常。
inline bool InitList(LinkList& L) {
    L = new LNode;
    L->next = nullptr; // 空表只有头结点
    return true;
}

// 释放 new 创建的整条链表（含头结点），并将调用者的 L 置空。
// 不能用于由局部变量结点或 malloc 创建的链表；耗时 O(n)。
inline void DestroyList(LinkList& L) {
    while (L != nullptr) {
        LNode* next = L->next; // 释放前保存后继地址
        delete L;
        L = next;
    }
}

// 练习辅助：按数组顺序建立带头结点的链表，耗时 O(n)。
// n 为 0 时建立空表；n > 0 时 values 必须指向至少 n 个元素。
inline LinkList CreateList(const ElemType values[], int n) {
    if (n < 0 || (n > 0 && values == nullptr)) {
        throw std::invalid_argument("CreateList: invalid array or length");
    }
    LinkList L = nullptr;
    InitList(L);
    LNode* tail = L; // 尾指针初始指向头结点
    try {
        for (int i = 0; i < n; i++) {
            tail->next = new LNode{values[i], nullptr}; // 新结点接在表尾
            tail = tail->next; // 更新尾指针，保持数组原顺序
        }
    } catch (...) {
        DestroyList(L); // 分配失败时回收已经建好的部分
        throw;
    }
    return L; // 结点动态分配，函数结束后仍然有效
}

// 按位查找：头结点记作 0，数据结点从 1 开始；最坏 O(n)。
inline LNode* GetElem(LinkList L, int x) {
    if (x < 0) return nullptr;
    LNode* p = L;
    int j = 0;
    while (p != nullptr && j < x) {
        p = p->next; // 沿后继移动
        j++;
    }
    return p; // 超出表长时为空
}

// 按值查找：跳过头结点，返回第一个匹配结点；最坏 O(n)。
inline LNode* LocateElem(LinkList L, ElemType x) {
    if (L == nullptr) return nullptr;
    LNode* p = L->next;
    while (p != nullptr && p->data != x) {
        p = p->next;
    }
    return p; // 未找到时为空
}

// 遍历输出：跳过头结点，逐个访问数据结点；O(n)。
inline void PrintList(LinkList L) {
    if (L == nullptr) return; // 无有效头结点时不解引用
    LNode* p = L->next;
    while (p != nullptr) {
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << std::endl;
}
