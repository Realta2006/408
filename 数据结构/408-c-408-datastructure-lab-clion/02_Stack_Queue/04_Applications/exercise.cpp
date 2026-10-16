#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using ElemType = int; // 栈元素类型
constexpr int MaxSize = 100; // 顺序栈容量
struct SqStack {
    ElemType data[MaxSize]; // 栈元素存储区
    int top; // 栈顶下标；空栈初始化为 -1
};
struct LinkNode {
    ElemType data; // 数据域
    LinkNode* next; // 指向下一个栈结点
};
using LinkStack = LinkNode*; // 不带头结点的链栈，空栈为 nullptr

// 学习主题：04_Applications 习题练习
// 本文件练习：栈与队列在括号匹配、表达式求值等问题中的应用

// TODO: 完成栈与队列在括号匹配、表达式求值等问题中的应用的典型题目
// TODO: 手工推演一个边界情况并核对过程
// TODO: 总结算法复杂度、稳定性或适用条件（按本章内容选择）

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

