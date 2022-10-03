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
int main()
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
}