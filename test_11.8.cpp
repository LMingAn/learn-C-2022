//猜数字
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void menu()
{
	printf("************************************\n");
	printf("*****  1.开始游戏  0.退出游戏  *****\n");
	printf("************************************\n");
}
void game()
{
	int b, c;
	b = rand();
	printf("请猜数字：");
	while (1)
	{
		scanf_s("%d", &c);
		if (c > b)
			printf("大了\n");
		else if (c < b)
			printf("小了\n");
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int a;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &a);
		switch (a)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重试\n");
			break;
		}
	} while (a);
	return 0;
}