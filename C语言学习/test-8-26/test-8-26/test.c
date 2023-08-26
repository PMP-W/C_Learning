#define _CRT_SECURE_NO_WARNINGS 1
//转移表实现计算器
#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**************************\n");
//	printf("**************************\n");
//	printf("******* 1.加  2.减 *******\n");
//	printf("******* 3.乘  4.除 *******\n");
//	printf("*******   0.退出   *******\n");
//	printf("**************************\n");
//	printf("**************************\n");
//}
//int main()
//{
//	int input = 1;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*p[])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请输入：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x,y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误，重新输入：\n");
//		}
//
//	} while (input);
//
//
//	return 0;
//}


//使用qsort库函数
//#include<stdio.h>
//#include<stdlib.h>
//int compare(const void* p1, const void* p2)
//{
//	return (*(int*)p1) - (*(int*)p2);
//}
//int main()
//{
//	int arr[] = { 1,2,5,4,8,9,6,10,3,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	qsort(arr, sz, sizeof(arr[0]), compare);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//单身狗
//首先这个结果肯定不是0（要不然就全都配对了），所以里面一定至少一位是一。找出值为1的一位，
//以这一位的值将结果分为两组。例如1 2 3 4 1 2，异或完的结果应该是3 ^ 4得到的111，
//那么随便找一位就行了。例如找最低位，那么这一位是1的有1 3 1，
//是0的有2 4 2，由于是利用异或结果为1的某一位分的组，所以两个待查询数字一定分别在两组中。所以再找两个变量，分别异或两组数，即可找到这两个数。
//       1
//#include<stdio.h>
//void find(int arr[], int sz)
//{
//	int i=0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];//得到两个需要找出的数之间异或的结果
//	}
//	//5^6=3
//	//5          000101
//	//6          000110
//	//3          000011
//	//两个数的二进制位之间必然有一位不同，即一个是1，一个是0
//	int difference = ret & (~ret + 1);
//	int num1 = 0;
//	int num2 = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if ((arr[i] & difference) == 0)
//			num1 ^= arr[i];
//		else
//			num2 ^= arr[i];
//	}
//	printf("%d %d", num1, num2);
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,1,2,3,4};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find(arr, sz);
//
//
//	return 0;
//}
//    2      
void findTwoNum(int arr[], int n, int* pnum1, int* pnum2)
{
	int i;
	int sum = 0;
	​
	for (i = 0; i < 9; i++)
	{
		sum ^= arr[i];
	} //先找到两个数互相异或的结果
	​
	int pos;
	for (i = 0; i < 32; i++)
	{
		if (sum & 1 << i)
		{
			pos = i;
			break;
		}
	} //再找到有分歧的一位。在这一位上，两个数一定是一个1一个0
	​
		* pnum1 = *pnum2 = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] & 1 << pos)
		{
			*pnum1 ^= arr[i]; //这一位是1的，放在数1里
		}
		else
		{
			*pnum2 ^= arr[i]; //这一位是0的，放在数2里
		}
	}
}

//月份天数
//#include<stdio.h>
//int main()
//{
//	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int month = 0;
//	int year = 0;
//	while ((scanf(" %d %d", &year, &month)) != EOF)
//	{
//		int day = days[month - 1];
//		if (year % 4 == 0 && year % 100 != 0 || year % 100 == 0)
//			day += 1;
//		printf("%d\n", day);
//	}
//
//	return 0;
//}