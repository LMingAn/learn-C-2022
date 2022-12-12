//数组是一组相同类型的元素的集合

//结构体是一些值的集合，但是值的类型可以不同
//结构体的成员可以是标量、数组、指针、甚至是其他结构体（结构体嵌套）

#include<stdio.h>
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu//类型 -- 相当于图纸
//{
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];
//}s1,s2;//s1和s2也是结构体变量 -- 但是全局变量
//
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w', 20, 3.14}, "张三", 19, "122000" };//对象 -- 相当于房子
//	//结构体成员访问符
//	//.(一般情况下) ->(指针情况下使用)
//	//printf("%c ", s.sb.c);
//	//printf("%s", s.id);
//
//	//struct Stu* ps = &s;
//	//printf("%c\n", (*ps).sb.c);
//	//printf("%c\n", ps->sb.c);
//	return 0;
//}


//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu//类型 -- 相当于图纸
//{
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];
//}s1,s2;//s1和s2也是结构体变量 -- 但是全局变量
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print2(struct Stu* t)
//{
//	printf("%c %d %lf %s %d %s\n", t->sb.c, t->sb.s, t->sb.d, t->name, t->age, t->id);
//}
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w', 20, 3.14}, "张三", 30, "20221212" };//对象
//	//写一个函数打印s的内容
//	print1(s);//传值调用 - 传值需要考虑参数压栈
//	//栈 - 是一种数据结构 - 先进的后出，后进的先出
//	print2(&s);//传址调用
//	return 0;
//}

//int add(int a, int b)//每一个函数调用都会在内存的栈区上开辟一块空间
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = add(a, b);//函数传参大多是从右向左传过去的 -- 参数传参也叫压栈操作 -- 所以传参用传址调用效率比较高
//	return 0;
//}

//课外研究 -- 函数栈帧的创建和销毁