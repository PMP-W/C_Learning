#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*��һ�����������У�ֻ��һ�����ֳ���һ�Σ��������鶼�ǳɶԳ��ֵģ����ҳ��Ǹ�ֻ����һ�ε����֡�

���磺

�������У�1 2 3 4 5 1 2 3 4��ֻ��5����һ�Σ��������ֶ�����2�Σ��ҳ�5

*/
int main()
{
	int arr[] = { 1 ,2, 3, 4, 5, 1, 2, 3, 4 };
	int single = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	for (i = 0; i < n; i++)
	{
		single = single ^ arr[i];
	}
	printf("%d", single);
}



//������������������
//int main()
//{
//	int a = 10;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}