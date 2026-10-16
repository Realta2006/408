// 学习主题：04_Delete
#include "LinkedList.h" // 复用结点定义和已学的链表函数
#include <cstdlib> // malloc、free；使用时与 new、delete 区分
using namespace std; // 使用标准库名称

bool DeleteNextNode(LNode* p) {
    if (p == NULL||p->next == NULL) {
        return false;
    }

    LNode* q = p->next;
    p->next = q->next;
    delete q;
    return true;
}

bool ListDelete(LNode* L,int i,int &e) {
    if (i < 1) return false;

    LNode* p = L;
    int j =0 ;

    while (p!= NULL && j < i - 1 ) {
        p = p->next;
        j++;
    }

    if (p== NULL||p->next==NULL) return false;

    LNode* q = p->next;
    e = q->data;
    p->next = q->next;
    delete q;

    return true;
 }
int main() {
    // TODO: 实现单链表第 i 个结点的删除操作。
    int values[]={10,20,30};
    LinkList L=CreateList(values,3);

    PrintList(L);

    LNode *p = LocateElem(L,10);

    int e ;
    bool flag1 =ListDelete(L,2,e);

    PrintList(L);

    if (flag1) {
        cout << "success"<< endl;
        cout << "删除元素：" << e << endl;
    }
    // TODO: 思考如何返回被删结点的数据并回收结点空间。
    // TODO: 考虑删除首元结点、表尾结点和非法位序。
    return 0;
}

