#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using KeyType = int; // 关键字类型
constexpr int TableSize = 101; // 散列表容量，散列函数按题目确定
enum class SlotState { Empty, Occupied, Deleted }; // 空位置、已占用、删除标记
struct HashTable {
    KeyType key[TableSize]; // 开放定址法的关键字存储区
    SlotState state[TableSize]; // 初始化为 Empty；删除标记不能直接当作空位置
    int count; // 已占用位置个数
};
struct HashNode {
    KeyType key; // 拉链法结点的关键字
    HashNode* next; // 同桶的后继结点
};
using ChainHashTable = HashNode*[TableSize]; // 桶首指针数组，使用前初始化为 nullptr

// 学习主题：HashTable 习题练习
// 本文件练习：散列表构造、冲突处理与查找性能

// TODO: 完成散列表构造、冲突处理与查找性能的典型题目
// TODO: 手工推演一个边界情况并核对过程
// TODO: 总结算法复杂度、稳定性或适用条件（按本章内容选择）

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

