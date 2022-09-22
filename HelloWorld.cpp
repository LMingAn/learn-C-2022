#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	printf("Hello World\nHello World");
	//return 0;
//}


//char-字符数据类型
//short-短整型
//int-整形
//long-长整型
//long long-更长的整形
//float-单精度浮点型
//double-双精度浮点型


//int main()
//{
	//char ch = 'A';
	//printf("%c", ch);
	//return 0;
	//int age = 20;
	//printf("%d", age);
	//return 0;
//}


//char-字符类型
//%d-打印整型
//%c-打印字符
//%f-打印浮点数字-打小数
//%p-以地址的形式打印
//%x-打印16进制的数字
//%s-打印字符串


//int main()
//{
	//printf("%d", sizeof(char));//1
	//printf("%d", sizeof(short)); //2
	//printf("%d", sizeof(int));//4
	//printf("%d", sizeof(long));//4/8
	//printf("%d", sizeof(long long));//8
	//printf("%d", sizeof(float));//4
	//printf("%d", sizeof(double));//8
	//printf("%d", sizeof(char));//1
	//return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d", sum);
//	return 0;//这里的num1和num2需要手动输入-因为scanf函数表示在终端中手动输入变量
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d", sum);
//	return 0;
//}


//int main()
//{
//	extern int 罗俊杰;
//	printf("罗俊杰 = 骚骚");
//	return 0;
//}


//int main()
//{
//	//const-常属性
//	//const-所定值为不可改变量
//	int num = 1;
//	printf("%d\n", num);
//	num = 6;
//	printf("%d", num);
//	return 0;
//}


//int main()
//{
//	const int num = 2;
//	printf("%d\n", num);
//	//num = 6;//此时const赋值num为常量，不可在此列再次赋值
//	printf("%d", num);
//}


//int main()
//{
//	const int n = 19;//n是变量，但经const修饰，为常变量
//	//int arr[n] = { 9 };
//}


//define 定义的标识符常量


//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d", MAX);
//}


//枚举常量-可一一列举
//性别 三原色 星期
//枚举关键-enum


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};//枚举常量
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//enum Color
//{
//	RED,
//	YELLOW,
//	BULE
//};
//int main()
//{
//	enum Color color = BULE;//枚举常量不可更改
//	return 0;
//}


//char为字符类型
//字符串类型""-即""内的内容都为字符串


//int main()
//{
//	//数据在计算机上存储的是二进制，#a￥等
//	//a - 97
//	//A - 65
//	//...
//	//ASCll 码值
//	//char arr1[] = "MingAn";//此行意为打印一个字符串
//	////"MingAn"--‘M’'i''n'......\0'---\0'字符串的结束标志，一般情况不会显示，打印也不会出现，可理解为终止密码子
//	//char arr2[] = { 'M', 'A' ,0};//若不加‘0’，打印结束会加上一堆随机值，可能为烫之类的字
//	//printf("%s\n", arr1);
//	//printf("%s", arr2);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c', 0};
//	printf("%zd\n", strlen(arr1));//strlen - string length - 计算字符串长度
//	printf("%zd", strlen(arr2));
//	return 0;
//}


//int main()
//{
//	printf("abc\n");//“\n”为转义字符
//	return 0;
//}


//int main()
//{
//	printf("C:\\test\\32\\test.c");//\t叫水平制表符（空出一大块）同为转义字符
//	return 0;
//}


//int main()
//{
//	printf("%s", "\'");//转义字符的再次试验
//	return 0;
//}


//int main()
//{
//	printf("%zd\n", strlen("c:\test\32\test, c"));//32是2个8进制数字，作为8进制代表的那个十进制数字，作为ASCll码值，所对应的数值   3 - 8^1 , 2 - 8^0。32---作为ASCll码值代表的字符
//	return 0;
//}


//int main()
//{
//	printf("%c", '\132');
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("骚骚啊骚骚\n");
//	printf("你要好好学习吗?(那必须的 = 1/摆烂就完事儿了 = 0):");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}//选择语句
//循环语句


//int main()
//{
//	int line = 0;
//	printf("学编程\n");
//	while (line < 1000000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=1000000)
//	printf("好offer\n");
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int sum = 0;
//	int a = 10;
//	int b = 20;
//	sum = Add(num1 , num2);
//	sum = Add(a , b);
//	printf("sum = %d\n", sum);
//	return 0;
//}//Add为自定义函数，由编写者自己创建并定义的函数，库函数为原有函数


//数组
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整形数字的数组
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[0]);//此处的0对应着上面的1，即此处的0称为arr数组的下标
//	return 0;
//}


//2进制位操作
//&按位与-并且-001
//|按位或-111
//^按位异或--计算规律是：二进制的计算位相同，则为0。对应的二进制相异，则为-110
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//011
//	//101
//	//101
//	//...
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//=为赋值 ==判断相等
//	a = a + 10;//1
//	a += 10;//2 与上面“1”方式完全等价
//}


//int main()
//{
//	int a = 5;
//	printf("%d\n", a);
//	printf("%d\n", !a);//！作用为逻辑反操作，即0-假 非0-真
//	return 0;
//}


//int main()
//{
//	int a = 10;//sizeof 计算的是变量/类型所占空间的大小，单位是字节
//	printf("%d\n", sizeof(a));//4个字节
//	return 0;
//}


//int main()
//{
//	int sz = 0;
//	int arr[10] = { 0 };//10个整型元素的数组
//	//10*sizeof（int）=40
//	printf("%d\n", sizeof(arr));
//	//计算数组的元素大小
//	//个数 = 数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//}


//int main()
//{
//	int a = 1;
//	int b = a<<1;//<<左移 >>右移 整型1占4个字节-32个bit符：00000000000000000000000000000001（皆为二进制）
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	int arr[] = { 1, 2, 3, 4, 5, 6 };//6*4=24 -->int[6]
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof arr);//计算定义的数组arr的大小
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;//b是有符号的整型、~ -- 按二进制位取反
//	//原码，反码，补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//1111111111（补码）
//	//1111111110（补码-1等于反码）
//	//1000000001（反码符号位不变，后面全变等于原码）
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，再使用
//	//int b = a--;//后置--，先使用，再--
//	int b = --a;//前置--，先--，再使用
//	printf("a = %d b = %d\n", a, b);//11 10
//	return 0;
//}


//int main()
//{
//	int a = (int)41414;//(类型)为强制类型转换
//	return 0;
//}


//int main()
//{
//	//真 - 非0
//	//假 - 0
//	//&& - 逻辑与
//	//|| - 逻辑或
//	int a = 0;
//	int b = 0;
//	int c = a || b;
//	//int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return 0;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[] - 下标引用操作符，意为访问arr数组中下标为4的数值
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-函数调用操作符
//	return 0;
//}


//只要是整数，内存中存储的都是二进制的补码
//正数--原码，反码，补码，三码相同
//负数：
//原码                      -->         反码         -->         补码
//直接按照正负        原码的符号位变                反码+1
//写出的二进制序列    其他位按位取反得到
//1000000000000000 - 原码
//1111111111111101 - 反码
//1111111111111110 - 补码
//typedef - 类型定义 - 类型重定义


//int main()
//{
	//signed int num = -8;//signed 表示有符号的变量
	//printf("%d", num);
	//return 0;
	//int 定义的变量是有符号的
	//unsigned int num = -8;//unsigned 表示无符号的变量
	//printf("%d", num);
	//return 0;
	//此处虽然打印num变量带有符号，但num认为-8为正数
//}


//struct-结构体关键字
//union - 联合体/共同体
//int 定义一个变量不能是关键字


//int main()
//{
//	typedef unsigned int u_int;
//	unsigned int num = 28;
//	u_int num2 = 25;
//	return 0;
//}


//void test()
//{
//	int a = 1;
//	a++;
//	printf("a = %d\n", a);
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


//#include<stdio.h>
//#include<stdio.h>
//int Add(float a, float b)
//{
//	float c = a * 2 + b * 2;
//	return c;
//}
//int main()
//{
//	float x, y, l, s;
//	x = 3;
//	y = 4;
//	l = 0;
//	s = 0;
//	scanf("%f %f", &x, &y);
//	l = Add(x, y);
//	printf("%3f\n", l);
//	s = x * y;
//	printf("%3f", s);
//	return 0;
//}
//a++就是a=a+1


//void test()
//{
//	static int a = 1;//static是一个静态的局部变量-即修饰局部变量，当static修饰局部变量时，被修饰局部变量生命周期变长
//	//若static修饰全局变量,extern修饰的变量无法使用，使extern声明的外部变量无法使用，即作用域变小，让静态的全局变量只能在自己所在的文件内部使用
//	a++;
//	printf("a = %d\n", a);
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


//两种方式打印 函数方式与宏方式
//int B(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
////宏的定义
//#define C(A,B) (A>B?A:B)
//int main()
//{
//	int a = 20;
//	int b = 30;
//	//函数方式
//	int c = C(a, b);
//	printf("%d\n", c);
//	//宏的方式
//	c = C(a, b);
//	printf("%d", c);
//	return 0;
//}


//int main()
//{
//	int A = 0;
//	int B = 0;
//	printf("%d", A + B);
//	return 0;
//}


//int main()
//{
//	int a = 10;//4个字节
//	//&a;//取地址
//	//有一种变量是用来存放地址的-指针变量
//	printf("%p\n", &a);
//	return 0;
//}


//int main()
//{
//	int a = 10;//在内存中创建一个变量，叫a，有对应的地址，叫0x00123edff30
//	int* p = &a;//&即取出a的地址，存到p变量里去，即p里存储了a的地址|p的类型的int*
//	*p = 20;//此处*p就等于a，即把a的值改为20
//	//指针大小在32位系统是4个字节，在64位系统是8个字节
//}


//ASCll表中大小写字母差32


//用指针变量的方法改变一个变量的值
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
	//double b = 19;
	//double* pd = &b;
	//printf("%d\n", sizeof(pd));
	//*pd = 2.3;
	//printf("%lf\n", b);
	//printf("%lf", *pd);
	//int a = 10;//申请了四个字节
	//int* p = &a;//p是一个指针变量，这里的*是一个语法形式
	//*p = 20;//这里的*表示解引用操作符/间接访问操作符
	//printf("a = %d", a);
//	return 0;
//}


//结构体
//char int double
//‘人’ = 3.14
//‘w’
//‘书’ - 复杂对象
//名字+身高+年龄+身份号码+......
//书名+作者+出版社+书号
//复杂对象 -- 结构体 -- 我们自己创造出来的一种类型
//struct book
//{
//	char name[20];//C语言程序设计
//	short price;
//};
//int main()
//{
//	struct book b1 = { "C语言编程" ,55 };
//	struct book* pd= &b1;//struct book*就是一种指针类型，指针定义了一个变量为pd
//	//用pd打印出我的书名的价格
//	printf("%s\n", pd->name);
//	printf("%sd\n", pd->price);
//	//printf("%s\n", (*pd). name);
//	//printf("%d\n", (*pd). price);
//	/*printf("书名:%s\n" , b1.name);
//	printf("价格:%d元\n" , b1.price);
//	b1.price = 15;
//	printf("修改后的价格:%d元",b1.price);*/
//	return 0;
//}//|有异常的程序|



