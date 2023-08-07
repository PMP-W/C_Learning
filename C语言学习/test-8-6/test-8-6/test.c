#define _CRT_SECURE_NO_WARNINGS 1
//调试
//#include <stdio.h>

//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//喝汽水问题
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//#include<stdio.h>
//int main()
//{
//	int bottle = 0;
//	int empty = 0;
//	int money = 0;
//	int count = 0;
//	scanf("%d", &money);
//	count = money;
//	empty = money;
//
//	while (empty>1)
//	{
//		count += empty / 2;
//		empty = empty / 2 + empty % 2;//喝完够换的和不够换的空瓶子
//	}
//	printf("可以喝%d瓶汽水", count);
//	return 0;
//}


//打印棱形          需要优化
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= ((n + 1) / 2);i++)
//	{
//		for (j = 1; j <=n; j++)
//		{
//			if ((j <=(n + 1) / 2 - i)||j>((n+1)/2)+(i-1))
//				printf(" ");
//			else
//				printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < (n + 1) / 2; i++)
//	{
//		for (j = 1; j < n; j++)
//		{
//			if((j<=i)||(j>(n-i)))
//				printf(" ");
//			else
//				printf("*");
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//


//水仙花数
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

#include<stdio.h>          
int power(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k == 1)
		return n;
	else
		return n * power(n, (k - 1));
}
int main()
{
	int num = 0;
	int sum = 0;
	int start, end = 0;
	scanf("%d %d", &start, &end);
    for(num=start;num<=end;num++)
	{
		int n = num;
		int m = 0;
		int k = 0;

		while (n)
		{
			n = n / 10;
			k++;
		}
		n = num;
		sum = 0;
		while(n)
		{
		    m = n % 10;
			sum += power(m , k);
			n = n / 10;
		}
		if (sum == num)
			printf("%d ", num);
	}
	return 0;
}




//编写一个函数实现n的k次方，使用递归实现。
//#include<stdio.h>
//int power(int n,int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else
//		return n * power(n, (k - 1));
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	int ret=power(n,k);
//	printf("%d的%d次方=%d",n,k, ret);
//	return 0;
//}

/*写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19

输入：1729，输出：19

*/
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	else
//		return n % 10 + DigitSum(n / 10);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个非负整数：");
//	scanf("%d", &n);
//	int ret=DigitSum(n);
//	printf("它的各位数之和为%d", ret);
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//#include<stdio.h>
//递归
//int fact(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return n * fact(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fact(n);
//	printf("%d的阶乘为%d",n, ret);
//	return 0;
//}


//非递归
//int fact(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//	{
//		int i = 0;
//		int m = 1;
//		for (i = 1; i <= n; i++)
//		{
//			m = m * i;
//		}
//		return m;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fact(n);
//
//	printf("%d的阶乘为%d",n, ret);
//	return 0;
//}


//递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n < 10)
//		printf("%d ", n);
//	else
//	{
//		int m = n % 10;
//		print(n / 10);
//		printf("%d ", m);
//
//	}
//
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	print(n);
//
//	return 0;
//}


/*求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

例如：2+22+222+2222+22222

*/
//int Sn(int n)
//{
//	int i = 0;
//	int sum = n;
//	for (i = 1; i < 5; i++)
//	{
//		n = n * 10 + 2;
//		sum += n;
//	}
//	return sum;
//
//}
//int main() 
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum=Sn(n);
//	printf("Sn=%d", sum);
//	return 0;
//}