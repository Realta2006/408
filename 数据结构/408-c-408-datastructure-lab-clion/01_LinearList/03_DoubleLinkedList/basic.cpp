#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using ElemType = int; // 元素类型
struct DNode {
    ElemType data; // 数据域
    DNode* prior; // 前驱结点地址
    DNode* next; // 后继结点地址
};
using DLinkList = DNode*; // 双链表头指针类型

// 学习主题：03_DoubleLinkedList 基础练习
// 本文件练习：双链表的前驱后继指针、插入删除与指针修改顺序

// TODO: 梳理双链表的前驱后继指针、插入删除与指针修改顺序
// TODO: 选择合适的存储结构并说明操作步骤
// TODO: 分析关键操作的时间复杂度与空间复杂度

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

