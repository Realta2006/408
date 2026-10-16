// 学习主题：Exercise02
#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using ElemType = int; // 元素类型：练习中使用整数
struct LNode {
    ElemType data; // 数据域：保存一个元素
    LNode* next; // 指针域：保存后继结点地址
};
using LinkList = LNode*; // 头指针类型；是否带头结点按题目约定

int main() {
    // TODO: 根据王道 2.3.7 试题精选录入第 2 题题意。
    // TODO: 先手工推演结点变化，再独立完成代码。
    // TODO: 分析时间复杂度并检查特殊输入。
    return 0;
}

