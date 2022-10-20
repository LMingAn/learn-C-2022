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
int main()
{
	int r;
	int m = 24;
	int n = 18;
	while (m % n)//辗转相除法
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}