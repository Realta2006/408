#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using ElemType = int; // 元素类型：练习中使用整数
struct LNode {
    ElemType data; // 数据域：保存一个元素
    LNode* next; // 指针域：保存后继结点地址
};
using LinkList = LNode*; // 头指针类型；是否带头结点按题目约定

// 学习主题：单链表基础
// 本文件练习：单链表结点、头结点、插入删除、逆置与链表操作

// 已提供单链表结点定义；说明数据域和指针域的作用
// TODO: 创建带头结点的单链表
// TODO: 实现遍历输出
// TODO: 思考头指针和头结点的区别

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

