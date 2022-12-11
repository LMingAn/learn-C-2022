//前提：
//指针是用来存放地址，地址是唯一标识一块地址空间的
//指针的大小在32位平台是4个字节，在64位平台是8个字节(int型)

#include<stdio.h>

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//	return 0;
//}


//指针类型的意义
//1.指针类型决定了指针解引用的权限有多大
//2.指针类型决定了指针走一步(+1)能走多远 -- 1指1个指针类型字节单位

//int main()
//{
//	int a[10] = { 0 };
//	int* p = a;
//	char* pc = a;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);//p加的1指加一个p指针类型的字节单位
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//0 1 2 3 4 5 6 7 8 9 a b c d e f
//	//11111111
//	//    8421
//	/*int a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;*///因为char类型只占一个字节，此时更改指针的值，只改变a变量的一个对应字节的值，即44 33 22 11改为00 33 22 11
//	/*int* pa = &a;
//	*pa = 0;*/
//	//printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	int* p = a;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//指针p表示数组a的首地址，p+i表示首地址+i的下标
//	}
//	return 0;
//}



//--------------------------------



//野指针 - 野指针指向位置是不可知的（随机的、不正确的、没有明确限制的）

//成因：
//1.指针未初始化
//2.指针越界访问
//3 

//int main()
//{
//	//int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	//*p = 20;//非法访问内存了
//	int a[10] = { 0 };
//	int* p = a;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		//当指针指向的范围超出数组a的范围时，p就是野指针
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	//int* p = NULL;
//	////若明确知道初始化的值
//	//int a = 10;
//	//int* ptr = &a;
//
//	//C语言本身不会检查数据的越界行为
//	
//	//同样指针在赋值之前需要检查是否有效
//	/*int* p = NULL;
//	*p = 10;*/
//
//	return 0;
//}

//指针+-整数
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = a;
//	int* pend = a + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//指针-指针(指针+指针没有意义)
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	char b[5];
//	//指针和指针相减的前提：两个指针指向同一块空间
//	printf("%d\n", &a[9] - &a[0]);//指针-指针得到的是两个指针之间的元素个数
//	return 0;
//}

#include<string.h>
//int my_strlen(char* str)//普通做法
//{
//	int a = 0;
//	while (*str != '\0')
//	{
//		a++;
//		str++;
//	}
//	return a;
//}
//int my_strlen(char* str)//指针-指针的做法
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	//strlen() - 求字符串长度
//	//递归
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//指针-数组
//int main()
//{
//	int a[10] = { 0 };
//	int* p = a;
//	int b = 0;
//	for (b = 0; b < 10; b++)
//	{
//		*(p + b) = b;
//	}
//	for (b = 0; b < 10; b++)
//	{
//		printf("%d ", *(p + b));
//	}
//	return 0;
//	printf("%p\n", a);
//	printf("%p\n", &a[0]);//数组名表示数组首元素的地址（亦或首元素的首地址）
//	return 0; 
//}

//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = a;//数组名
//	printf("%d\n", 2[a]);
//	printf("%d\n", a[2]);
//	//[]是一个操作符 2和a是两个操作数
//	//a[2] <==> *(a + 2) <==> *(p + 2) <==> *(2 + p) <==> *(2 + a) == 2[a]
//	//2[a] <==> *(2 + a)
//	return 0;
//}


//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//
//	//ppa就是一个二级指针
//	int** ppa = &pa;//pa也是个变量，&pa取出pa在内存中起始地址
//	int*** pppa = &ppa;//pppa是一个三级指针
//	return 0;
//}

//int main()
//{
//	int a[10];//整型数组 - 存放整型的数组就是整型数组
//	char ch[5];//字符数组 - 存放的是字符
//	//指针数组 - 存放指针的数组
//	int* parr[5];//整形指针的数组
//	char* pch[5];//字符指针的数组
//	return 0;
//}