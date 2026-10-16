#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using KeyType = int; // 本模板练习非负整数关键字
struct RadixNode {
    KeyType key; // 待排序关键字
    RadixNode* next; // 链式存储的后继结点
};
struct Bucket {
    RadixNode* front; // 桶首结点；空桶为 nullptr
    RadixNode* rear; // 桶尾结点；空桶为 nullptr
};
constexpr int Radix = 10; // 十进制整数按位分配时的桶数

// 学习主题：RadixSort 习题练习
// 本文件练习：基数排序的分配收集过程与适用条件

// TODO: 完成基数排序的分配收集过程与适用条件的典型题目
// TODO: 手工推演一个边界情况并核对过程
// TODO: 总结算法复杂度、稳定性或适用条件（按本章内容选择）

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

