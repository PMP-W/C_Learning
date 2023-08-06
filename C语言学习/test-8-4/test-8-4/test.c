#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求1！+2!+3!=1+2+6=9
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}



int main()
{
	int i = 0;//内存中栈区的使用习惯是，先使用高地址在使用地址
	int arr[10] = { 0 };//数组随着下标的增长，地址是由低到高的
	//如果说arr和i之间有多余的空间，那么arr数组适当的越界就可能覆盖到i

	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}

	return 0;
}