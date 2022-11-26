//找到10个数字中的最大值
//#include<stdio.h>
//int main()
//{
//	int a[10], c;
//	for (c = 0; c < 10; c++)
//		scanf_s("%d", &a[c]);
//	int max = a[0], b;
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (b = 0; b < sz; b++)
//	{
//		if (max < a[b])
//		{
//			max = a[b];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//九九乘法表
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%-3d", a, b, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜数字游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("*****   1.play    0.exit   ****\n");
//	printf("*******************************\n");
//}
//
//void game()
//{
//	//1.生成一个随机数
//	int b, c;
//	//用时间戳设置随机数的随机起点
//	//time_t time(time_t *timer)
//	//time_t
//	//srand((unsigned int)time(NULL));(但是设置随机数不能频繁设置，只需要在主函数里设置一次就可以了，避免发生错误)
//	b = rand()%100 + 1;//生成随机数 - RAND_MAX 最大为0x7fff，即为32767(若想缩小随机数的生成范围，比如生成范围在1-100之间，只需要%100就行)
//	//2猜数字
//	while (1)
//	{
//		printf("猜数字：");
//		scanf_s("%d", &c);
//		if (c > b)
//			printf("猜大了\n");
//		else if (c < b)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int a;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf_s("%d", &a);
//		switch (a)
//		{
//		case 1:
//			game();//进行猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重试\n");
//			break;
//		}
//	} while (a);
//	return 0;
//}


//使用系统命令进行定时关机
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char a[20] = { 0 };
//	//shutdown -s -t 60
//	//system()- 执行系统命令的程序
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在1分钟后关机，如果输入：我是猪，就取消关机\n请输入：");
//	scanf_s("%s", a);
//	if (strcmp(a, "我是猪") == 0)//比较两个字符串-strcmp()如果相同，值为0
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char a[20] = { 0 };
//	//shutdown -s -t 60
//	//system()- 执行系统命令的程序
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑将在1分钟后关机，如果输入：我是猪，就取消关机\n请输入：");
//		scanf_s("%s", a);
//		if (strcmp(a, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}




//函数
//基本的定义函数写法
//#include<stdio.h>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}


//strcpy数组拷贝函数
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a1[] = "LXG";
//	char a2[20] = "################";
//	strcpy_s(a2, 4, a1);//这里使用strcpy会报错，提示不安全，如果使用strcpy_s需要指定拷贝长度，拷贝长度需要大于等于需要拷贝的数组长度（注：字符串数组包含\n）
//	printf("%s\n", a2);
//	return 0;
//}


//memset内存设置函数
//#include<stdio.h>
//int main()
//{
//	char a[] = "hello world";
//	memset(a, '*', 5);//即将设定的数组中的指定的前X位字符更换为指定的字符
//	printf("%s\n", a);
//	return 0;
//}


//自定义函数-格式
//ret_type fun_name(para1, * )
//{
//statement;//语句项
//}
//ret_type 返回类型
//fun_name 函数名
//para1    函数参数


//自定义函数-找出两个函数中的最大值
//#include<stdio.h>
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	int max = MAX(a, b);
//	printf("%d", max);
//	return 0;
//}


//自定义函数-交换两数
//#include<stdio.h>
////int each1(int x, int y)//因为此函数中的x与y是独立于主函数中的a和b（int x, int y是形参）
////{
////	int z = 0;//更改x与y不能对主函数中的a和b产生影响
////    //当实参传递给形参的时候，形参其实是实参的一份临时拷贝，对形参的修改不会改变实参
////	z = x;
////	x = y;
////	y = z;
////	return x, y;//使用return是无效的
////}
//each2(int* x, int* y)//运用指针进行变量地址的更改（int* x, int* y是形参）
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d %d\n", a, b);
//	//each1(a, b);//此方法不能用于交换两数（a, b是实参）-这里是传值调用，形参和实参占用不同内存块，相互不干扰
//	each2(&a, &b);//将a与b的地址放入自定义函数中进行更改（&a, &b是实参）-这里是传址调用，改变形参会改变实参
//	printf("%d %d", a, b);
//	return 0;
//}


//自定义函数-打印素数
//#include<stdio.h>
//#include<math.h>
//int numb(int x)
//{
//	for (int b = 2; b <= sqrt(x); b++)
//	{
//		if (x % b == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int a;
//	for (a = 100; a <= 200; a++)
//	{
//		if (numb(a) == 1)
//			printf("%d ", a);
//	}
//	return 0;
//}


//自定义函数-判断闰年
//#include<stdio.h>
//int year(int c)
//{
//	if (c % 4 == 0 && c % 100 != 0 || c % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	for (int a = 1000; a <= 2022; a++)
//	{
//		if (year(a) == 1)
//		printf("%d ", a);
//	}
//	return 0;
//}


//自定义函数-二分查找
//#include<stdio.h>
////         实质上a是一个指针
//int search(int a[], int c, int e)//二分查找，只适用于有序数组
//{
//	//使用折半查找法
//		//int e = sizeof(a) / sizeof(a[0]);//数组元素个数-这里是错误做法，需要在主函数中求出元素个数
//		int f = 0;//左下标
//		int g = e - 1;//右下标
//		while (f <= g)
//		{
//			int h = (f + g) / 2;
//			if (a[h] < c)
//				f = h + 1;//+1是因为中间值被比较了，所以+1排除掉中间值
//			else if (a[h] > c)
//				g = h - 1;//-1原因同上
//			else
//				return h;
//		}
//		return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	for (int b = 0; b < 10; b++)
//	{
//		scanf_s("%d", &a[b]);
//	}
//	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int e = sizeof(a) / sizeof(a[0]);//数组元素个数，正确做法
//	int c = 7;//需要查找的数
//	int d = search(a, c, e);//实质上这里数组传递到内函数的只是首元素的地址
//	if (d == 0)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是：%d\n", d);
//	return 0;
//}


//自定义函数-计算自定义函数的使用次数
//#include<stdio.h>
//int numb(int* b)
//{
//	*b += 1;
//}
//int main()
//{
//	int a = 0;
//	numb(&a);
//	printf("%d\n", a);
//	numb(&a);
//	printf("%d\n", a);
//	numb(&a);
//	printf("%d\n", a);
//	return 0;
//}


//自定义函数-链式访问
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a = 0;
//	a = strlen("abc");
//	printf("%d\n", a);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值是元素个数，由于要打印的值是一个常数，所以返回值是常数的元素个数
// //即第一次printf的值是43，返回值是两个字符，第二次printf打印的值是字符个数，即2，第三次printf打印的值即1，随后共打印4321
//	return 0;
//}


//自定义函数-函数的声明和定义
//#include<stdio.h>//如果你要使用你自己的函数，需要在.h文件里声明函数，在.c文件里定义函数
////函数的声明
//int add(a, b);
////主函数
//int main()
//{
//	int a, b, c;
//	scanf_s("%d %d", &a, &b);
//	c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////函数的定义-如果把自定义函数放在主函数后面，会导致主函数无法识别自定义函数而报错
//int add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}


//关于自定义头文件与函数
/*在新建的头文件（如add.h）中放入：
#ifndef __ADD_H__
#define __ADD_H__

int add(int x, int y)

#endif-->此写法是为了引用一次头文件便判断是否定义该函数，若定义，便引入此头文件，避免重复引入

在add.c文件中放入：
#define _CRT_SECURE_NO_WARNINGS 1

int add(int x, int y)
{
	return x + y;
}

在主函数的.c文件中引用：
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"

int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b)
	printf("%d\n", sum);
	return 0;
}*/



//函数递归
//最简单的递归
//#include<stdio.h>
//int main()
//{
//	printf("哈哈\n");
//	main();-->任何一次函数调用，都会向内存申请一块内存空间（主要在栈区上申请），直到栈空间被耗干并出现错误：栈溢出
//	return 0;//但是这种递归会发生Stack overflow(栈溢出)的错误<--递归经常发生的错误
//}


//内存简单划分为三个区域
/*
栈区：
局部变量
函数形参

堆区：
动态开辟的内存
malloc
calloc

静态区：
全局变量
static修饰的变量(静态变量)
*/


//输入一串数字，单独输出每一位
//#include<stdio.h>
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	//用递归解决
//	print(num);
//	return 0;
//}


//栈溢出的典型例子
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//扩展
/*
内存的栈区：
**********
分配一块空间用于main的栈帧空间
**********
再分配一块空间给test
**********
重复
直到栈溢出
*/

//求字符串长度--创建临时变量
//#include<stdio.h>
//#include<string.h>
//int len(char* str)
//{
//	int sum = 0;
//	while (*str != '\0')
//	{
//		sum++;
//		str++;
//	}
//	return sum;
//}
//int main()
//{
//	char a[] = "bit";
//	//[b][i][t][\0]
//	// 模拟实现一个strlen函数
//	//int len = strlen(a);
//	printf("%d\n", len(a));
//	return 0;
//}

//求字符串长度--不创建临时变量
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(1 + str);
//	else
//		return 0;
//}
//int main()
//{
//	char a[] = "lanxiaogui";
//	printf("%d", my_strlen(a));
//	return 0;
//}

//求n的阶乘--正解
//#include<stdio.h>
//int main()
//{
//	int a, b = 1, n;
//	scanf_s("%d", &n);
//	if (n != 0)
//	{
//		for (a = 1; a <= n; a++)
//		{
//			b *= a;
//		}
//		printf("%d", b);
//	}
//	else if (n == 0)
//		printf("%d", b);
//	return 0;
//}

//求n的阶乘--函数递归
//#include<stdio.h>
//int sum(int n)
//{
//	int Sum = 0;
//	if (n != 1 && n != 0)
//	{
//		Sum = n + sum(n - 1);
//	}
//	else if (n == 1 || n == 0)
//		Sum = 1;
//	return Sum;
//}
//int main()
//{
//	int a, n;
//	scanf_s("%d", &n);
//	a = sum(n);
//	printf("%d", a);
//	return 0;
//}

//斐波那契数列--求第n个斐波那契数
#include<stdio.h>//递推--高效率解法
//int main()
//{
//	long a, b, c = 1, d = 1, n;//a为fn，c为fn-1，d为fn-2
//	scanf_s("%d", &n);
//	if (n <= 2)
//		a = 1;
//	else
//		for (b = 3; b <= n; b++)
//		{
//			a = c + d;
//			d = c;
//			c = a;
//		}
//	printf("%d ", a);
//	return 0;
//}
//递归--重复大量的计算--效率过低
//int fib(int a)
//{
//	if (a <= 2)
//		return 1;
//	else
//		return fib(a - 1) + fib(a - 2);
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int fn = fib(n);
//	printf("%d\n", fn);
//	return 0;
//}

//--------------------------------------------------------------
//作业解析
/*
while语句：
条件判断句的执行次数总是比循环语句多一次
*/

//编写程序：数一下1到100的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//	int a, b, c = 0;
//	scanf_s("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		if (b % 10 == 9)//判断个位数上是否有9
//			c++;
//		if (b / 10 == 9)//判断十位数上是否有9
//			c++;
//	}
//	printf("%d", c);
//	return 0;
//}

//编写程序：计算1/1 - 1/2 + 1/3 - 1/4......+ 1/99 - 1/100的值
//解法一-->for循环单独相加再相减
//#include<stdio.h>
//int main()
//{
//	float a, b, c = 0, d = 0, sum;//c为奇数分母分数之和，d为偶数分母分数之和
//	scanf_s("%f", &a);
//	for (b = 1; b <= a; b += 2)//计算奇数分母分数之和
//	{
//		c += 1 / b;
//	}
//	for (b = 2; b <= a; b += 2)//计算偶数分母分数之和
//	{
//		d += 1 / b;
//	}
//	sum = c - d;
//	printf("%f", sum);
//	return 0;
//}
//解法二-->if判断相减或相加
//#include<stdio.h>
//int main()
//{
//	float a, c = 0;//a输入总值，b判断值，c为和
//	int b;
//	scanf_s("%f", &a);
//	for (b = 1; b <= a; b++)
//	{
//		if (b % 2 == 0)//若分数分母为偶数
//			c -= 1.0 / b;
//		else//分数分母为奇数
//			c += 1.0 / b;
//	}
//	printf("%f", c);
//	return 0;
//}
//解法三-->符号变换（最高效的解法）
//#include<stdio.h>
//int main()
//{
//	float sum = 0;
//	int a, b, c = 1;
//	scanf_s("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		sum += c * 1.0 / b;
//		c = -c;
//	}
//	printf("%f", sum);
//	return 0;
//}

//逆向打印字符串--不使用字符串操作函数
//正常函数解法
//#include<stdio.h>
//int a_strlen(char* a)
//{
//	int b = 0;//b用于计算字符串长度
//	while (*a != '\0')
//	{
//		b++;
//		a++;
//	}
//	return b;
//}
//int take_a(char* a)
//{
//	int left = 0, right = a_strlen(a) - 1;
//	while (left < right)
//	{
//		/*char take = a[right];
//		a[right] = a[left];
//		a[left] = take;*/
//		//另外一种写法
//		char take = *(a + left);
//		*(a + left) = *(a + right);
//		*(a + right) = take;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char a[] = "lanxiaogui";
//	take_a(a);//数组名a是数组a首元素的地址
//	printf("%s", a);
//	return 0;
//}
//递归实现--大事化小思路
//#include<stdio.h>
//int a_strlen(char* a)
//{
//	int b = 0;
//	while (*a != '\0')
//	{
//		b++;
//		a++;
//	}
//	return b;
//}
//int take_a(char* a)
//{
//	int len = a_strlen(a);
//	char take = *a;//1-->将首元素放入一个空变量中
//	*a = *(a + len - 1);//2-->将首元素与最后一个元素交换
//	*(a + len - 1) = '\0';//3-->将最后一个元素赋值\0
//	//需要判断条件，否则会一直重复递归
//	if (a_strlen(a + 1) >= 2)
//	{
//		take_a(a + 1);//4
//	}
//	*(a + len - 1) = take;//5
//}
//int main()
//{
//	char a[] = "lanxiaogui";
//	take_a(a);//数组名a是数组a首元素的地址
//	printf("%s", a);
//	return 0;
//}

//计算一个数的每位之和--限递归实现
//#include<stdio.h>
//int sum(int a)
//{
//	//int b = a % 10, c = 0;//b为当前a的个位数，c为总和
//	//if (a >= 1)
//	//	c = b + sum(a / 10);
//	//else
//	//	return c;
//	//简化：
//	if (a >= 1)
//		return a % 10 + sum(a / 10);
//	else
//		return 0;//此处可返回a，也可返回0，据题意而定
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d", &a);
//	b = sum(a);
//	printf("%d", b);
//	return 0;
//}

//计算n的k次方--限递归实现
#include<stdio.h>
double num(int n, int k)
{
	int sum;
	if (k > 0)
	{
		return n * num(n, k-1);
	}
	else if (k == 0)
		return 1;
	else
		return 1.0 / (num(n, -k));

}
int main()
{
	int n, k;
	scanf_s("%d %d", &n, &k);
	double a = num(n, k);
	printf("%lf", a);
	return 0;
}

//细节问题：
/*
1.递归层次太深，会出现栈溢出问题
*/