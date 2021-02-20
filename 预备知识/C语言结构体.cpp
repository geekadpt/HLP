#include <stdio.h>
#include <iostream>
#define ElementType int 
using namespace std;

//定义单链表结构体
typedef struct LNode {
	ElementType data;
	struct LNode* next;
}LNode, * LinkList;


//初始化单链表
LinkList initLinList() {
	LNode* p = new LNode;
	p->next = NULL;
	return p;
}

//头插法创建单链表
void HeadInsert(LinkList& L) {
	cout << "头插法创建单链表，#号结束：" << endl;
	ElementType a;
	while (cin >> a) {
		LNode* p = new LNode;
		p->data = a;
		p->next = L->next;
		L->next = p;
	}
};
//打印单链表
void printLinkList(LinkList L) {
	LNode* p = L->next;
	while (p) {
		cout << p->data << endl;
		p = p->next;
	}
}

int main() {

	LNode* p = initLinList();
	HeadInsert(p);
	printLinkList(p);
	return 0;
}


