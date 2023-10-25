#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void test()
{
	SLNode* node1 = (SLNode*)malloc(sizeof(SLNode));
	node1->data = 1;
	SLNode* node2 = (SLNode*)malloc(sizeof(SLNode));
	node2->data = 2;
	SLNode* node3 = (SLNode*)malloc(sizeof(SLNode));
	node3->data = 3;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	SLNode* plist = node1;
	SLPrint(plist);
}
void test1()
{
	//头插
	SLNode* plist = NULL;
	SLPushFront(&plist, 1);
	//尾插
	SLPushBack(&plist, 2);
	//头删
	SLPopFront(&plist);
	//尾删
	SLPopBack(&plist);
	//在pos前插入
	SLPushFront(&plist, 1);
	SLPushFront(&plist, 2);
	SLPushFront(&plist, 3);
	SLNode* pos = SLFind(&plist, 2);
	SLInsert(&plist, pos, 4);
	//在pos后插入
	SLInsertAfter(pos, 5);
	//删除pos节点
	//SLErase(&plist,pos);
	//删除pos后的一个节点
	SLEraseAfter(pos);
	//销毁链表
	SLDesTroy(&plist);
	SLPrint(plist);

}
int main()
{
	test1();
	//test();
	return 0;
}