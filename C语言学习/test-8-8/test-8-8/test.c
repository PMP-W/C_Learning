#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，请找出那个只出现一次的数字。

例如：

数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5

*/
int main()
{
	int arr[] = { 1 ,2, 3, 4, 5, 1, 2, 3, 4 };
	int single = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	for (i = 0; i < n; i++)
	{
		single = single ^ arr[i];
	}
	printf("%d", single);
}



//交换两个整数的内容
//int main()
//{
//	int a = 10;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}