#pragma once
#include<stdio.h>
#include<assert.h>
//定义链表节点的结构
typedef int SLDataType;
typedef struct SListNode
{
	SLDataType data;//要保存的数据
	struct SListNode* next;
}SLNode;

//创建几个结点组成一个链表，并打印链表
void SLPrint(SLNode* phead);
//尾插
void SLPushBack(SLNode**pphead,SLDataType x);
//头插
void SLPushFront(SLNode**pphead,SLDataType x);
//删除
void SLPopBack(SLNode** pphead);
void SLPopFront(SLNode** pphead);
//找节点，这里的第一个参数写一级指针还是二级指针
//这里传一级实际上就可以了，因为不改变头结点
//但是这里要写二级指针，因为要保持接口一致性
SLNode* SLFind(SLNode** pphead, SLDataType x);
//在指定位置的插入和删除
//在指定位置之前插入数据
void SLInsert(SLNode** pphead, SLNode* pos, SLDataType x);
//在指定位置之后插入数据
void SLInsertAfter(SLNode* pos, SLDataType x);
//删除pos节点
void SLErase(SLNode** pphead, SLNode* pos);
//删除pos之后节点
void SLEraseAfter(SLNode* pos);

//销毁链表
void SLDesTroy(SLNode** pphead);