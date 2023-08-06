#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//最简单的C语言递归代码                错误的使用
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//
//}

//求n的阶乘
//int Fact(int n)
//{
//	if (n <= 0)
//		return 1;
//	else
//		return n * Fact(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//输入1234，打印1 2 3 4
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//求第n个斐波那契数
/*int count = 0;
int fbl(int n)
{
	if (n == 3)
		count++;
	if (n <= 2)
		return 1;
	if (n > 2)
		return fbl(n - 1) + fbl(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret=fbl(n);
	printf("%d\n", ret);
	printf("county=%d\n", count);

	return 0;
}*/         //无法计算较大的数，递归过程中重复计算过多，导致程序运行速度变慢

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret=fib(n);
	printf("%d", ret);
	return 0;
}