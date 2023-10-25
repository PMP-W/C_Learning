#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void test()
{
	CInfo* phead =NULL ;
	//添加
	ContactAdd(&phead);
	ContactAdd(&phead);
	Contactshow(phead);

	ContactDel(&phead);
	Contactshow(phead);
	ContactFind(&phead);
	Contactrevsie(&phead);
	Contactshow(phead);

	//ContactDestory(&phead);


}
int main()
{
	test();
	return 0;
}