//分支与循环 - 1


//if语句
#include<stdio.h>
//int main()
//{//一个{}代表一个代码块
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}

//代码1----这段代码的意思是如果if后面的条件(condition)不满足则返回y，如果满足则返回x
/*if (condition)
{
return x;
}
return y;*/

//代码2----同上，意思相同，表达不能
/*
if (condition)
{
return x;
}
else
{
return y;
}*/

/*int main()
{
	int num = 4;
	if (5 == num)//注意：此处如果条件写成5=num，会编出一个BUG程序出了，虽然程序能跑，但是程序有BUG，所以以后此处如果需要编写if判断相等的条件，就先把常量写在前面，这是一种好的代码风格（仅能适用于判断相等）
	{
		printf("呵呵\n");
	}
	return 0;
}*/

//判断一个数是否为奇数
#include<stdio.h>
/*int main()
{
	int a;
	scanf_s("%d", &a);
	if (a % 2 == 1)
		printf("奇数");
	else
		printf("偶数");
	return 0;
}*/

//输出1~100之间的奇数
//写法一：
/*int main()
{
	int a = 1;
	while (a <= 100)
	{
		if (a % 2 == 1)
			printf("%d ", a);
		a++;
	}
	return 0;
}*/
//写法二：
/*int main()
{
	int a = 1;
	while (a <= 100)
	{

		printf("%d ", a);
		a = a + 2;
	}
	return 0;
}*/


//switch语句
#include<stdio.h>
#include <iostream>
//分支与循环1
//switch-case语句
/*int main()
{
	/*int day = 0;
	scanf_s("%d", &day);
	switch (day)//switch后面的表达式必须为整型表达式，即switch(整型表达式)，case的判断语句也必须是整型(3+6也可以，只要结果为整型)
	{
	case 1://case表示情况
		printf("星期一\n");//若不加break，会导致程序直接打印出全部case
		break;//break，使switch语句直接跳转到情况符合的语句，运行当前语句后会自行退出
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天");
		break;
	}
	return 0;*///即，switch判断括号内结果并输入到相应的case语句中，并从break输出
	//应用：
	 /*int day = 0;
	scanf_s("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
	}
	return 0;*///switch-case语句，走到break就会结束
	//应用：
	/*int day = 0;
	scanf_s("%d", &day);
	switch (day)
	{
	case 1://也可以加if语句
		if (day == 1)
			printf("一周的开始\n");
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
		//若你输入了一个超出范围的值
	default:
		printf("输入了错误的数值");
	   }
	return 0;*///用default用于提示输入错误是一种好的代码风格

	//if - else if语句
	/*if (day == 1)
		printf("星期一\n");
	else if (2 == day)
		printf("星期二\n");
	else if (3 == day)
		printf("星期三\n");
	else if (4 == day)
		printf("星期四\n");
	else if (5 == day)
		printf("星期五\n");
	else if (6 == day)
		printf("星期六\n");
	else if (7 == day)
		printf("星期天");
	return 0;*/
	//}

	/*int main()
	{
		int n = 1;
		int m = 2;
		switch (n)
		{
		case 1:m++;//m = 3
		case 2:n++;//n = 2
		case 3:
			switch (n)
			{
			case 1:n++;
			case 2:m++, n++;
				break;
			}
		case 4:m++;
			break;
		default:
			break;
		}
		printf("m = %d, n = %d\n", m, n);
		return 0;
	}*/


	//循环语句
	//while循环
	/*int main()
	{
		while (1)//此处因为没有编写whlie循环的终止条件，此循环为死循环
			printf("呵呵");
		return 0;
	}*/

	/*int main()//带有break的while循环
	{
		int a = 1;
		while (a <= 10)
		{
			if (a == 5)
				break;
			printf("%d ", a);
			a++;
		}
		return 0;
	}*/
	/*int main()//带有continue的while循环
	 {
		int a = 1;
		while (a <= 10)
		{
			if (a == 5)
				continue;//这里程序读到continue会返回while，但因条件满足a=5，所以陷入死循环，意为跳过后面的代码\终止本次循环
			printf("%d ", a);
			a++;
		}
		return 0;
	}*/
	/*{
		int a = 1;
		while (a <= 10)
		{
			a++;
			if (a == 5)
				continue;//这里程序读到continue会返回while，但因条件满足a=5，所以陷入死循环，意为跳过后面的代码
			printf("%d ", a);
		}
		return 0;
	}*/
	/*int main()//带有getchar的while循环
	{
		int a = 0;
		//当getchar遇到Ctrl+（z）类似的字符时，getchar会获取EOF，即结束程序输出
		while ((a = getchar()) != EOF)//EOF为文件结束标志 - end of file -> -1
		{
			putchar(a);
		}*/
		/*int a = getchar();
	putchar(a);
	printf("%c", a);
	return 0;//此处会打印两次输入的字符，即putchar打印一次，printf打印一次
	}*/



	//分支与循环2
	/*#include<stdio.h>
	int main()
	{
		int ch = 0;//定义变量ch
		//EOF是文件结束标志
		//while ((ch = getchar()) != EOF)//getchar用于接受一个字符，然后赋值给ch，同时Ctrl + Z会触发EOF，结束文件
		//{
		//	putchar(ch);//输出变量ch的字符
		//}
		int get = 0;
		char password[20] = { 0 };
		printf("请输入密码:");
		scanf_s("%d", password);//输入密码，并存放在password数组中
		//此时缓冲区还剩一个'\n'
		//读取一下'\n'
		getchar();//此处gerchar用意为读走缓冲区中的'\n'
		printf("请确认(Y/N):");//此处有问题，此行输出后程序结束，没有进行下面的程序
		//上面的程序表示为用两次gerchar读取缓冲区中的\n
		get = getchar();//Y/N
		if (get == 'Y')
		{
			printf("确认成功\n");
		}
		else
		{
			printf("确认失败");
		}
		return 0;
		//printf("%d\n", '\n');//此处打印是10
		//return 0;
	}*/
	//如果上面的password输入123456 ABCD，同样会再次出现问题，因为第一次password读取123456还留下了(空格)ABCD，第二次getchar读取了空格，便不会再读ABCD，if语句读取了ABCD的A，为确认失败
	/*#include<stdio.h>
	int main()
	{
		int ch = 0;
		int get = 0;
		char password[20] = { 0 };
		printf("请输入密码:");
		scanf_s("%d", password);//此处输入123456 ABCD，若需要读取完所有数值，需要password读取一次，getchar读取两次或多次直到缓冲区没有字符为止
		//所以此处需要加入一个while循环以完全读完缓冲区
		while ((ch = getchar()) != '\n')//\n意为缓冲区中结束的位置
		{
			//由于只需要getchar重复读缓冲区直到消耗完，不需要执行任何额外程序
			;//;代表一个空语句
		}
		printf("请确认(Y/N):");
		get = getchar();
		if (get == 'Y')
		{
			printf("确认成功\n");
		}
		else
		{
			printf("确认失败");
		}
		return 0;
	}*/

	/*#include<stdio.h>//此段代码与后期学习的大小写字母转换有关
	int main()
	{
		int ch = 0;
		while ((ch = getchar()) != EOF)
		{
			if (ch < '0' || ch > '5')
				continue;
			putchar(ch);
		}
		return 0;
	}*/
	//分支与循环2
	//for循环--最常用的循环
#include<stdio.h>
/*int main()
{
	//因为while循环的变量其初始化判断与调整在写入大量代码后会显得十分分散，不便于更改，容易出错
	int i = 0;//初始化
	while (i < 10)//判断
	{
		//......
		i++;//调整
	}
	return 0;
}*/
/*int main()//for语法：for(表达式1;表达式2;表达式3)-表达式1为初始化部分，2为条件判断部分，3为调整部分
{
	int a, b;//用for循环表示九九乘法表
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d + %d = %d ", b, a, a * b);
		}
		printf("\n");
	}
	return 0;
}*/
/*int main()//用for循环打印0到10的数字
{
	int a;
	for (a = 0; a <= 10; a++)
	{
		//if (a == 5)
			//continue;//当a为5时，返回循环
			//break;//当a为5时，跳出循环
		printf("%d ", a);
	}
	return 0;
}*/
//for循环打印数组
/*int main()
{
	int sz[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int a = 0;
	for (a = 0; a < 10; a++)
	{
		printf("%d ", sz[a]);
	}
	return 0;
}*/
//经典死循环
/*int main()
{
	for (; ;)//for循环的初始化、调整、判断都可以省略。但for循环的判断部分若被省略，那判断条件就是恒为正
	{
		printf("hehe\n");
	}
	return 0;
}*/
//随意省略初始化的例子
/*int main()
{
	int a = 0, b = 0;
	for (; a < 10; a++)//当b为10程序返回此处的for语句时，a经调整为2
	{
		for (; b < 10; b++)//当a经调整为2再次来到此for语句时，由于没有初始化b变量，b仍然为10，又b < 10，不满足条件，直接跳出循环
			printf("hehe\n");//当此处打印了十个hehe，即b为10时，返回第一个for语句
	}
	return 0;
}*/
/*int main()
{
	int i = 0, k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//由于此处判断语句中=为赋值，k为0是假，不循环
		k++;
	return 0;
}*/

//do...while循环
/*int main()
{
	int a = 1;
	do
	{
		if (a == 5)
			continue;
		printf("%d ", a);
		a++;
	} while (a <= 10);
	return 0;
}*/



//练习
//1.计算n的阶乘
/*int main()
{
	int n, sum = 1, a;
	scanf_s("%d", &n);
	for (a = 1; a <= n; a++)
	{
		sum = sum * a;
	}
	printf("%d", sum);
	return 0;
}*/


//2.计算1! + 2! + 3! + ... + 10! --> 1 + 1*2 + 1*2*3 + ... + 1*2*3*4*5*6*7*8*9*10
/*int main()
{
	int a, n, sum = 0, he = 1;
	for (n = 1; n <= 10; n++)//限制数量
	{
		he = 1;//若没有he = 1将he进行初始化，会导致下面he赋值会继承到下一个循环中去
		for (a = 1; a <= n; a++)
		{
			he = he * a;
		}
		//n的阶乘
		sum = he + sum;
	}
	printf("sum = %d\n", sum);
	return 0;
}*/
/*int main()
{
	int a, n, sum = 0, he = 1;
	for (n = 1; n <= 10; n++)
	{
		he = he * n;
		//n的阶乘
		sum = he + sum;
	}
	printf("sum = %d\n", sum);
	return 0;
}*/


//3.在一个有序数组中查找具体的某个数字n。编写int binsearch(int x, int v[], int n); 功能：在v[0]<=v[1]<=[2]<=...<=v[n-1]的数组中查找x.
//顺序查找算法
/*int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a = 7;
	//写一个代码，在arr数组（有序的）中找到7
	int k;//定义数组的下标变量k
	int h = sizeof(arr) / sizeof(arr[0]);
	for (k = 0; k < h; k++)//此为产生下标，h为arr数组的字符长度，即元素个数
	{
		if (a == arr[k])
		{
			printf("找到了，下标是：%d\n", k);
			break;//跳出for循环
		}
	}
	if (k == h)
		printf("已查找完毕，未发现数字");
	return 0;
}*/

//折半查找/二分查找算法
/*int main()
{
	int arr[] = { 1, 2, 3, 4, 17, 6, 5, 8, 9, 0 };
	int a = 7;//定义目标元素
	int so = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//表示左下标
	int right = so - 1;//右下标

	while (left <= right)//若数组中无目标元素，会导致left和right交错
	{
		int mid = (left + right) / 2;
		if (arr[mid] > a)
		{
			right = mid - 1;
		}
		else if (arr[mid] < a)
		{
			left = mid + 1;
		}
		else
		{
			printf("已找到，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	/*int mid = (left + right) / 2;//定义中间元素
	if (arr[mid] > a)
	{
		right = mid - 1;
	}
	else if (arr[mid] < a)
	{
		left = mid + 1;
	}
	else
	{
		printf("找到了，下标是:%d\n", mid);
	}*/
	//return 0;
//}


//4.编写代码，演示多个字符从两端移动，向中间汇聚
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	//示例
	//welcome to CD!!!!
	//#################
	//w###############!
	//we#############!!
	//......
	//welcome to CD!!!!
	//char arr[] = "welcome to CD!!!!"'
	//[a b c \n] -- \n 是定义一个数组中固定自带的，在很多情况下需要考虑进去
	// 0 1 2 3
	//4-2
	char arr1[] = "welcome to CD!!!!";
	char arr2[] = "#################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//err - 计算数组长度/元素个数
	//err - 方法二:
	//int right = strlen(arr1) - 1;----需引用string头文件
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//若需要休息一秒
		Sleep(1000);//默认单位为毫秒--需引用头文件windows
		//若需要清屏
		system("cls");///执行系统命令的一个函数-cls-清空屏幕--需引用头文件stdlib
		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}*/


//5.编写代码实现，模拟用户登录情景，并且只能登陆三次。（只允许输入三次密码，如果密码正确则提示登陆成功，如果三次均输入错误，则退出程序。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a = 0;
//	char password[20] = { 0 };
//	for (a = 0; a < 3; a++)
//	{
//		printf("请输入密码:");
//		scanf_s("%s", password, sizeof(password));
//		if (strcmp(password, "123456") == 0)//== 不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp---在string头文件中
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (a == 3)
//		printf("三次密码均输入错误，退出程序");
//	return 0;
//}
#include<stdio.h>
/*int main()
{
	int x = 10, y = 20;
	printf("%d", (y, x));
	return 0;
}*/


/*int main()
{
	int x = 35, a;
	char z = 'A';
	a = (x & 15) && (z < 'a');
	printf("%d", a);
	return 0;
}*/


/*int main()
{
	int a = 5, b = 10;
	printf("%d", (a = a + b++, a + b, b + 1));
	return 0;
}*/


/*int main()
{
	int a;
	a = (365 % 100 && (-1 && 1)) * 10;
	printf("%d", a);
}*/


/*int main()
{
	int a = 5, b = 4, c = 6, d;
	printf("%d\n", d = a > b ? (a > c ? a : c):(b));
	return 0;
}*/


/*int main()
{
	int a = -1, b = 4, k;
	k = (++a < 0) && !(b-- <= 0);
	printf("%d%d%d\n", k, a, b);
	return 0;
}*/


/*int main()
{
	int i = 1, j = 1, k = 2;
	printf("%d,%d,%d", ++i, j++, ++k);
	return 0;
}*/


/*int main()
{
	int a;
	double x, total;
	scanf_s("%lf", &x);
	switch (a = x <= 2000 ? 0 : x <= 5000 ? 8 : x <= 10000 ? 10 : 12)
	{
	case 0:
	case 8:
	case 10:
	case 12:
		total = 500 + x * a / 100.0;
		break;
	}
	printf("%.2f", total);
	return 0;
}*/


/*#include "stdio.h"
#include <stdlib.h>
int main(int argc, char* argv[]) {
	double tw;
	int t, x;
	scanf_s("%lf", &x);
	if (x % 1000 == 0)
	{
		t = x / 1000;
	}
	else
	{
		t = x / 1000 + 1;
	}
	switch (t = x <= 2000 ? 0 : x <= 5000 ? 8 : x <= 10000 ? 10 : 12)
	{
	case 0:
	case 2:
	case 5:
	case 10:
		tw = 500 + x * t / 100.0;
		break;
	}
	printf("The total wages = %.2f\n", tw);
	return 0;
}*/


/*int main()
{
	printf("%s \n", "Hello北京");
	return 0;
}*/


/*int main()
{
	int x = -2345;
	float y = 12.3;
	printf("%6d, %06.2f", x, y);
	return 0;
}*/


/*int main()
{
	printf("\n%s%%\n", "\tab%\%\"\'\060\084\\");
}*/


/*int main()
{
	int a = 2;
	float b = 3.5;
	printf("%f\n", a * b);
	printf("%d", 'a' % 3);
	return 0;
}*/


/*int main()
{
	int a, b;
	char x, y;
	x = getchar();
	y = getchar();
	a = x - '0';
	b = a * 10 + (y - '0');
	printf("%d\n", b);
	return 0;
}*/


/*int main()
{
	int a = 353;
	char b;
	b = a;
	printf("%c\n", b);
	return 0;
}*/


/*int main()
{
	printf("%f%%", 1.0 / 3);
	return 0;
}*/


/*int main()
{
	printf("%d\n", sizeof'x');
	printf("%d\n", sizeof"x");
	printf("%d", sizeof"\101");
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int i, j, a[2][3] = { 1,2,3,4,5,6 }, b[3][2];
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%-2d", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");

	}
	for (j = 0; j <= 2; j++)
	{
		for (i = 0; i <= 1; i++)
		{
			printf("%-2d", b[j][1-i]);
		}
		printf("\n");
	}
	return 0;
}*/


//int main()
//{
//	printf("%-8、4s, %5、3f, %4d", "MAYAPP", 35.1753, 12346);
//	return 0;
//}


/*int main()
{
	printf("%-8.4s, %5.3f, %4d", "MAYAPP", 35.1753, 12346);
	return 0;
}*/


//#include<stdio.h>
//int main()
//{
//	int n, i, j, a[15][15];
//	printf("输入杨辉三角的行数:");
//	scanf_s("%d", &n);
//	for (i = 0; i < n; i++)//i为行数
//	{
//		for (j = 0; j <= i; j++)//j为单行位数
//		{
//			if (j == 0 || i == j)//每行第一位和最后一位为1
//			{
//				a[i][j] = 1;
//			}
//			else//每行除第一位和最后一位为1外，其余数依次相加和相减
//			{
//				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];//中间位数等于等行上一个数加上等行上一个数的前一个数
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-5d", a[i][j]);//依次打印
//		}
//		printf("\n");
//	}
//	return 0;
//}


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
//int main()
//{
//	//定义数组并放入数字
//	int a[10];
//	int b, c, d, e;//定义数组中的个数，输入下标，输出下标，最大值
//	e = 0;
//	scanf_s("%d", &b);
//	for (c = 0; c < b; c++)
//		scanf_s("%d", &a[c]);
//	for (d = 0; d <= b; d++)
//	{
//		if (a[d] > e)
//			e = a[d];
//	}
//	printf("max = %d\n", e);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int a[10], b, c, d, e = 0;
//    for (b = 0; b < 10; b++)
//        scanf_s("%d ", &a[b]);
//    scanf_s("%d", &c);
//    for (d = 0; d < 10; d++)
//    {
//        if (a[d] <= c + 30)
//        {
//            e++;
//            continue;
//        }
//    }
//    printf("%d", e);
//    return 0;
//}


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