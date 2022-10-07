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
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 0;
	char password[20] = { 0 };
	for (a = 0; a < 3; a++)
	{
		printf("请输入密码:");
		scanf_s("%s", password, sizeof(password));
		if (strcmp(password, "123456") == 0)//== 不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp---在string头文件中
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (a == 3)
		printf("三次密码均输入错误，退出程序");
	return 0;
}