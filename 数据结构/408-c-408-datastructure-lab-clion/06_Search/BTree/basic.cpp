#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

using KeyType = int; // 关键字类型
constexpr int Order = 3; // 练习用 B 树阶数，按题目调整
struct BTNode {
    int keynum; // 当前关键字个数，稳定状态至多 Order-1 个
    KeyType key[Order]; // 从 1 存关键字，下标 0 不用
    BTNode* child[Order]; // 从 0 存孩子，关键字数为 k 时有 k+1 个孩子位置
    BTNode* parent; // 双亲地址，根的双亲为 nullptr
};
using BTree = BTNode*; // 根指针；分裂临时溢出时须另设暂存空间

// 学习主题：BTree 基础练习
// 本文件练习：B 树的阶、结点关键字范围、查找与分裂

// TODO: 梳理B 树的阶、结点关键字范围、查找与分裂
// TODO: 选择合适的存储结构并说明操作步骤
// TODO: 分析关键操作的时间复杂度与空间复杂度

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

