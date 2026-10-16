// 学习主题：01_Init
#include "LinkedList.h" // 复用结点定义和已学的链表函数
using namespace std; // 使用标准库名称

int main() {
    // TODO: 定义单链表结点类型和链表类型。
    LinkList L; // 此时尚未初始化，调用 InitList 后才获得有效地址

    // TODO: 实现带头结点单链表的初始化，并思考如何判断初始化成功。
    InitList(L); // 建立头结点，头结点不计入表长
    cout<<(L!=nullptr)<<endl; // 检查头指针是否指向结点
    cout<<(L->next==nullptr)<<endl; // L 已初始化，此处检查空表条件
    // TODO: 明确空表时头结点指针域的状态。
    return 0;
}

