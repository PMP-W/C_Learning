#define _CRT_SECURE_NO_WARNINGS 1
//����
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


//����ˮ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ
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
//		empty = empty / 2 + empty % 2;//���깻���ĺͲ������Ŀ�ƿ��
//	}
//	printf("���Ժ�%dƿ��ˮ", count);
//	return 0;
//}


//��ӡ����          ��Ҫ�Ż�
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


//ˮ�ɻ���
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

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




//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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
//	printf("%d��%d�η�=%d",n,k, ret);
//	return 0;
//}

/*дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19

���룺1729�������19

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
//	printf("������һ���Ǹ�������");
//	scanf("%d", &n);
//	int ret=DigitSum(n);
//	printf("���ĸ�λ��֮��Ϊ%d", ret);
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//#include<stdio.h>
//�ݹ�
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
//	printf("%d�Ľ׳�Ϊ%d",n, ret);
//	return 0;
//}


//�ǵݹ�
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
//	printf("%d�Ľ׳�Ϊ%d",n, ret);
//	return 0;
//}


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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


/*��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

���磺2+22+222+2222+22222

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