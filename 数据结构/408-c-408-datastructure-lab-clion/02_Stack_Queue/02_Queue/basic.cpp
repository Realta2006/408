#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using ElemType = int; // 队列元素类型
struct LinkNode {
    ElemType data; // 数据域
    LinkNode* next; // 后继结点地址
};
struct LinkQueue {
    LinkNode* front; // 队头指针；带头结点时指向头结点
    LinkNode* rear; // 队尾指针；空队列时与 front 指向同一头结点
};

// 学习主题：02_Queue 基础练习
// 本文件练习：队列的入队出队、队头队尾与链式存储

// TODO: 梳理队列的入队出队、队头队尾与链式存储
// TODO: 选择合适的存储结构并说明操作步骤
// TODO: 分析关键操作的时间复杂度与空间复杂度

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

