﻿#include <stdio.h>
#include <stdlib.h>
//V3 - 在V2的基础上，直接改变原数组
int main()
{
	int a[100] = { 0 }, b = 0;
	scanf_s("%d", &b);//放多少个数字
	int c = 0;
	for (c = 0; c < b; c++)//输入数字
	{
		scanf_s("%d", &a[c]);
	}
	//开始排序 -- 用两个数组，一个放奇数，一个放偶数，再依次放进原数组
	int X[100] = { 0 }, Y[100] = { 0 }, x = 0, y = 0;//X为奇数数组，Y为偶数数组
	for (c = 0; c < b; c++)
	{
		if (a[c] % 2 != 0)
		{
			X[x] = a[c];
			x++;
		}
		else
		{
			Y[y] = a[c];
			y++;
		}
	}
	for (c = 0; c < x; c++)//先放奇数
	{
		a[c] = X[c];
	}
	for (c = x, y = 0; c < b; c++, y++)//再放偶数
	{
		a[c] = Y[y];
	}
	//结束排序
	for (int z = 0; z < b; z++)//输出数组
	{
		printf("%d ", a[z]);
	}
	return 0;
}

//V2 - 先放奇数，偶数放在另一个数组里，放完奇数再放偶数
//int main()
//{
//    int a = 0, b[100] = { 0 }, c = 0;
//    scanf_s("%d", &a);//输入n个数
//    for (c = 0; c < a; c++)//输入具体数字
//    {
//        scanf_s("%d", &b[c]);
//    }
//    b[c + 1] = '\0', c--;
//    int d = 0, e[100] = { 0 }, f[100] = { 0 }, g = 0, h = 0;
//    for (d = 0; d <= c; d++)
//    {
//        if (b[d] % 2 != 0)//判断为奇
//        {
//            e[g] = b[d];//先将奇数放在前面
//            g++;
//        }
//        else
//        {
//            f[h] = b[d];//将偶数放在f数组里
//            h++;
//        }
//    }
//    e[c + 1] = '\0';
//    //将f数组转移到e数组中
//    for (int i = 0; g <= c; g++, i++)
//    {
//        e[g] = f[i];
//    }
//    for (c = 0; c < a; c++)
//    {
//        printf("%d ", e[c]);
//    }
//    return 0;
//}

//V1 - 直接将奇数正着放，偶数倒着放
//int main()
//{
//    int a = 0, b[100] = { 0 }, c = 0;
//    scanf_s("%d", &a);
//    for (c = 0; c < a; c++)
//    {
//        scanf_s("%d", &b[c]);
//    }
//    b[c + 1] = '\0', c--;
//    int d = 0, e[100] = { 0 }, f = 0, g = 0;
//    for (d = 0; d <= c; d++)
//    {
//        if (b[d] % 2 == 0)
//        {
//            e[c - f] = b[d];
//            f++;
//        }
//        else
//        {
//            e[g] = b[d];
//            g++;
//        }
//    }
//    e[c + 1] = '\0';
//    for (c = 0; c < a; c++)
//    {
//        printf("%d ", e[c]);
//    }
//    return 0;
//}