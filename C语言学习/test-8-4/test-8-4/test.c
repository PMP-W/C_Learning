#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��1��+2!+3!=1+2+6=9
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
	int i = 0;//�ڴ���ջ����ʹ��ϰ���ǣ���ʹ�øߵ�ַ��ʹ�õ�ַ
	int arr[10] = { 0 };//���������±����������ַ���ɵ͵��ߵ�
	//���˵arr��i֮���ж���Ŀռ䣬��ôarr�����ʵ���Խ��Ϳ��ܸ��ǵ�i

	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}

	return 0;
}