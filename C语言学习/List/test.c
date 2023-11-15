#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
void test()
{
	ListNode* head = NULL;
	InitList(&head);
	ListPushBack(head, 3);
	ListPushBack(head, 5);
	ListPrint(head);
	ListPopBack(head);
	ListPrint(head);
	ListPushFront(head, 6);
	ListPrint(head);
	ListPopFront(head);
	ListPrint(head);
	ListPushBack(head, 5);

	ListNode* node= ListFind(head, 5);
	ListPushBack(head, 6);
	ListInsert(node, 10);
	ListPrint(head);
	node = ListFind(head, 5);
	ListErase(node);

	ListPrint(head);




}
int main()
{
	test();

	return 0;
}