#include<stdio.h>
#include<stdlib.h>
//bool IsPalindrome(int a)
//{
//	//b为判断数，a为被判断数
//	int b = 0, c = a;
//	while (c != 0)
//	{
//		b = b * 10 + c % 10;
//		c = c / 10;
//	}
//
//	//进行两数判断，
//	if (a == b)
//		return 1;
//	else
//		return 0;
//}
//void main()
//{
//	int i;
//	for (i = 10; i <= 10000; i++)
//	{
//		if (IsPalindrome(i) == 1)
//			printf("%d\n", i);
//	}
//	system("pause");
//}

int isprime(int a)
{
	/*int i, flag = 1;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			flag = 0;
			break;
			return 0;
		}
		else return 1;
	}*/

	int i;
	for (i = 2; i < a; i++)
		if (a % i == 0)//判断是否能被1和自身以外的数整除
			return 0;//若被1和自身以外的数整除，返回0，不输出
	return 1;//若不能，返回1，输出
}
void main()
{
	for (int i = 2; i < 1000; i++)
	{
		if (isprime(i) == 1)
			printf("%d\n", i);
	}
	system("pause");
}