#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
//int main()
//{
//	int num = 1;
//	int temperature = -30;//��Щ��������������Щֻ����
//
//	unsigned short age = INT_MIN;//��Ҫ��ͷ�ļ�
//	return 0;
//}


//size_t��ר��Ϊsizeof���õ�һ������
//size_t�ı�����unsigned int
//size_t���͵������ڴ�ӡ��ʱ�򣬸�ʽӦ��ʹ��%zd
//int main()
//{
//	size_t num = 1;
//	printf("%zd\n", sizeof(char));//sizeof��һ����������������Ǳ�����ռ�ڴ�Ĵ�С����λ���ֽ�
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//a = a + 1;
//	//a += 1;
//	//a++;
//	++a;
//	printf("a=%d", a);
//	return 0;
//}

//ǰ��++������++
//int main()
//{
//	int a = 5;
//	//int b = ++a;//ǰ��++����++����ʹ��        a=a+1,b=a
//	int b = a++;//����++����ʹ�ã���++        b=a,a=a+1
//	printf("a=%d\n", a);//6
//	printf("b=%d\n", b);//6      5
//
//	return 0;
//}
// 
// 
// 
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a, b;
//	a = 0;
//	b = 0;
//	scanf_s("%d%d", &a, &b);
//	printf("%d\n",Max(a,b) );
//	return 0;
//}



//�ж�һ�����Ƿ�Ϊ����


//
//int main()
//{
//	int a = 0;
//
//	printf("������һ������");
//		scanf_s("%d", &a);
//	if (a % 2 == 0)
//		printf("�������ż��\n");
//	else
//		printf("�����������");
//
//
//	return 0;
//}


//���1-100֮�������
int main()
{
	int a = 1;
	while (a <= 100)
	{
		
		if (a % 2 == 1)
			printf("%d ", a);
		a++;



	}


	return 0;
}