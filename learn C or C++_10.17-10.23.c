#include<stdio.h>
//int main()
//{
//	int b;
//	int a = 1;
//	switch (a)
//	{
//	case 1: b = 30;//因为没有break，所有case都会执行，当程序读到return时，b值为0，所以输出0
//	case 2: b = 20;
//	case 3: b = 10;
//	default: b = 0;
//	}
//	printf("%d", b);
//	return 0;
//}


//将三个数从大到小顺序输出
//int main()
//{
//	int a, b, c;
//	scanf_s(" %d %d %d", &a, &b, &c);//算法实现，a中放最大值，b次之，c中放最小值
//	if (a < b)
//	{
//		int kong = a;
//		a = b;
//		b = kong;
//	}
//	if (a < c)
//	{
//		int kong = a;
//		a = c;
//		c = kong;
//	}
//	if (b < c)
//	{
//		int kong = b;
//		b = c;
//		c = kong;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//打印三的倍数
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//打印九九乘法表
//int main()
//{
//	int a;
//	for (a = 0; a <= 9; a++)
//	{
//		for (int b = 0; b <= a; b++)
//		{
//			printf("%d * %d = %d ", a, b, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//给两个数，求最大公因数
//int main()
//{
//	int r;
//	int m = 24;
//	int n = 18;
//	while (m % n)//辗转相除法
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//给出一个不多于4位的正整数，要求：1.求出它是几位数？2.分别输出每一位数字。3.按逆序输出每位数字，例如原数是4321，应输出1234。
int main()
{
	int a = 0, n = 0, b = 0, c = 0;
	scanf_s("%d", &n);//1234
	int arr[10000];
	while (n != 0)
	{
		arr[b] = n % 10;//将数字字符串输入一个数组中 - 1 2 3 4，并运用下标测试出数字位数
		n = n / 10;
		b++;//因为此处表示位数，所以下方使用需要减1来表示下标
	}
	printf("%d\n", b);
	for (c = b - 1; c >= 0; c--)//顺序输出
	{
		printf("%d", arr[c]);
	}
	printf("\n");
	for (c = 0; c < b; c++)//逆序输出
	{
		printf("%d", arr[c]);
	}
	printf("\n");
	return 0;
}


//#include<stdio.h>
//int main()
//{
//	int b, m, i, j, n, jk;
//	int a[100];
//	scanf_s("%d", &n);
//	i = 0;
//	while (n)
//	{
//		a[i] = n % 10;//使用数组分别把每位数一一存入数组
//		n = n / 10;
//		i++;//表示数的位数
//	}
//	printf("%d\n", i);
//	for (jk = i - 1; jk >= 0; jk--)
//	{
//		printf("%d ", a[jk]);
//	}//for循环把用数组存起来的每个数都顺序输出
//	printf("\n");
//	for (jk = 0; jk < i; jk++)
//	{
//		printf("%d ", a[jk]);
//	}//for循环把用数组存起来的每个数都逆序输出
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x;
//	int one, two, five;
//	scanf_s("%d", &x);
//
//	for (one = 1; one < x * 10; one++)
//	{
//		for (two = 1; two < x * 10 / 2; two++)
//		{
//			for (five = 1; five < x * 10 / 5; five++)
//			{
//				if (one + two * 2 + five * 5 == x * 10)
//				{
//					printf("则有%d个1角加%d个2角加%d个5角得到%d元", one, two, five, x);
//					goto out;
//				}
//			}
//		}
//	}
//out:
//	return 0;
//}