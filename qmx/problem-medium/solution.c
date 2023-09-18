#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 10;
//	int*const p = &n;
//	*p = 20;
//	printf("%d", n);
//
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//也可以写为&arr[0]
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));//arr[i]
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	printf("%d\n", my_strlen("abc"));//此处字符串常量也是传递首地址
//	return 0;
//}

//健壮性/鲁棒性
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* p)
//{
//	int count = 0;
//	assert(p);//asser(p!=NULL)  确保指针的有效性
//	while (*p )
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//
//	return 0;
//}



//字符串旋转结果    *
//#include<stdio.h>
//#include<stdio.h>
//#include<assert.h>
//int stringrotation(char* str1, char* str2)
//{
//	assert(str1);
//	assert(str2);
//	if (strlen(str1) != strlen(str2))
//		return 0;
//	else
//	{
//		if (strcmp(str1, str2) == 0)
//			return 1;
//	}
//	int len = strlen(str1);
//	int i = 0;
//	int j = 0;
//	while (i < len)
//	{
//		char* temp = str1;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str1 + j) = *(str1+j + 1);
//		}
//		*(str1 + len - 1) = temp;
//		if (strcmp(str1, str2));
//		{
//			return 1;
//		}
//
//		i++;
//	}
//	return 0;
//
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "bcda";
//	int ret = stringrotation(arr1, arr2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}


//整除问题
//#include<stdio.h>
//int main()
//{
//	int min, max, factor;
//	scanf("%d %d %d", &min, &max, &factor);
//	int i=0;
//	for (i = min; i <= max; i++)
//	{
//		if (i % factor == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//


//数列排序
//#include<stdio.h>
//void Bubble_sort(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[200];
//	int n = 0;
//	scanf("%d ", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Bubble_sort(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//水仙花数

//#include<stdio.h>
//int power(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else
//		return n * power(n, (k - 1));
//}
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	for (num = 99; num <= 1000; num++)
//	{
//		int n = num;
//		int m = 0;
//		int k = 0;
//
//		while (n)
//		{
//			n = n / 10;
//			k++;
//		}
//		n = num;
//		sum = 0;
//		while (n)
//		{
//			m = n % 10;
//			sum += power(m, k);
//			n = n / 10;
//		}
//		if (sum == num)
//			printf("%d\n", num);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[10000];
//	scanf("%d", &n);
//	int target = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &target);
//	int find = 0;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == target)
//		{
//			find = 1;
//			count++;
//			if (count == 1)
//				printf("%d", i + 1);
//		}
//	}
//	if (find == 0)
//		printf("-1");
//	return 0;
//}

//数列特征
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[10000];
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];//此处有问题，起初写的 int max=0，导致失败
//	int min = arr[0];
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//		sum += arr[i];
//	}
//	printf("%d\n", max);
//	printf("%d\n", min);
//	printf("%d\n", sum);
//
//
//	return 0;
//}


//字母图形---待解决
//#include<stdio.h>
//int main()
//{
//	char arr[26][26];
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 65+i; j < 65-i + m; j++)
//		{
//			printf("%c", j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include<math.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if(num>=2)
//	printf("2");
//	for (int i = 3; i <= num; i++) {
//		int flag = 1;
//		int m = 0;
//		for (m = 2; m <= sqrt(i); m++)
//		{
//			if (i % m==0)
//			{
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			printf(" %d", i);
//	}
//	return 0;
//}


//数对
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int arr[1000] = {0};
//	for (i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			arr[j] = i;
//			j++;
//		}
//	}
//	int count = j;
//	for (j = 0; j <= count; j++)
//	{
//		for (i = 0; i <= count; i++)
//		{
//			if ((arr[i] * arr[j]) == n)
//			{
//				printf("%d * %d = %d\n", arr[j],arr[i], n);
//			}
//		}
//	}
//
//	return 0;
//}
// 优化
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d * %d = %d\n", i, n / i, n);
//		}
//	}
//
//	return 0;
//}


//完数
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n / 2; i++)
//	{
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (sum == n)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//
//	return 0;
//}


//阿尔法乘积
//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	int mul = 1;
//	int result = 10;
//	while (result>=10)
//	{
//		mul = 1;
//		while (n>0)
//		{
//			if (n % 10 != 0)
//			{
//				mul *= n % 10;
//			}
//			n /= 10;
//		}
//		n = mul;
//		result=mul;
//	}
//	printf("%d", result);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	int mul = 1;
//	int result = 10;
//	while (n/10)
//	{
//		mul = 1;
//		while (n)
//		{
//			if (n % 10 != 0)
//			{
//				mul *= n % 10;
//			}
//			n /= 10;
//		}
//		n = mul;
//		result = mul;
//	}
//	printf("%d", result);
//	return 0;
//}



//数位分离---需优化
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count=0;
//	int arr[1000];
//	int i = 0;
//	while (n> 0)
//	{
//		arr[i] = n % 10;
//		n /= 10;
//		i++;
//		count++;
//	}
//	for (i = count-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//回文数
//#include<stdio.h>
//int Palindromic_number(int x)
//{
//	int arr1[10] = { 0 };
//	int i = 0;
//	while (x)
//	{
//		arr1[i] = x % 10;
//		x /= 10;
//		i++;
//	}
//	int count = i;
//	i = 0;
//	if (arr1[0] == arr1[3] && arr1[1] == arr1[2])
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	char arr1[] = {0};
//	for (i = 1000; i < 10000; i++)
//	{
//		if (Palindromic_number(i) == 1)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//
//    int i, a, b, c, d;
//    for (i = 1001; i < 10000; i++)
//    {
//        a = i % 10;
//        b = (i % 100 - i % 10) / 10;
//        c = (i % 1000 - i % 100) / 100;
//        d = (i - i % 1000) / 1000;
//        if (a == d && b == c)
//            printf("%d\n", i);
//    }
//    return 0;
//}

//水仙花数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = n;
//	int sum = 0;
//	while (n)
//	{
//		sum+=pow(n % 10, 3);
//		n /= 10;
//	}
//
//	if (sum == m)
//		printf("YES");
//	else
//		printf("NO");
//
//
//	return 0;
//}


//特殊的数字四十
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 999; i < 10000; i++)
//	{
//		int n = i;
//		sum = 0;
//		while (n)
//		{
//			sum += n % 10;
//			n /= 10;
//		}
//		if (sum == 10)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}

//数的统计
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[1000];
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		count = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		printf("%d %d\n", arr[i], count);
//	}
//	return 0;
//}


//字符串对比-------待解决
//#include<stdio.h>
//#include<string.h>
//int compar(char* str1, char* str2)
//{
//	if (strcmp(str1, str2) != 0)
//		return 1;
//	else
//	{
//
//	}
//}
//int main()
//{
//	char str1[1000];
//	char str2[1000];
//	scanf("%s %s", &str1, &str2);
//	compare(str1, str2);
//
//	return 0;
//}


//数列中找两个数的和
//#include <stdio.h>
//
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    int i, j;
//    for (i = 0; i < numsSize - 1; i++) {
//        for (j = i + 1; j < numsSize; j++) {
//            if (nums[i] + nums[j] == target) {
//                int* result = (int*)malloc(2 * sizeof(int));
//                result[0] = i;
//                result[1] = j;
//                *returnSize = 2;
//                return result;
//            }
//        }
//    }
//    *returnSize = 0;
//    return NULL;
//}
//
//int main() {
//    int nums[1000];
//    int target = 0;
//    int i = 0;
//    do
//    {
//        scanf("%d", &nums[i]);
//        i++;
//    } while (getchar() != '\n');
//    scanf("%d", &target);
//    int returnSize;
//    int* result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);
//    if (result != NULL) {
//        printf("%d %d\n", result[0], result[1]);
//        free(result);
//    }
//    return 0;
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
//		for (j = 0; j < count && j != i; j++)
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
//}


//字符删除--非自主完成
//#include<stdio.h>
//void delchar(char* str, char c)
//{
//	int i = 0;
//	int j = 0;
//	while (str[i]!='\0')
//	{
//		if (str[i] != c)
//		{
//			str[j++] = str[i];//未遇到指定字符，则赋值；遇到，则跳过
//		}
//		i++;
//	}
//	str[j] = str[i];
//}
//int main()
//{
//	char str[20] = { '\0' };
//	char ch;
//	gets(str);
//	scanf("%c", &ch);
//	delchar(str, ch);
//	printf("%s", str);
//
//	return 0;
//}


//友好数
//#include<stdio.h>
//int friendly_num(int x, int y)
//{
//	int i = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (i = 1; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			sum1 += i;
//		}
//	}
//	for (i = 1; i < y; i++)
//	{
//		if (y % i == 0)
//		{
//			sum2 += i;
//		}
//	}
//	if ((sum1 == y)&&(sum2==x))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int ret=friendly_num(n, m);
//	if (ret == 1)
//		printf("yes");
//	if(ret==0)
//		printf("no");
//
//	return 0;
//}


//薪水计算
//#include<stdio.h>
//float cal_salary(float h, float s)
//{
//	float sum = 0.0;
//	float h1 = h - 40;
//	float s1 = s * 1.5;
//	float h2 = h - 50;
//	float s2 = s * 2;
//	if (h <= 40)
//	{
//		sum = h * s;
//	}
//	else if (h > 40 && h <= 50)
//	{
//
//		sum = (s * 40) +(h1*s1) ;
//	}
//	else
//	{
//
//		sum = (40 * s) + (10 * s1) + (h2 * s2);
//	}
//	return sum;
//}
//int main()
//{
//	float hours =0 ;
//	float salary = 0;
//	scanf("%f %f", &hours, &salary);
//	float sum=cal_salary(hours, salary);
//	printf("%.2f", sum);
//	return 0;
//}


////时间转换
//#include<stdio.h>
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	int h, m, s;
//	h = t / 3600;
//	t = t % 3600;
//	m = t / 60;
//	t = t % 60;
//	s = t;
//	printf("%d:%d:%d", h, m, s);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	float n;
//	scanf("%f", &n);
//	printf("0.");
//	while (n > 0.0)
//	{
//		n = n * 2;
//		if (n >= 1.0)
//		{
//			printf("1");
//			n = n - 1;
//		}
//		else
//			printf("0");
//	}
//	return 0;
//}

//连续正整数的和
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i < num; i++)
//	{
//		int j = 0;
//		sum = 0;
//		for (j = i; j < num; j++)
//		{
//			sum += j;
//			if (sum == num)
//			{
//				printf("%d %d\n", i, j);
//				break;
//			}
//		}
//	}
//
//	return 0;
//}


//特殊的回文数
//#include<stdio.h>
//int ispalindrome(int x)   //回文数，考虑将数倒置，判断倒置前后是否相等
//{
//	if (x < 0)
//		return 0;
//	long long n = 0;
//	int tmp = x;
//	while (tmp)
//	{
//		n = n * 10 + tmp % 10;
//		tmp /= 10;
//	}
//	if (x == n)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (i = 10000; i < 1000000; i++)
//	{
//		sum = 0;
//		m = i;
//		int ret = ispalindrome(i);
//		if (ret == 1)
//		{
//			while (m)
//			{
//				sum += m % 10;
//				m = m / 10;
//			}
//			if (sum == n)
//				printf("%d\n", i);
//			
//		}
//		
//	}
//	return 0;
//}


//反置数
//#include<stdio.h>
//int inverse(int x)   
//{
//	int m = 0;
//	if (x < 0)
//	{
//		x = -x;
//	}
//	long long n = 0;
//	int tmp = x;
//	while (tmp)
//	{
//		n = n * 10 + tmp % 10;
//		tmp /= 10;
//	}
//	if (m < 0)
//		return -n;
//	else
//		return n;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int sum = inverse(m) + inverse(n);
//	sum = inverse(sum);
//	printf("%d", sum);
//
//	return 0;
//}

//最长字符串--非自主完成
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char strings[5][101];   //二维数组解决
//    int max_length = 0; 
//    int max_index = 0;
//
//    for (int i = 0; i < 5; i++) 
//    {
//        scanf("%s", strings[i]);
//        int length = strlen(strings[i]);
//        if (length > max_length) { 
//            max_length = length;
//            max_index = i; 
//        }
//    }
//
//    printf("%s\n", strings[max_index]);
//
//    return 0;
//}


//蛇形矩阵
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
//            if(col<m-1)
//            printf("%d ", matrix[row][col]);
//            if (col == m - 1)
//                printf("%d", matrix[row][col]);
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
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			for (j = 0; j < m; j++)
//			{
//				arr1[i][j] = num;
//				num++;
//			}
//		}
//		else {
//			for (j = m - 1; j >= 0; j--)
//			{
//				arr1[i][j] = num;
//				num++;
//			}
//		}
//
//	}
//	for (i = 0; i < n; i++)
//	{
//
//		for (j = 0; j < m; j++)
//		{
//			if (j < m - 1)
//				printf("%d ", arr1[i][j]);
//			if (j == m - 1)
//			 printf("%d", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//素数三角形
//#include<stdio.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (0 == n % i)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int m = 2;
//	int b = n;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		int count = 0;
//		while (count < b)
//		{
//			if (is_prime(m) == 1)
//			{
//				if(count<b-1)
//				printf("%d ", m);
//				if (count == b - 1)
//					printf("%d", m);
//				count++;
//			}
//			m++;
//		}
//
//		
//		printf("\n");
//		b--;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//void time(unsigned long long t)
//{
//	int h, m, s;
//	h = t / 3600;
//	t = t % 3600;
//	m = t / 60;
//	t = t % 60;
//	s = t;
//	printf("%d:%d:%d\n", h, m, s);
//}
//int main()
//{
//	int n = 0;
//	unsigned long long arr[1000];
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%llu", &arr[i]);
//	}
//	for (i=0;i< n; i++)
//	{
//		time(arr[i]);
//	}
//	return 0;
//}


//计算时间--非自主完成
//#include<stdio.h>
//#include<stdlib.h>
//int arr[100000][3];
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &t);
//		arr[i][0] = t / 3600;
//		t = t % 3600;
//		arr[i][1] = t / 60;
//		t = t % 60;
//		arr[i][2] = t;
//	}
//	for(i=0;i<n;i++)
//	{
//		printf("%02d:%02d:%02d\n", arr[i][0], arr[i][1], arr[i][2]);
//	}
//
//	return 0;
//}
//#include <stdio.h>  
//#include <stdlib.h>  
//int b[100000][3];
//int main(int argc, char* argv[])
//{
//    int i, n = 0, a;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a);
//        b[i][0] = a % 60; a /= 60;
//        b[i][1] = a % 60;
//        b[i][2] = a /= 60;
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%02d:%02d:%02d\n", b[i][2], b[i][1], b[i][0]);
//    }
//    return 0;
//}

//进制转换
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//	char arr[33] = {'\0'};
//	scanf("%s", &arr);
//	int len = strlen(arr);
//	int i = 0;
//	unsigned long long sum = 0;
//
//	for (i = 0; i < len; i++)
//	{
//		int b = (int)arr[i];
//		int num = b - 48;
//		int c = len - 1 - i;
//		sum += num * pow(2, c);
//	}
//	printf("%llu", sum);
//
//	return 0;
//}


//翻转
//#include<stdio.h>
//#include<stdlib.h>
//void swap(char* p, int m, int n) {
//    char temp;
//    if (m < n) {
//        temp = p[m];
//        p[m] = p[n];
//        p[n] = temp;
//        puts(p);
//        swap(p, m + 1, n - 1);
//    }
//}
//int main(void) {
//    int n;
//    scanf("%d", &n);
//    char* p = (char*)malloc((n + 1) * sizeof(char));//动态开辟n+1个空间
//    char ch = getchar();
//    gets(p);
//    swap(p, 0, n - 1);
//    printf("\n");
//    puts(p);
//    free(p);
//    return 0;
//}


//#include<stdio.h>
//int a = 0;
//
//void swap(char* arr, int left, int right, int len)
//{
//	if (len <= 1)
//	{
//		puts(arr);
//	}
//	else
//	{
//		if (left < right)
//		{
//			char temp = arr[right];
//			arr[right] = arr[left];
//			arr[left] = temp;
//			puts(arr);
//
//			return swap(arr, left+1, right-1, len);
//		}
//	}
//}
//void reverse(char* arr, int len)
//{
//	int n = len;
//	if (len == 1)
//	{
//		print(arr);
//
//	}
//	else
//	{
//		if (a < len-1)
//		{
//			char temp;
//
//			temp = arr[a];
//			arr[a] = arr[len - 1];
//			arr[len - 1] = temp;
//			a++;
//			len--;
//			print(arr);
//			return reverse(arr, len);
//		}
//	}
//}
//char arr[10000];
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	char ch = getchar();
//	gets(arr);
//	swap(arr, 0, n - 1, n);
//
//	puts(arr);
//
//	return 0;
//}

//Torry的困惑(提高型)---错误
//#include<stdio.h>
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
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int i = 2;
//	unsigned long long result = 1;
//	while (count < n)
//	{
//		int ret = is_prime(i);
//		if (ret == 1)
//		{
//			result *= (i % 50000);
//			count++;
//		}
//		if (count % 2 == 0)
//			result %= 50000;
//		i++;
//	}
//	printf("%llu", result%50000);
//
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int isPrime(int n) {
//	int i;
//	if (n == 2)
//		return 1;
//	for (i = 2; i <= sqrt(n); i++)
//		if (n % i == 0)
//			return 0;
//	return 1;
//}
//
//int main()
//{
//	int i, n, num = 0;
//	long int result = 1;
//	scanf("%d", &n);
//	for (i = 2; i < 10000000000; i++)
//	{
//		if (isPrime(i) == 1)
//		{
//			result *= (i % 50000);
//			num++;
//		}
//		if (num % 2 == 0)
//			result %= 50000;
//		if (num == n)
//			break;
//	}
//	printf("%d", result % 50000);
//	return 0;
//}
// 
// 递归倒置字符串
//#include<stdio.h>
//void swap(char* arr, int left, int right, int len)
//{
//	if (len <= 1)
//	{
//		puts(arr);
//	}
//	else
//	{
//		if (left < right)
//		{
//			char temp = arr[right];
//			arr[right] = arr[left];
//			arr[left] = temp;
//			puts(arr);
//
//			swap(arr, left + 1, right - 1, len);
//		}
//	}
//}
//
//char arr[10000];
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	char ch = getchar();
//	gets(arr);
//	swap(arr, 0, n - 1, n);
//	printf("\n");
//	printf("%s", arr);
//
//	return 0;
//}
//s01字符串---没看懂题目意思-----  *
//#include<stdio.h>
//void print(int n)
//{
//	if (n == 0)
//		printf("0");
//	else if (n == 1)
//		printf("1");
//	else
//	{
//		print(n - 2);
//		print(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//char s[20000];
//int slen;
// char t[20000];
//void changing()
//{
//     
//     int len = 0;
//     for (int i = 0; i < slen; i++)
//     {
//	        if (s[i] == '1')
//			         {
//			             t[len++] = '0';
//			         }
//		        t[len++] = '1';
//     }
//     for (int i = 0; i < len; i++)
//     {
//         s[i] = t[i];
//     }
//     slen = len;
//	 }
//int main()
//{
//     int n;
//	 s[0] = '0';
//     slen = 1;
//     scanf("%d", &n);
//     while (n--)
//     {
//         changing();
//     }
//     printf("%s", s);
//     return 0;
//}

//字母图形----待改进
//#include<stdio.h>
//char arr[1000][1000];
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int p1 = 0;
//	int p2 = 0;
//	for (i = 0,j=0; i < n; i++,j++)
//	{
//		int count = 1;
//		arr[i][j] = 'A';
//		p1 = j;
//		p2 = j;
//		while (p1>=0)
//		{
//			p1--;
//			arr[i][p1] = arr[i][j] + count++;
//		}
//		count = 1;
//		while (p2<m)
//		{
//			p2++;
//			arr[i][p2] = arr[i][j] + count++;
//		}
//		
//		
//	}
//	for (i = 0; i < n; i++)
//	{
//		j = 0;
//		for (j = 0; j < m; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//	

//01字符串---待改进
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	
//	
//	for (a = 0; a <= 31; a++)
//	{
//		int i = 0;
//		char arr[32];
//		int b = a;
//		while ((b / 2) != 0)
//		{
//			arr[i] = b % 2;
//			b = b / 2;
//			i++;
//		}
//		arr[i] = b % 2;
//		for (int j = 4 - i; j > 0; j--)
//		{
//			printf("0");
//		}
//		for (int j = i; j >= 0; j--)
//		{
//			printf("%d", arr[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//倒置字符数组---格式很坑人
//#include<stdio.h>
//void swap(char* arr, int left, int right, int len)
//{
//	if (left < right)
//	{	
//		char temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		puts(arr);
//		swap(arr, left + 1, right - 1, len);
//	}
//}
//
//char arr[10000];
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	char ch = getchar();
//	gets(arr);
//	swap(arr, 0, n - 1, n);
//	printf("\n");
//	printf("%s", arr);
//
//	return 0;
//}
// c++_ch02_02
//#include<stdio.h>
//int main()
//{
//	int num1, num2 = 0;
//	scanf("%d %d ", &num1, &num2);
//	char ch;
//
//	scanf("%c", &ch);
//	int m = ch;
//	switch (m)
//	{
//	case 43://+
//		printf("%d", num1 + num2);
//		break;
//	case 42://*
//		printf("%d", num1 * num2);
//		break;
//	case 47:// /
//		printf("%d",num1 / num2);
//		break;
//	case 45://-
//		printf("%d", num1 - num2);
//		break;
//	case 37://%
//		printf("%d", num1 % num2);
//		break;
//	}
//	return 0;
//}


//#include<stdio.h>
//void GetReal()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", n);
//}
//void GetString()
//{
//	char arr[1000];
//	scanf("%s", &arr);
//	printf("%s\n", arr);
//}
//int main()
//{
//
//	GetReal();
//	GetString();
//	printf("please input a number:\n");
//	printf("please input a string:\n");
//	return 0;
//}


//strcmp函数的模拟实现
//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//			str1++;
//			str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else if (*str1 < *str2)
//		return -1;
//	else
//	return 0;
//
//}
//char arr1[1000];
//char arr2[1000];
//int main()
//{
//	scanf("%s %s", &arr1, &arr2);
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//
//	return 0;
//}


//利息计算
//#include<stdio.h>
//int main()
//{
//	float des = 0.0;
//	float interest = 0.0;
//	float sum = 0.0;
//	float tax = 0.0;
//	scanf("%f %f", &des, &interest);
//	tax = (des * interest) * 0.2*0.01;
//	sum = des + des * interest*0.01 - tax;
//	printf("%.2f", sum);
//	return 0;
//}

//单词个数统计
#include<stdio.h>
char arr[1000];
int main()
{
	gets(arr);
	char* sep = " ";
	char* str = NULL;
	int count = 0;
	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
	{
		count++;
	}
	printf("%d", count);
	return 0;
}