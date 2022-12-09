//实现函数init()初始化数组为全0 - 3
//实现print()打印数组的每个元素 - 1
//实现reverse()函数完成数组元素的逆置 - 2

#include<stdio.h>

void print(int a[10])
{
	int b;
	for (b = 0; b < 10; b++)
	{
		printf("%d ", a[b]);
	}
	printf("\n");
}
void init(int a[10])
{
	int b;
	for (b = 0; b < 10; b++)
	{
		a[b] = 0;
	}
	print(a);
}
void reverse(int a[10])
{
	int b = 0, c = 10 - 1;//b为左下标，c为右下标
	while (b < c)//两数交换
	{
		a[b] = a[b] ^ a[c];
		a[c] = a[b] ^ a[c];//将a[b]放入a[c]中 - a[b] ^ a[c] ^ a[c] = a[b]
		a[b] = a[b] ^ a[c];//将a[c]放入a[b]中 - a[b] ^ a[c] ^ a[c](a[b]) = a[c]
		b++, c--;
	}
	print(a);
}
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(a);
	reverse(a);
	init(a);
}