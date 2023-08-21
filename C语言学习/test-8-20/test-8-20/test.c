#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p+i);
//	}
//
//	return 0;
//}

//冒泡排序
//#include<stdio.h>
//void up(int arr[], int sz)//数组形参arr后要加[]
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = 0;
//				tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j+1] = tem;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//int main()
//{
//	int arr[] = { 5,4,6,7,3,1,9,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	up(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}


//调整奇偶数顺序  *
#include<stdio.h>
void swap_arr(int arr[],int sz)
{
	int left = 0;
	int right = sz-1;
	int tem = 0;
	while (left<right)
	{
		//找到一个偶数后停止
		while ((left < right) && (arr[left] % 2 != 0))
		{
			left++;
		}
		//找到一个奇数后停止
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		//left和right交换内容
		if (left < right)
		{
			tem = arr[left];
			arr[left] = arr[right];
			arr[right] = tem;
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	swap_arr(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
