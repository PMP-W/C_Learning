#define _CRT_SECURE_NO_WARNINGS 1
//二分查找
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int i = 0;
//	int find = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	scanf("%d", &k);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == 7)
//		{
//			printf("找到了\n");
//			find = 1;
//			break;
//		}
//
//	}
//	if (find == 0)
//	{
//		printf("没找到\n");
//
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	//二分查找
//	int left = 0;
//	int right = sz - 1;
//	int find = 0;//假设找不到
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//(left + right) / 2;   避免数字过大
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是%d",mid);
//			find = 1;
//			break;
//		}
//	}
//	if (find == 0)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}


//交换数组
//#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//	int a = 0;
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		a = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = a;
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//
//
//	return 0;
//}


//求最大公约数
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int a = 0;

	scanf("%d %d", &num1, &num2);
	while (a=num1 % num2 )
	{
		num1 = num2;
		num2 = a;

	}
	printf("%d", num2);
	return 0;
}


