#include<stdio.h>
#include<math.h>
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
// 可以简化为while (r = m % n)，下句r = m % n可以省略
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//给出一个不多于4位的正整数，要求：1.求出它是几位数？2.分别输出每一位数字。3.按逆序输出每位数字，例如原数是4321，应输出1234。
//int main()
//{
//	int a = 0, n = 0, b = 0, c = 0;
//	scanf_s("%d", &n);//1234
//	int arr[10000];
//	while (n != 0)
//	{
//		arr[b] = n % 10;//将数字字符串输入一个数组中 - 1 2 3 4，并运用下标测试出数字位数
//		n = n / 10;
//		b++;//因为此处表示位数，所以下方使用需要减1来表示下标
//	}
//	printf("%d\n", b);
//	for (c = b - 1; c >= 0; c--)//顺序输出
//	{
//		printf("%d", arr[c]);
//	}
//	printf("\n");
//	for (c = 0; c < b; c++)//逆序输出
//	{
//		printf("%d", arr[c]);
//	}
//	printf("\n");
//	return 0;
//}


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


//打印1000-2000年的闰年
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是否为闰年：1、能被4整除且不能被100整除。2、能被400整除
//		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		{
//			printf("%d ", y);
//			x++;
//		}
//		/*if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//			x++;
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			x++;
//		}*/
//	}
//	printf("\n%d", x);
//	return 0;
//}


//打印100-200之间的素数
//int main()
//{
//	int a = 0, c = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		//判断a是否为素数。方法：
//		//1.试除法：产生2->a-1的数字
//		int b = 0;
//		for (b = 2; b < a; b++)//循环相除，直到此数只能被自己整除为止并输出
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (a == b)
//		{
//			c++;
//			printf("%d ", a);
//		}
//	}
//	printf("\n%d ", c);
//	return 0;
//}

//优化方法:
//int main()
//{
//	int a, b, c = 0;
//	for (a = 101; a <= 200; a += 2)
//	{
//		for (b = 2; b <= sqrt(a); b++)//sqrt是一个开平方的数学库函数
//		{
//			if (a % b == 0)
//				break;
//		}
//		if (b > sqrt(a))
//		{
//			c++;
//			printf("%d ", a);
//		}
//	}
//	printf("\n%d", c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	int a[100], t, i, j;
//	for (i = 0; i < n; i++)
//		scanf_s("%d", &a[i]);
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[i] > a[j])
//			{
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//		if (a[i] % m != 0)
//		{
//			if (a[i] >= 65 && a[i] <= 90)
//				printf("%c ", a[i]);
//			else
//			printf("%d ", a[i]);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[100];
//	int b, n, s;
//	scanf_s("%d %d", &n, &b);
//	for (int s = 0; s < n; s++)
//	{
//		scanf_s("%d", &a[s]);
//	}
//	for (int j = 0; j < n - 1; j++)
//	{
//		for (int h = 0; h < n - 1 - j; h++)
//		{
//			if (a[h] > a[h + 1])
//			{
//				int t = a[h];
//				a[h] = a[h + 1];
//				a[h + 1] = t;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % b != 0)
//		{
//			if (a[i] >= 'A' && a[i] <= 'Z')
//				printf("%c ", a[i]);
//			else
//				printf("%d ", a[i]);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n, m, t, i, j;
//	scanf_s("%d %d", &n, &m);
//	int arr[100];
//	for (i = 0; i < n; i++)
//		scanf_s("%d", &arr[i]);
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				t = arr[i];
//				arr[i] = arr[j];
//				arr[j] = t;
//			}
//		}
//		if (arr[i] % m != 0)
//		{
//			if (arr[i] >= 65 && arr[i] <= 90)
//				printf("%c ", arr[i]);
//			else
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}


//计算9的个数
//int main()
//{
//	int a, b = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//			b++;
//		if (a / 10 == 9)
//			b++;
//	}
//	printf("%d", b);
//	return 0;
//}


//分数求和：1/1 + 1/2 + 1/3 + 1/4 + 1/5 ... + 1/99 + 1/100
//int main()
//{
//	int a;
//	double b = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		b = b + 1.0 / a;
//	}
//	printf("%lf", b);
//	return 0;
//}

//变式：1/1 - 1/2 + 1/3 - 1/4 + 1/5 ... + 1/99 - 1/100
//int main()
//{
//	int a;
//	double b = 0;
//	for (a = 1; a <= 100; a += 2)
//	{
//		b = b + 1.0 / a;
//	}
//	for (a = 2; a <= 100; a += 2)
//	{
//		b = b - 1.0 / a;
//	}
//	printf("%lf", b);
//	return 0;
//}


//求十个数中的最大值
int main()
{
	//定义数组并放入数字
	int a[10];
	int b, c, d, e;//定义数组中的个数，输入下标，输出下标，最大值
	e = 0;
	scanf_s("%d", &b);
	for (c = 0; c < b; c++)
		scanf_s("%d", &a[c]);
	for (d = 0; d <= b; d++)
	{
		if (a[d] > e)
			e = a[d];
	}
	printf("max = %d\n", e);
	return 0;
}