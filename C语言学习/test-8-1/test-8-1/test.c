#define _CRT_SECURE_NO_WARNINGS 1
//打印素数
#include<stdio.h>
void is_prime(int num)
{
	int i = 0;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			break;
		else
		{
			printf("%d ", num);
			break;
		}

	}
}
int main()
{
	int a = 0;
	for (a = 100; a <= 200; a++)
	{
		is_prime(a);
	}

}

//判断闰年
//#include<stdio.h>
//int year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		printf("%d年是闰年", y);
//	else
//		printf("%d年不是闰年", y);
//	return 0;
//}
//int main()
//{
//	int Y = 0;
//	scanf("%d", &Y);
//	year(Y);
//
//	return 0;
//}


//打印乘法口诀表
//#include<stdio.h>
//int mul(int x)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= x; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	mul(num);
//	return 0;
//}
