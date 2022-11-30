//数组的基本形式
//type_t arr_name [const_n]
//type_t是数组元素类型
//arr_name是数组名称
//[const_n]是一个常量表达式，用来指定数组大小


//关于数组的一些细节问题、
//只有字符数组最后才有'\0'，整型数组没有'\0'
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//int arr[9];
//	//char ch[5];
//	//int n = 8;
//	//int arr[n];//只有C99语法才支持-变长数组-，即数组的大小可以是变量，但VS2022不支持变长数组
//
//	int a = 10;//初始化
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//此为完全初始化
//	//int arr[10] = { 1, 2, 3, 4, 5 };//不完全初始化
//	//int arr2[] = { 1, 2, 3, 4, 5 };//若没有指定数组大小，会根据后面的初始化数组长度指定大小
//	//char ch[5] = { 'b', 'i', 't'};//字符数组初始化，需要加单引号
//	//char ch2[] = { 'b', 'i', 't' };//同上原理
//	//char ch3[5] = "bit";//b i t \0 \0
//	//char ch4[] = "bit";//b i t \0
//	char ch5[] = "bit";//[b i t \0]
//	char ch6[] = { 'b', 'i', 't' };//[b i t]
//	printf("%d\n", strlen(ch5));
//	printf("%d\n", strlen(ch6));//由于ch6没有指定长度，因此打印的数组长度是随机值
//	//printf("%s\n", ch5);
//	//printf("%s\n", ch6);
//	return 0;
//}



//一维数组：

//一维数组的使用
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//初始化为0，第一个值为0，但后面的值是默认为0
//	arr[4] = 5;//[] - 下标引用操作符
//	int i = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(arr)意为数组元素的总大小，sizeof(arr[0])意为数组第一个元素的大小
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//一维数组的地址使用
//#include<stdio.h>
//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//		//打印结果：
//		//&arr[0] = 000000BEC80FFB58--低地址
//		//&arr[1] = 000000BEC80FFB5C
//		//&arr[2] = 000000BEC80FFB60
//		//&arr[3] = 000000BEC80FFB64
//		//&arr[4] = 000000BEC80FFB68
//		//&arr[5] = 000000BEC80FFB6C
//		//&arr[6] = 000000BEC80FFB70
//		//&arr[7] = 000000BEC80FFB74
//		//&arr[8] = 000000BEC80FFB78
//		//&arr[9] = 000000BEC80FFB7C--高地址
//		//每个地址之间相差四个字节
//		//地址--%p是按地址的格式打印-十六进制的打印
//		//总结：
//		//一维数组在内存中是连续存放的
//		//随着数组下标的增长，地址是由低到高变化的
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;//数组名是数组首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}



//二维数组：
//基本操作：创建二维数组
//#include<stdio.h>
//int main()
//{
//	//int a[3][5];//第一个[3]表示有多少个一维数组--即有多少行，第二个[5]表示一个二维数组有多少个元素--即有多少列
//	//int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };//完全初始化
//	//int a[3][4] = { 1, 2, 3, 4, 5 };//不完全初始化 - 后面补0
//	//int a[3][4] = { {1, 2}, {3, 4}, {4, 5} };//不完全一维数组初始化 - 每个一维数组后面补0，即{1, 2, 0, 0}
//	//int a[][4] = { {1, 2}, {3, 4}, {4, 5} };//二维数组，行可以省略，但列不能省略
//	//int a[][4] = { 1, 2, 3, 4, 4, 5 };//在省略行的前提下，若不进行内分行，会依次排列直到排完初始元素，后面补0
//	//二维数组的打印：
//	int a[3][4] = { {1, 2}, {3, 4}, {4, 5} };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//二维数组在数组中的存储
//#include<stdio.h>
//int main()
//{
//	int a[3][4] = { {1, 2}, {3, 4}, {4, 5} };
//	int i, j;
//	int* p = &a[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//		printf("&a[%d][%d] = %p ", i, j, &a[i][j]);//二维数组中每个元素相差四个字节
//	//	printf("\n");
//	//}
//	return 0;
//}


//数组名是数组首元素的地址
//但有两个例外
//1.sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小单位是字节
//2.&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
#include<stdio.h>
//冒泡排序
//void sort(int a[], int sz)
//{
//	//确定次数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一次冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				//交换
//				int b = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = b;
//				//此为从小到大的排序
//			}
//		}
//	}
//}
//优化版冒泡排序
void sort(int a[], int sz)
{
	//确定次数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一次冒泡排序的过程
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				//交换
				int b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
				flag = 0;
				//此为从小到大的排序
			}
		}
		if (flag == 1)//若数组内元素为顺序排放，则不再继续排序，减少不必要的排序
			break;
	}
}
int main()
{
	int a[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	//排序为升序 - 冒泡排序
	//计算数组元素个数
	int sz = sizeof(a) / sizeof(a[0]);
	sort(a, sz);
	for (int b = 0; b < sz; b++)
		printf("%d ", a[b]);
	return 0;
	//int a[10] = { 0 };
	//printf("%p\n", &a);//1 - &a取出的是数组的地址
	//printf("%p\n", &a + 1);
	//printf("%p\n", a);//2
	//printf("%p\n", a + 1);//2
	//printf("%p\n", &a[0]);//3
	//int sz = sizeof(a);//数组名表示整个数组
	//printf("%d\n", sz);
	//printf("%p\n", &a[0]);
	//printf("%p\n", a);//数组名是首元素的地址
	//return 0;
}