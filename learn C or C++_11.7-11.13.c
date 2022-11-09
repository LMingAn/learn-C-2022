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
#include<stdio.h>
//int each1(int x, int y)//因为此函数中的x与y是独立于主函数中的a和b
//{
//	int z = 0;//更改x与y不能对主函数中的a和b产生影响
//	z = x;
//	x = y;
//	y = z;
//	return x, y;
//}
each2(int* x, int* y)//运用指针进行变量地址的更改
{
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
}
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d %d\n", a, b);
	//each1(a, b);//此方法不能用于交换两数
	each2(&a, &b);//将a与b的地址放入自定义函数中进行更改
	printf("%d %d", a, b);
	return 0;
}