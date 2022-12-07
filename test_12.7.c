#include<stdio.h>

struct birthday//定义结构体
{
	int year;
	int month;
	int day;
};

//void change(struct birthday d)//用函数change对结构体birthday别名为d进行再赋值
//{
//	d.year = 2022;
//	d.month = 12;
//	d.day = 7;
//}

void change(struct birthday *d)//用函数change对结构体birthday别名为d进行再赋值
{
	d->year = 2022;
	d->month = 12;
	d->day = 7;
}

//struct birthday change(struct birthday d)//用函数change对结构体birthday别名为d进行再赋值
//{
//	d.year = 2022;
//	d.month = 12;
//	d.day = 7;
//	return d;
//}

int main()
{
	struct birthday d;//给birthday结构体定义别名为d
	d.year = 2003;
	d.month = 9;
	d.day = 21;
	printf("before change:");
	printf("%d - %d - %d\n", d.year, d.month, d.day);
	//change(d);//直接传参过去无法改变结构体d中的变量数值
	change(&d);
	//d = change(d);//此方法本质是再定义一个结构体birthday的别名change覆盖掉原结构体d的值
	printf("after change:");
	printf("%d - %d - %d", d.year, d.month, d.day);
	return 0;
}