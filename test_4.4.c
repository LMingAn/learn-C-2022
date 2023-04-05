#include<stdio.h>

int main()
{
	long i[200000] = { 0 }, I[200000] = { 0 }, max = 0, num = 0;
	int n = 0, si = 0, sj = 0, t = 0, a = 0, b = 0, c = 0, d = 0;
	scanf("%d", &t);//测试用例个数
	for (a = 0; a < t; a++)
	{
		scanf("%d", &n);//数组长度
		i[200000] = 0;
		for (b = 0; b < n; b++)
		{
			scanf("%lld", &i[b]);//用例 - 可以先进行冒泡排序，随后进行简单的加减
			I[b] = i[b];
		}
		for (b = 0; b < n; b++)
		{
			for (c = 0; c < n; c++)
			{
				if (i[b] > i[c])
				{
					i[b] = i[b] ^ i[c];
					i[c] = i[b] ^ i[c];
					i[b] = i[b] ^ i[c];
				}
			}
		}
		for (b = 0; b < n; b++)
			if (b = 0)
				printf("%d", i[])
		printf("\n");
	}
	return 0;
}



//int main()
//{
//    int a = 2019, b = 0, c = 0, d = 0;
//    b = a % 26;//最后一位
//    c = a / 26;//有多少位A
//    if (c > 26)//第一位不为A
//        d = c / 26;
//    c = c % 26;
//    printf("%c%c%c", d + 64, c + 64, b + 64);
//    return 0;
//}