#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void SLPrint(SLNode* phead)
{
	//循环打印
	SLNode* pcur = phead;
	while (pcur != NULL)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}
//创建的新节点
SLNode* SLBuyNode(SLDataType x) {
	SLNode* node = (SLNode*)malloc(sizeof(SLNode));
	node->data = x;
	node->next = NULL;
	return node;
}
//尾插
void SLPushBack(SLNode** pphead, SLDataType x)
{
	assert(pphead);
	SLNode* node = SLBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = node;
		return;
	}
	//说明链表不为空，找尾
	SLNode* pcur = *pphead;
	while (pcur->next)
	{
		pcur = pcur->next;
	}
	pcur->next = node;
}
//头插
void SLPushFront(SLNode** pphead, SLDataType x)
{
	assert(pphead);
	SLNode* node = SLBuyNode(x);
	//新节点跟头节点连起来
	node->next = *pphead;
	//让新的节点称为头节点
	*pphead = node;
}
//尾删
void SLPopBack(SLNode** pphead)
{
	assert(pphead);
	//第一个节点不能为空
	assert(*pphead);
	//只有第一个节点的情况
	if ((*pphead)->next == NULL)
	{
		//直接把头节点删除
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//有多个节点的情况
		//找尾节点和尾节点的前一个节点
		SLNode* prev = NULL;
		SLNode* ptail = *pphead;
		while (ptail->next != NULL)
		{
			prev = ptail;
			ptail = ptail->next;
		}
		//prev的指针不再指向ptail,而是指向ptail的下一个节点
		prev->next = ptail->next;
		free(ptail);
		//打印链表的函数里会判断是否为NULL
		ptail = NULL;
	}
}
//头删
void SLPopFront(SLNode** pphead)
{
	assert(*pphead);
	assert(pphead);
	SLNode* del = *pphead;
	*pphead = (*pphead)->next;
	free(del);
	del = NULL;
}
//查找第一个为x的节点
SLNode* SLFind(SLNode** pphead, SLDataType x)
{
	assert(pphead);
	SLNode* pcur = *pphead;
	while (pcur)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}
//在指定位置之前插入数据
void SLInsert(SLNode** pphead, SLNode* pos, SLDataType x)
{
	assert(pphead);
	//约定链表不能为空，pos也不能为空
	assert(pos);
	assert(*pphead);
	SLNode* node = SLBuyNode(x);
	//pos是头节点，头插
	if (pos == *pphead)
	{
		node->next = *pphead;
		*pphead = node;
		return;
	}
	//找pos的前一个节点
	SLNode* prev = *pphead;
	while (prev->next != pos)
	{
		prev = prev->next;
	}
	// prev->node->pos
	node->next = pos;
	prev->next = node;
}
//在指定位置之后插入数据
void SLInsertAfter(SLNode* pos, SLDataType x)
{
	assert(pos);
	SLNode* node = SLBuyNode(x);
	//pos node pos->next
	node->next = pos->next;
	pos->next = node;
	return;
}
//删除pos节点
void SLErase(SLNode** pphead, SLNode* pos)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);
	//如果pos是头节点
	if (pos == *pphead)
	{
		*pphead = (*pphead)->next;
		free(pos);
		return;
	}
	SLNode* prev = *pphead;
	while (prev->next != pos)
	{
		prev = prev->next;
	}
	//prev pos pos->next
	prev->next = pos->next;
	free(pos);
	pos = NULL;
}
//删除pos之后节点
void SLEraseAfter(SLNode* pos)
{
	assert(pos&&pos->next);
	//pos pos->next pos->next->next
	SLNode* del = pos->next;
	pos->next = pos->next->next;
	free(del);
	del = NULL;
}
//销毁链表
void SLDesTroy(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLNode* pcur = *pphead;
	while (pcur->next != NULL)
	{
		SLNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pphead = NULL;
}