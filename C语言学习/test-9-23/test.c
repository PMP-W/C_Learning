//判断大小端--1
#include<stdio.h>
int check()
{
	int i = 1;
	return (*(char*)&i);
}
int main()
{
	int b = check();
	if (b == 1)
		printf("小端");
	else
		printf("大端");
 
	return 0;
}
//判断大小端--2，这种方法很妙
#include<stdio.h>
int main()
{
	union 
	{
		char a;
		int b;
	}u;
	u.b = 1;
	if (u.a == 1)
		printf("小端");
	else
		printf("大端");

	return 0;
}