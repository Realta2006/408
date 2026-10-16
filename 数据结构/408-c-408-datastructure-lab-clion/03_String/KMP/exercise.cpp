#include <iostream> // 标准输入输出：cin、cout
using namespace std; // 使用标准库名称

constexpr int MaxSize = 100; // 字符存储容量
struct SString {
    char ch[MaxSize + 1]; // 本模板从下标 1 存字符，下标 0 不存正文
    int length; // 实际串长；匹配按 length 判断，不依赖末尾 '\0'
};

// 学习主题：KMP 习题练习
// 本文件练习：KMP 模式匹配、next 数组或 nextval 数组的含义

// TODO: 完成KMP 模式匹配、next 数组或 nextval 数组的含义的典型题目
// TODO: 手工推演一个边界情况并核对过程
// TODO: 总结算法复杂度、稳定性或适用条件（按本章内容选择）

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

