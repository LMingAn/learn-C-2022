#define _CRT_SECURE_NO_DEPRECATE
//二、1.
//#include<stdio.h>
//#define N 5
//int main()
//{
//	int a[N] = { 9, 6, 5, 4, 1 }, i, temp;
//	printf("\n original array:\n");
//	for (i = 0; i < N; i++)
//		printf("%4d", a[i]);
//	for (i = 0; i < N / 2; i++)
//	{
//		temp = a[i];
//		a[i] = a[N - i - 1];
//		a[N - i - 1] = temp;
//	}
//	printf("\n sorted array:\n");
//	for (i = 0; i < N; i++)
//		printf("%4d", a[i]);
//	return 0;
//}


//二、2
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int a[10][10];
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//	for (i = 2; i < 10; i++)
//	{
//		for (j = 1; j < i; j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf("%5d", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//二、3
//#include<stdio.h>
//int main()
//{
//	int i, k, a[10], p[3];
//	k = 5;
//	for (i = 0; i < 10; i++)
//		a[i] = i;
//	for (i = 0; i < 3; i++)
//		p[i] = a[i * (i + 1)];
//	for (i = 0; i < 3; i++)
//		k += p[i] * 2;
//	printf("%d\n", k);
//	return 0;
//}


//二、4
//#include<stdio.h>
//int main()
//{
//	int n[3][3], i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			n[i][j] = i + j;
//	for (i = 0; i < 2; i++)
//		for (j = 0; j < 2; j++)
//			n[i + 1][j + 1] += n[i][j];
//	printf("%d\n", n[i][j]);
//	return 0;
//}


//二、5
//#include<stdio.h>
//int main()
//{
//	int a[4][5] = { 1, 2, 4, -4, 5, -9, 3, 6, -3, 2, 7, 8, 4 };
//	int i, j, n;
//	n = 9;
//	i = n / 5;
//	j = n - i * 5 - 1;
//	printf("a[%d][%d]=%d\n", i, j, a[i][j]);
//	return 0;
//}


//二、6
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[100] = "How do you do";
//	strcpy(str + strlen(str) / 2, "es she");
//	printf("%s\n", str);
//	return 0;
//}


//三、1
//#include<stdio.h>
//int main()
//{
//	char s[80] = { 0 }, d[80] = { 0 };
//	int i, j;
//	gets_s(s);
//	for (i = j = 0; s[i] != '\0'; i++)
//		if (s[i] >= '0' && s[i] <= '9')//此空用于判断字符串中的数字字符并处理
//		{
//			d[j] = s[i];
//			j++;
//		}
//	d[j] = '\0';
//	puts(d);
//	return 0;
//}


//三、2
//#include<stdio.h>
//int main()
//{
//	int a[3][3], sum, i, j;
//	sum = 1;//计算sum的乘积，不能初始化为0，要为1
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf("%d", &a[i][j]);
//	for (i = 0; i < 3; i++)
//		sum *= a[i][i];//处理sum
//	printf("Sum=%d\n", sum);
//	return 0;
//}


//三、3
//#include<stdio.h>
//int main()
//{
//	float a[10], x = 0;//此空用于定义数组和交换用中间值
//	int i, j;
//	printf("Input 10 numbers please\n");
//	for (i = 0; i < 10; i++)//共输入十个数，故小于10
//		scanf("%f", &a[i]);
//	printf("\n");
//	for (i = 2; i <= 10; i++)
//		for (j = 0; j < 9; j++)//只需要判断除第一个数外的剩下9个数，即小于9
//			if (a[j] > a[j + 1])//判断第一个数是否大于第二个数，若大于，则交换数值进行从小到大的排序
//			{
//				x = a[j];
//				a[j] = a[j + 1];//进行两数交换
//				a[j + 1] = x;
//			}
//	printf("The sorted 10 numbers:\n");
//	for (i = 0; i < 10; i++)//共输出十个数，同上
//	{
//		if (i == 5)//一行输出5个数，用于空行
//			printf("\n");
//		printf("%f\t", a[i]);
//	}
//	printf("\n");
//	return 0;
//}


//三、4
//#include<stdio.h>
//int main()
//{
//	char s[64] = "Beijing Ligong daxue";
//	int i, j;
//	for (i = j = 0; s[i] != '\0'; i++)
//		if (s[i] != ' ')
//			s[j++] = s[i];//此空用于处理不为空格的字符
//		else
//			;//此空用于处理为空格的字符(可以不做处理)
//	s[j] = '\0';
//	printf("%s", s);
//	return 0;
//}


//三、5
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char x[] = "programming";
//	char y[] = "Fortran";
//	while (x[i] != '\0' && y[i] != '\0')
//		if (x[i] == y[i])
//			printf("%c", x[i++]);//此空用于判断成立后输出字符并做下标处理，否则会死循环
//		else
//			i++;
//	return 0;
//}


//四、1
//#include<stdio.h>
//int main()
//{
//	int a[10], max, min, b, c, d;//b为max值的下标，c为min值的下标，d为动态下标
//	for (d = 0; d < 10; d++)
//		scanf("%d", &a[d]);
//	max = a[0], min = a[0];
//	//用冒泡排序的原理求其最大值最小值和对应的下标
//	for (d = 0; d < 10; d++)//寻找最大值及其下标
//	{
//		if (max < a[d])
//		{
//			max = a[d];
//			b = d;
//		}
//		else if (d == 9 && max == a[0])//如果第一个数就是最大值，那么下标为0
//			b = 0;
//	}
//	for (d = 0; d < 10; d++)//寻找最小值及其下标
//	{
//		if (min > a[d])
//		{
//			min = a[d];
//			c = d;
//		}
//		else if (d == 9 && min == a[0])//如果第一个数就是最小值，那么下标为0
//			c = 0;
//	}
//	printf("MAX=%d, 下标是%d\nMIN=%d, 下标是%d\n", max, b, min, c);
//	return 0;
//}


//四、2
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a, b, m;//a是数组s1的下标，b是数组s2的下标
//	char s1[100], s2[100];//将字符串s1从第m个字符开始的所有字符送入字符数组s2中
//	printf("请输入字符串s1：\n");
//	gets(s1);//gets直接输入字符串
//	printf("请输入m的值：\n");
//	scanf("%d", &m);
//	a = m - 1;//开始下标为第m个字符的前一个数字
//	b = 0;
//	while (s1[a] != '\0' && a < 100)//转移字符
//	{
//		s2[b] = s1[a];
//		a++, b++;
//	}
//	s2[b] = '\0';
//	puts(s2);//puts直接输出字符串
//	return 0;
//}


//四、3
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b, c, sum;//a为待分析数，b为因子， c为， sum为因子之和
//	for (a = 2; a <= 1000; a++)//待分析数循环，因为1不是完数，所以从2开始
//	{
//		sum = 0;//每次循环sum都要归零
//		for (b = 1; b < a; b++)//因子循环
//		{
//			if (a % b == 0)//判断因子
//			{
//				sum += b;
//			}
//		}
//		if (sum == a)
//			printf("%d ", sum);//输出完数
//	}
//	return 0;
//}


//四、4
//#include<stdio.h>
//int main()
//{
//	int a[3][3], x, y, sum = 0;//x和y是数组下标，求和要初始化值为0，求积要初始化值为1
//	for (x = 0; x < 3; x++)
//	{
//		for (y = 0; y < 3; y++)
//		{
//			scanf("%d", &a[x][y]);
//		}
//	}
//	for (x = 0; x < 3; x++)//对角线元素相加
//	{
//		sum += a[x][x] + a[x][2 - x];
//	}
//	printf("%d", sum);
//	return 0;
//}


//四、5
//#include<stdio.h>
//int main()
//{
//	int a[11] = { 1, 2, 3, 4, 5, 6, 7, 9, 10, 11 }, b, c;//b为输入的数，c为循环次数
//	scanf("%d", &b);
//	for (c = 0; c < 11; c++)//因为插入一个数后a[]中有11个元素，所以要小于11
//	{
//		int d;//d为插入排序交换两数的中间数值
//		if (b < a[c])//开始插入排序，进行两数交换（冒泡排序原理）
//		{
//			d = b;
//			b = a[c];
//			a[c] = d;
//		}
//		else if (b > a[9])//当输入数为最大值时，放在数组最后
//		{
//			a[10] = b;
//		}
//	}
//	for (c = 0; c < 11; c++)
//		printf("%d ", a[c]);
//	return 0;
//}


//四、6
#include<stdio.h>
int main()
{

}