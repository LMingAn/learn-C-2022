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
int main()//带有getchar的while循环
{
	int a = 0;
	//当getchar遇到Ctrl+（z）类似的字符时，getchar会获取EOF，即结束程序输出
	while ((a = getchar()) != EOF)//EOF为文件结束标志 - end of file -> -1
	{
		putchar(a);
	}
	/*int a = getchar();
putchar(a);
printf("%c", a);
return 0;*///此处会打印两次输入的字符，即putchar打印一次，printf打印一次
}
