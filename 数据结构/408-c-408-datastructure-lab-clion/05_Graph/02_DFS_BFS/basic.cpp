#include <iostream> // 标准输入输出：cin、cout
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
#include <climits> // INT_MAX：表示带权图中不存在的边
using namespace std; // 使用标准库名称

constexpr int MaxVertexNum = 100; // 练习用最大顶点数
using VertexType = int; // 顶点信息类型
using EdgeType = int; // 边权类型
constexpr EdgeType INF = INT_MAX; // 带权矩阵的无边标记；参与加法前须判无边并防溢出
struct MGraph {
    VertexType vex[MaxVertexNum]; // 顶点信息，顶点下标从 0 开始
    EdgeType edge[MaxVertexNum][MaxVertexNum]; // 无权图用 0/1；带权图的无边项初始化为 INF
    int vexnum; // 实际顶点数
    int arcnum; // 实际边数；无向边只计一次
};
struct ArcNode {
    int adjvex; // 该边指向的顶点下标
    EdgeType weight; // 边权；无权图可约定为 1
    ArcNode* next; // 同一顶点的下一条边
};
struct VNode {
    VertexType data; // 顶点信息
    ArcNode* first; // 第一条边；没有边时为 nullptr
};
struct ALGraph {
    VNode vertices[MaxVertexNum]; // 顶点表
    int vexnum; // 实际顶点数
    int arcnum; // 实际边数
};

// 学习主题：02_DFS_BFS 基础练习
// 本文件练习：图的深度优先遍历、广度优先遍历与访问标记

// TODO: 梳理图的深度优先遍历、广度优先遍历与访问标记
// TODO: 选择合适的存储结构并说明操作步骤
// TODO: 分析关键操作的时间复杂度与空间复杂度

int main() {
    // TODO: 在这里亲自完成本文件的练习。
    return 0;
}

