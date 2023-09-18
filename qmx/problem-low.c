#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//
//	int i = 1;
//	int arr[1000];
//	while (getchar() != '\n')
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	printf("%d", i);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double v1, v2, v3, l, t,s;
//
//	scanf("%lf %lf %lf %lf", &l, &v1, &v2, &v3);
//	t = l / (v1 + v2);
//	s = t * v3;
//	printf("%.5lf", s);
//	return 0;
//}

//差
//#include<stdio.h>
//int main()
//{
//	int A, B, C, D;
//	scanf("%d%d%d%d", &A, &B, &C, &D);
//	int ret = (A * B - C * D);
//
//	printf("%d", ret);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	printf("PROD=%d", x * y);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int A, B;
//	scanf("%d%d", &A, &B);
//	if (A % B == 0 || B % A == 0)
//		printf("Sao Multiplos\n");
//	else
//		printf("Nao sao Multiplos\n");
//
//	return 0;
//}

//判断素数
//#include<stdio.h>
//int main()
//{
//		int a = 0;
//		scanf("%d", &a);
//		
//		int i = 0;
//		int m = 1;
//		if (a <= 1)
//		{
//			printf("no");
//			return 0;
//		}
//		for (i = 2; i < a; i++)
//		{
//			if (a % i == 0)
//			{
//				m = 0;
//				printf("no");
//				break;
//			}
//		}
//		if (m == 1)
//			printf("yes");
//
//	return 0;
//}

//素数的个数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;//
//	int count = 0;
//
//	for (i = 2; i<=a; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=(int)sqrt( i ); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > (int)sqrt(i))
//		{
//			count++;
//		}
//	}
//
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n, i;
//	scanf("%d", &n);
//	for (i = 2; i <= n / 2; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("no\n");
//			break;
//		}
//	}
//	if (i == n / 2 + 1)
//	{
//		printf("yes\n");
//	}
//	return 0;
//}


//数的个位
//#include<stdio.h>
//int main()
//{
//	double a = 0;
//	double num = 0;
//	scanf("%lf", &a);
//	if (a < 0)
//	{
//		a = -a;
//		num = (int)a % 10;
//		printf("%.0lf\n", num);
//	}
//	else
//	{
//		num = (int)a % 10;
//		printf("%.0lf\n", num);
//	}
//	return 0;
//}

//疯狂星期四
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	char arr[32];//int类型的内存不够，转化为字符类型，避免溢出
//	scanf("%d", &a);
//	int i = 0;
//	while ((a/2)!=0)
//	{
//		arr[i] = a % 2;
//		a = a / 2;
//		i++;
//	}
//	arr[i] = a % 2;
//	for (int j=i; j >= 0; j--)
//	{
//		printf("%d", arr[j]);
//	}
//	return 0;
//}

//素数数组
//#include <stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (0 == n % i)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	for (int i = 2; i <= num; i++) {
//		if (is_prime(i) == 1) {
//			printf("%d ", i);
//		}
//		if (i == num)
//			printf("\b");
//	}
//	return 0;
//}

//圆面积
//#include<stdio.h>
//#define pi 3.1415926
//int main()
//{
//	int r = 0;
//	float s = 0;
//	scanf("%d", &r);
//	s = pi * r * r;
//	printf("%.6f", s);
//
//
//	return 0;
//}
//
//数的十位
//#include<stdio.h>
//int main()
//{
//	double a = 0;
//	scanf("%lf", &a);
//	a=a/10;
//	if (a < 0)
//	{
//		a = -a;
//		printf("%d\n",(int)a%10);
//	}
//	else
//	printf("%d", (int)a % 10);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a[1] = { '0' };
//	char b[1] = { '0' };
//	scanf("%c %c", &a[0], &b[0]);
//	if (a[0] >= b[0])
//		printf("%c", a[0]);
//	else
//		printf("%c", b[0]);
//
//	return 0;
//}

//小球运动的距离
//#include<stdio.h>
//double S(double h)
//{
//	double distance = 0.0;
//	double height = h;
//	while (height > 0)
//	{
//		//下落
//		distance += height;
//		//弹起
//		height = height /2;
//		distance += height;
//	}
//	return distance;
//}
//int main()
//{
//	double h = 0.0;
//	double total = 0.0;
//	scanf("%lf", &h);
//	total = S(h);
//	printf("%.6lf", total);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double h = 0.0;
//	double H = 0.0;
//	unsigned int n = 0;
//	double total = 0;
//	scanf("%lf%u", &h, &n);
//	for (int i = 1; i <= n; i++)
//	{
//		total += (h + H);
//		H = h / 2;
//		h = H;
//	}
//	printf("%.6lf", total);
//	return 0;
//}


//出现次数最多的数
//#include<stdio.h>
//int main()
//{
//
//
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char str1[10000], str2[10000];
//	scanf("%s %s", str1, str2);
//	printf("%s", str1);
//	printf("%s", str2);
//
//
//	return 0;
//}

//2的n次幂
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double m = 1;
//	if (n < 0)
//	{
//		n = -n;
//		for (int i = 0; i < n; i++)
//		{
//			m *= 2;
//		}
//		m = 1 / m;
//		if (m == 0) {
//			printf("0");
//		}
//		else {
//			printf("%.9lf", m);
//		}
//
//
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			m *= 2;
//		}
//		printf("%.0lf", m);
//
//	}
//	return 0;
//}


//最高分
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[10000] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			arr[i+1] = arr[i];
//		}
//	}
//	printf("%d", arr[n - 1]);
//
//	return 0;
//}

//比大小
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char str1[10000] = "0";
//	char str2[10000] = "0";
//	scanf("%s", &str1);
//	scanf("%s", &str2);
//	int c = atoi(str1);
//	int d = atoi(str2);
//	if (c>=d)
//		printf("%d", c);
//	else
//		printf("%d", d);
//
//	return 0;
//}

//求字符串长度
//#include<stdio.h>
//int Length(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        str++;
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    char str[10000];
//    gets(str);
//    int len=Length(str);
//    printf("%d", len);
//
//    return 0;
//}

//数字之和
//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	int sum = 0;
//	scanf("%lld", &n);
//
//	while (n)
//	{
//		sum += n % 10;
//		n=n / 10;
//	}
//	if (sum < 0)
//	{
//		sum = -sum;
//	}
//	printf("%d", sum);
//
//	return 0;  
//}


//在数组中找两个数的和
//#include<stdio.h>
//int main()
//{
//	int num[1000] = {0};
//	int target = 0;
//	int i = 0;
//	int count = 0;
//	int ch = 0;
//	while((ch=getchar())!='\n')
//	{
//		scanf("%d", &num[i]);
//		i++;
//		count++;
//	}
//	scanf("%d", &target);
//	for (i = 0;i<count; i++)
//	{
//		int j = 0;
//		for (j = 0;j<count&&j!=i; j++)
//		{
//			if (num[i] + num[j] == target)
//				printf("%d %d", i, j);
//		}
//	}
//
//
//	return 0;
//}


//判断闰年
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		printf("yes\n");
//	else
//		printf("no\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//double calculateDistance(double h) {
//    double distance = h;
//    double height = h;
//    double threshold = 0.0001;
//    int n = 1;
//
//    while (height >= 0.000001) {
//        height /= 2;
//        distance += height;
//        n++;
//    }
//
//    return distance;
//}
//
//int main() {
//    double h;
//    printf("请输入小球的初始高度h：");
//    scanf("%lf", &h);
//
//    double distance = calculateDistance(h);
//    printf("小球从开始下落到静止时刻运动了 %.4lf 距离单位。\n", distance);
//
//    return 0;
//}


//圆面积
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    double r, area;
//    const double pi =acos(-1.0);//引头文件
//    scanf("%lf", &r);
//
//    area = pi * pow(r, 2);
//    printf("%.6f\n", area);
//
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[10000] = { '\0' };
//	gets(str);
//	size_t len = strlen(str);
//	printf("%zd", len);
//	return 0;
//}

//分割字符串---可以尝试模拟实现strtok函数
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[10000];
//	gets(str);
//	char* tem = strtok(str, " ");//char * strtok ( char * str, const char * delimiters );
//	while (tem)
//	{
//		printf("%s\n", tem);
//		tem = strtok(NULL," ");
//	}
//
//	return 0;
//}


//字符串替换
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[1000] = "\0";
//	char str2[1000] = "\0";
//	char str3[1000] = "\0";
//
//	scanf("%s %s %s", &str1, &str2, &str3);
//	char* pch;
//	pch = strstr(str1, str2);
//	if (pch != NULL)
//	{
//		strncpy(pch, str3,strlen(str3));
//	}
//	puts(str1);
//
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//    float h = 100;//等比数列首项；
//    scanf("%f", &h);
//    float q = 0.5;//公比
//    float s;
//
//    s = (h+h/2) / (1 - q) ;
//
//    printf("%f",s);
//
//    return 0;
//}

//数组长度
//#include<stdio.h>
//int main()
//{
//	int arr[1000];
//	int i = 0;
//	int count = 0;
//	do
//	{
//		scanf("%d", &arr[i]);
//		i++;
//		count++;
//	} while (getchar()!= '\n');
//	int len = count;
//	printf("%d", len);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[1000];
//	int i = 0;
//	do
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	} while (getchar() != '\n');
//	int target = 0;
//	int count = i;
//	i = 0;
//	scanf("%d", &target);
//	int flag = 0;
//	for (i = 0; i < count; i++)
//	{
//		int j = 0;
//		for (j = 0; j < count; j++)
//		{
//			if (arr[i] + arr[j] == target)
//			{
//				flag = 1;
//				printf("%d %d", i, j);
//				break;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[1000] = { '\0' };
//	gets(str);
//	size_t count = strlen(str);
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < count; i++)
//	{
//		if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'o') || (str[i] == 'u') || (str[i] == 'u'))
//		{
//			flag=1;
//			printf("%d", i+1);
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("0\n");
//	}
//
//
//	return 0;
//}

//简单蛇形矩阵
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[100][100];
//	int i = 0;
//	int num = 1;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			arr1[i][j] = num;
//			num++;
//		}
//		if (num > n * m)
//			break;
//	}
//	for (i = 0 ; i < n; i++)
//	{
//		int j = 0;
//		if ((i+1) % 2 != 0)
//		{
//			for (j = 0; j < m; j++)
//			{
//				printf("%d ", arr1[i][j]);
//			}
//		}
//		else
//		{
//			for (j = m-1; j >= 0; j--)
//			{
//				printf("%d ",arr1[i][j]);
//			}
//		}
//		if (i < n - 1)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//字符串替换--非自主完成
//#include<stdio.h>
//#include<string.h>
//void replace_string(char* str1, char* str2, char* str3, char* str4)
//{
//    int i, j,k;
//    int len1 = strlen(str1);
//    int len2 = strlen(str2);
//    int len3 = strlen(str3);
//    int found = 0;
//    for (i = 0,j=0; i < len1; )
//    {
//        found = 0;
//        if (str1[i] == str2[0])
//        {
//            for (k = 1; k < len2; k++)
//            {
//                if (str1[i + k] != str2[k])
//                    break;
//            }
//            if (k == len2)
//            {
//                for (k = 0; k < len3; k++)
//                {
//                    str4[j++] = str3[k];
//                }
//                i += len2;
//                found = 1;
//            }
//            
//        }
//        if (!found) {
//            str4[j++] = str1[i++];
//        }
//    }
//    str4[j] = '\0';
//
//}
//int main()
//{
//	char str1[1000] = {'\0'};
//	char str2[1000] = {'\0'};
//	char str3[1000] = { '\0' };
//    char str4[1000] = { '\0' };
//	scanf("%s %s %s", &str1, &str2, &str3);
//    replace_string(str1, str2, str3,str4);
//    printf("%s", str4);
//    return 0;
//}

//#include <stdio.h>
//
//void Snake(int n, int m) {
//    int matrix[100][100];
//    int num = 1; 
//    int row = 0; 
//    int col = 0; 
//    int flag = 1; // 奇数行标志，1表示正序，-1表示逆序
//
//    while (row < n) {
//        if (flag == 1) {
//            // 正序
//            for (col = 0; col < m; col++) {
//                matrix[row][col] = num++;
//            }
//            flag = -1; // 切换为逆序
//        }
//        else {
//            // 逆序
//            for (col = m - 1; col >= 0; col--) {
//                matrix[row][col] = num++;
//            }
//            flag = 1; // 切换为正序
//        }
//        row++; 
//    }
//
//    // 打印矩阵
//    for (row = 0; row < n; row++) {
//        for (col = 0; col < m; col++) {
//            printf("%d ", matrix[row][col]);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//    Snake(n, m);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[100][100];
//	int i = 0;
//	int num = 1;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			arr1[i][j] = num;
//			num++;
//		}
//		if (num > n * m)
//			break;
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		if ((i + 1) % 2 != 0)
//		{
//			for (j = 0; j < m; j++)
//			{
//				printf("%d ", arr1[i][j]);
//			}
//		}
//		else
//		{
//			for (j = m - 1; j >= 0; j--)
//			{
//				printf("%d ", arr1[i][j]);
//			}
//		}
//		if (i < n - 1)
//		{
//			printf("\n");
//		}
//
//
//	}
//
//
//	return 0;
//}


//字母金字塔
//#include<stdio.h>
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	int row = ch - 'A';
//	row++;
//	int i = 0;
//	for (i = 1; i <= row; i++)
//	{
//		int col = 2 * row - 1;
//		int j = 0;
//		for (j = 1; j <= row-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 'A'; j < 'A'+i; j++)
//		{
//			printf("%c", j);
//		}
//		for (j=ch-row+i-1; j >='A'; j--)
//		{
//			printf("%c", j);
//		}
//
//		printf("\n");
//	}
//	return 0;
//}


//某个日期是星期几  W= (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400) mod 7 ----基姆拉尔森计算公式
//#include<stdio.h>
//char* weekday(int y, int m, int d)
//{
//	int weekday = 0;
//	if (m == 1 || m == 2)
//	{
//		m += 12;
//		y--;
//	}
//	weekday = (d +1+2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
//	switch (weekday)
//	{
//	case 0:
//		return "Sunday";
//		break;
//	case 1: 
//		return "Monday"; 
//		break;
//	case 2: 
//		return "Tuesday"; 
//		break;
//	case 3: 
//		return "Wednesday"; 
//		break;
//	case 4: 
//		return "Thursday"; 
//		break;
//	case 5: 
//		return "Friday"; 
//		break;
//	case 6: 
//		return "Saturday"; 
//		break;
//	default: 
//		return NULL; 
//		break;
//	}
//	return NULL;
//}
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int arr[10000] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//int main()
//{
//	int y, m, d;
//	scanf("%d %d %d", &y, &m, &d);
//	int leap = is_leap_year(y);
//	if (leap == 1)
//	{
//		if ((m == 2 && d > (arr[m] + 1)) || d <= 0 || y <= 0)
//		{
//			printf("%d-%d-%d is Non-existent", y, m, d);
//		}
//		else if ((m != 2 && d > arr[m])||d<=0||y<=0||m<=0||m>12)
//		{
//			printf("%d-%d-%d is Non-existent", y, m, d);
//		}
//		else
//			printf("%d-%d-%d is %s", y, m, d, weekday(y, m, d));
//	}
//	else
//	{
//		if (d > arr[m]||d<=0 || y <= 0 || m <= 0||m>12)
//		{
//			printf("%d-%d-%d is Non-existent", y, m, d);
//		}
//		else
//			printf("%d-%d-%d is %s", y, m, d, weekday(y, m, d));
//	}
//
//
//	return 0;
//}

//单词翻转
//
//#include<stdio.h>
//#include<string.h>
//char arr1[10000];
//
//int main()
//{
//	gets(arr1);
//	char arr[] = " ";
//	char* str = NULL;
//	for (str = strtok(arr1, arr); str != NULL; str = strtok(NULL, arr))
//	{
//        int count = 0;
//        count = strlen(str);
//        for (int i = count - 1; i >= 0; i--)
//        {
//            printf("%c", str[i]);
//        }
//		printf(" ");
//	}
//
//
//	return 0;
//}
//十进制转二进制（浮点型）
//#include<stdio.h>
//int main()
//{
//	double num=0.0;
//	scanf("%lf", &num);
//	int n = num / 1;
//	double b = num - n;
//	char arr[32];
//	int i = 0;
//
//	while ((n / 2) != 0)
//	{
//		arr[i] = n % 2;
//		n = n / 2;
//		i++;
//	}
//	arr[i] = n % 2;
//	for (int j = i; j >= 0; j--)
//	{
//		printf("%d", arr[j]);
//	}
//	printf(".");
//
//	for (i = 0; i < 15; i++)
//	{
//		if (b * 2 >= 1)
//		{
//			b = b * 2 - 1;
//			printf("1");
//		}
//		else
//		{
//			b = b * 2;
//			printf("0");
//		}
//		if (b == 0)
//			break;
//	}
//		return 0;
//}
//#include<stdio.h>
//int arr[10000];
//int main()
//{
//	int i = 0;
//	do
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	} while (getchar() != '\n');
//	int target = 0;
//	int count = i;
//	i = 0;
//	scanf("%d", &target);
//	int flag = 0;
//	for (i = 0; i < count - 1; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < count; j++)
//		{
//			if (arr[i] + arr[j] == target)
//			{
//				flag = 1;
//				printf("%d %d", i, j);
//				break;
//			}
//			else
//				flag = 0;
//		}
//		if (flag == 1)
//			break;
//	}
//	return 0;
//}


//在数组中找两个数的和Plus--超时
//#include<stdio.h>
//int arr[1000000];
//int main()
//{
//	int i = 0;
//	do
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	} while (getchar() != '\n');
//	int target = 0;
//	int count = i;
//	i = 0;
//	scanf("%d", &target);
//	int flag = 0;
//	int find = 0;
//	for (i = 0; i < count; i++)
//	{
//		if (arr[i] <= target && arr[i + 1] >= target)
//		{
//			find = i;
//			break;
//		}
//		else
//			find = i;
//		
//	}
//
//	for (i = 0; i <= find; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j <= find; j++)
//		{
//			if (arr[i] + arr[j] == target)
//			{
//				flag = 1;
//				printf("%d %d", i, j);
//				break;
//			}
//			else
//				flag = 0;
//		}
//		if (flag == 1)
//			break;
//	}
//	return 0;
//}

//数组长度----存疑
#include<stdio.h>
int arr[1000];
int main()
{
	int num = 0;
	while (scanf("%d", &arr[num])!=-1)
	{
		num++;
	}
	printf("%d", num);
	return 0;
}