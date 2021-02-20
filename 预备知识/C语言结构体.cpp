#include <stdio.h>
#include <iostream>
#define ElementType int 
using namespace std;

//���嵥����ṹ��
typedef struct LNode {
	ElementType data;
	struct LNode* next;
}LNode, * LinkList;


//��ʼ��������
LinkList initLinList() {
	LNode* p = new LNode;
	p->next = NULL;
	return p;
}

//ͷ�巨����������
void HeadInsert(LinkList& L) {
	cout << "ͷ�巨����������#�Ž�����" << endl;
	ElementType a;
	while (cin >> a) {
		LNode* p = new LNode;
		p->data = a;
		p->next = L->next;
		L->next = p;
	}
};
//��ӡ������
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


