#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit";
//	char arr2[] = "**************";
//
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠，单位是毫秒
//		system("cls");//用来执行系统命令的
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	float average = 0;
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	average = sum / 10.0;
//	printf("sum=%d\n", sum);
//	printf("average=%f\n", average);
//
//	return 0;
//}

//交换数组
//#include<stdio.h>
//int main()
//{
//	int arr_A[5] = {1,2,3,4,5};
//	int arr_B[5] = {6,7,8,9,10};
//	int a = 0;
//	int b = 0;
//
//
//	for (a = 0,b=0; a<5,b<5; a++,b++)
//	{
//		arr_A[a] = arr_B[b];
//	}
//	for (a = 0; a < 5; a++)
//	{
//		printf("%d ", arr_A[a]);
//	}
//	printf("\n");
//	for (b = 0; b < 5; b++)
//	{
//		printf("%d ", arr_B[b]);
//	}
//
//	return 0;
//}

//最大公约数
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int cd = 0;
//
//	scanf("%d %d", &num1, &num2);
//
//
//}


//打印闰年
#include<stdio.h>
int main()
{
	int year = 0;
	for (year = 1000; year >= 1000 && year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			printf("%d ", year);
	}
	return 0;
}