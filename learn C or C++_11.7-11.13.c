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

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[20] = { 0 };
	//shutdown -s -t 60
	//system()- 执行系统命令的程序
	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意，你的电脑将在1分钟后关机，如果输入：我是猪，就取消关机\n请输入：");
		scanf_s("%s", a);
		if (strcmp(a, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
