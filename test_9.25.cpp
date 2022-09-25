//练习循环语句
/*#include<stdio.h>
int main()
{
	int line = 0;
	printf("学编程");
	while (line < 10000)
	{
		printf("敲一行代码\n");
		line++;
	}
	if (line >= 10000)
	printf("好offer");
	return 0;
}*/

//练习自定义函数并运用
/*#include<stdio.h>
int add(int a, int b)
{
	int z = a + b;
	return z;
}
int main()
{
	int x, y, sum;
	scanf_s("%d %d", &x, &y);
	sum = add(x, y);
	printf("%d", sum);
	return 0;
}*/

//练习数组
/*#include<stdio.h>
int main()
{
	int arr[6] = { 1,2,3,4,5,6};
	int i = 0;
	while (i < 6)
	{
		printf("%d ", arr[i]);
		i++;

	}
	return 0;
}*/

//练习取反
//#include<stdio.h>
//int main()
//{
//	int a =-2;
//	printf("%d", ~a);
//	return 0;
//}

//练习多次输出
//#include<stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//练习打印变量地址
//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	printf("%p", &a);
//	return 0;
//}

//练习存放变量地址与另一变量
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	printf("%d", p);//此处有警告，但程序能跑
//	return 0;
//}

//练习通过指针变量的方法改变变量值
#include<stdio.h>
int main()
{
	int a = 0;
	int* p = &a;
	*p = 22;
	printf("%d", a);
	return 0;
}