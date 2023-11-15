#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
//创建新节点
ListNode* SLBuyNode(LTDataType x) {
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->_data = x;
	node->_next = NULL;
	node->_prev = NULL;
	return node;
}
//初始化
void InitList(ListNode** pHead)
{
	*pHead = SLBuyNode(-1);
	(*pHead)->_next = (*pHead);
	(*pHead)->_prev = (*pHead);
}
// 双向链表打印
void ListPrint(ListNode* pHead)
{
	assert(pHead);
	ListNode* cur = pHead->_next;
	printf("哨兵位");
	while (cur!=pHead)
	{
		printf("%d<=>", cur->_data);
		cur = cur->_next;
	}
	printf("\n");
}
// 双向链表尾插
void ListPushBack(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* node = SLBuyNode(x);
	//方法一
	//ListNode* tail = pHead->_prev;
	//tail->_next = node;
	//node->_prev = tail;
	//pHead->_prev = node;
	//node->_next = pHead;
	//方法二
	node->_prev = pHead->_prev;
	pHead->_prev->_next = node;
	node->_next = pHead;
	pHead->_prev = node;
}
// 双向链表尾删
void ListPopBack(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->_next != pHead);
	ListNode* del = pHead->_prev;
	ListNode* next = pHead->_prev->_prev;
	pHead->_prev = next;
	next->_next = pHead;
	free(del);
	del = NULL;
}
// 双向链表头插
void ListPushFront(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* node = SLBuyNode(x);
	node->_next = pHead->_next;
	pHead->_next->_prev = node;
	pHead->_next = node;
	node->_prev = pHead;
}
// 双向链表头删
void ListPopFront(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->_next != pHead);
	ListNode* del = pHead->_next;
	ListNode* next = del->_next;
	pHead->_next = next;
	next->_prev = pHead;
	free(del);
	del = NULL;
}
// 双向链表查找
ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		if (cur->_data == x)
		{
			return cur;
		}
		cur = cur->_next;
	}
	return NULL;
}
// 双向链表在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* node = SLBuyNode(x);
	ListNode* prev = pos->_prev;
	prev->_next = node;
	node->_prev = prev;
	node->_next = pos;
	pos->_prev = node;//别忘记了，第一次写的时候就忘记了，倒置打印的时候有问题，节点直接没有正确连接
}
// 双向链表删除pos位置的节点
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* del = pos;
	ListNode* prev = pos->_prev;
	prev->_next = pos->_next;
	pos->_next->_prev = prev;
	free(del);
	del = NULL;
}
void ListDestory(ListNode* pHead)
{
	ListNode* cur = pHead->next;
	while (cur != pHead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}

	free(pHead);
}
