#define _CRT_SECURE_NO_WARNINGS 1
��ӡ1 - 100֮������3�ı���
#include<stdio.h>
int main()
{
	int a = 3;
	while (a <= 100)
	{
		if (a % 3 == 0)
			printf("%d ", a);
		a++;


	}

	return 0;
}

�������������մӴ�С��˳�����
a, b, c       a, c, b  b, c, a  b, a, c  c, a, b, c, b, a
#include<stdio.h>
int main()
{
	int a, b, c;
	a = 0;
	b = 0;
	c = 0;

	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (b > c)
			printf("%d %d %d", a, b, c);
		if (c > a)
			printf("%d %d %d", c, a, b);

	}
	else if (b > a)
	{
		if (a > c)
			printf("%d %d %d", b, a, c);
		if (c > b)
			printf("%d %d %d", c, b, a);

	}
	else if (a > c > b)
		printf("%d %d %d", a, c, b);
	else
		printf("%d %d %d", b, c, a);

	return 0;
}


/*#include <stdio.h>

int main() {
	int a, b, c, max, min;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}

	if (c > max) {
		max = c;
	}

	if (min > c) {
		min = c;
	}

	b = a + b + c - max - min;
	c = min;
	a = max;

	printf("�Ӵ�С����%d %d %d\n", a, b, c);

	return 0;
}*/






#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;//a=a+1,c=a
	b = ++c, c++, ++a, a++;//b=c+1,c=c+1,a=a+1,a=a+1             ǰ��++ --��++��ʹ��
	b += a++ + c;//,a=a+1,b=b+a+1+c                              ����++ --��ʹ�ú�++
	printf("a = %d b = %d c = %d\n:", a, b, c);//
	return 0;
}
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;// ++a���Ӹ�a+1�����Ϊ6���ü���֮��Ľ����c��ֵ����ˣ�a = 6  c = 6
	b = ++c, c++, ++a, a++;
	// ���ű��ʽ�����ȼ�����ͣ���������b=++c, b�õ�����++c��Ľ����b��7
	// b=++c �ͺ�ߵĹ��ɶ��ű��ʽ�����δ������Ҽ���ġ�
	// ���ʽ����ʱ��c++�ͣ�++a,a++���a+2����c��1����ʱc��8��a��8��b:7
	b += a++ + c; // a�Ⱥ�c�ӣ����Ϊ16���ڼ���b��ֵ7���ȵĽ��Ϊ23������a��1��a��ֵΪ9
	printf("a = %d b = %d c = %d\n:", a, b, c); // a:9, b:23, c:8
	return 0;
}