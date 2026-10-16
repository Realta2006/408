#include <iostream> // 标准输入输出：cin、cout
using namespace std; // 使用标准库名称

using ElemType = int; // 队列元素类型
constexpr int MaxSize = 100; // 数组容量；牺牲一个单元时最多存 MaxSize-1 个元素
struct SqQueue {
    ElemType data[MaxSize]; // 循环使用的存储区
    int front; // 队头下标
    int rear; // 队尾下一空位下标；初始化时 front = rear = 0
};

// 学习主题：03_CircularQueue 基础练习
// 本文件练习：循环队列的判空判满、取模运算与牺牲单元法

// TODO: 梳理循环队列的判空判满、取模运算与牺牲单元法
// TODO: 选择合适的存储结构并说明操作步骤
// TODO: 分析关键操作的时间复杂度与空间复杂度

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

