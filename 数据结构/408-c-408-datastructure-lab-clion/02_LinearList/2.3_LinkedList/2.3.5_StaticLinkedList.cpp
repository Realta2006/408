// 学习主题：2.3.5_StaticLinkedList
#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using ElemType = int; // 元素类型
constexpr int MaxSize = 100; // 静态链表数组容量
struct SNode {
    ElemType data; // 数据域
    int next; // 后继游标，即数组下标；本模板用 -1 表示链尾
};
using StaticLinkList = SNode[MaxSize]; // 数组中结点位置由游标连接，备用链规则按题目确定

int main() {
    // TODO: 用数组结点和游标（数组下标）描述静态链表结点。
    // TODO: 练习静态链表的结点查找、插入和删除。
    // TODO: 思考备用结点的管理，并比较静态链表与指针链表。
    return 0;
}

