//#include<stdio.h>
//int main()
//{
//    float x, a = 0, b;
//    int c = 0;
//    scanf_s("%f", &x);
//    for (b = 2; b >= 0;)
//    {
//        a = a + b;
//        b = b * 0.98;
//        c++;
//        if (a >= x)
//        {
//            printf("%d", c);
//            break;
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int a, b, c, m, t;
//    printf("请输入两个数：");
//    scanf_s("%d %d", &a, &b);
//    if (a < b)//将a定义为最大值，b为最小值
//    {
//        t = a;
//        a = b;
//        b = t;
//    }
//    m = a * b;//m为两数乘积
//    c = a % b;//c用于判断两数是否能相互整除
//    while (c != 0)
//    {
//        a = b;
//        b = c;
//        c = a % b;
//    }
//    //若c为0，最大公约数为b，即最小的数，最小公倍数为两数乘积除于最小值
//    //若c不为0，用辗转相除法求最大公约数，最小公倍数依然是两数乘积除于最小值
//    printf("最大公约数是：%d\n", b);
//    printf("最小公倍数是：%d\n", m / b);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int a, b, c, d, e = 0;
//    scanf_s("%d %d", &a, &b);
//    if (a < b)
//    {
//        c = a;
//        a = b;
//        b = c;
//    }
//    d = a * b;
//    c = a % b;
//    while (e != 0)
//    {
//        a = b;
//        b = c;
//        c = a % b;
//    }
//    printf("%d %d", b, d / b);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a[13];  //用来表示牌的种类 
//    int num = 0;  //用来存放总的种数 
//
//    for (a[0] = 0; a[0] <= 4; a[0]++)   //每种点数的牌被抽到的张数有五种：0,1,2,3,4 
//    {
//        for (a[1] = 0; a[1] <= 4; a[1]++)
//        {
//            for (a[2] = 0; a[2] <= 4; a[2]++)
//            {
//                for (a[3] = 0; a[3] <= 4; a[3]++)
//                {
//                    for (a[4] = 0; a[4] <= 4; a[4]++)
//                    {
//                        for (a[5] = 0; a[5] <= 4; a[5]++)
//                        {
//                            for (a[6] = 0; a[6] <= 4; a[6]++)
//                            {
//                                for (a[7] = 0; a[7] <= 4; a[7]++)
//                                {
//                                    for (a[8] = 0; a[8] <= 4; a[8]++)
//                                    {
//                                        for (a[9] = 0; a[9] <= 4; a[9]++)
//                                        {
//                                            for (a[10] = 0; a[10] <= 4; a[10]++)
//                                            {
//                                                for (a[11] = 0; a[11] <= 4; a[11]++)
//                                                {
//                                                    for (a[12] = 0; a[12] <= 4; a[12]++)
//                                                    {
//                                                        if (a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8] + a[9] + a[10] + a[11] + a[12] == 13)
//                                                        {
//                                                            num++;
//                                                        }
//                                                    }
//                                                }
//                                            }
//                                        }
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    printf("%d", num);
//    return 0;
//}


//#include <stdio.h> 
//int num = 0;   //we表示种类数 
////n表示每次选择的dian点的牌的数量
////dian表示牌的点数
////sum为13，即牌每个人发13张  
//void my(int n, int dian, int sum)
//{
//	sum += n;
//	if (sum == 13)
//	{
//		num++;
//		sum = 0;
//		return;
//	}
//	else if (sum > 13)
//	{
//		return;
//	}
//	if (dian == 13)
//	{
//		return;
//	}
//	for (int i = 0; i <= 4; i++)
//	{
//		my(i, dian + 1, sum);
//	}
//	return;
//}
//int main()
//{
//	int sum = 0;//牌数=13 
//	int dian = 0;//点数<=13 
//	my(0, dian, sum);
//	printf("%d", num);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int n, a, b = 1, c = 1, d = 1;
	scanf_s("%d", &n);
	if (n > 2)
		for (a = 3; a <= n; a++)
		{
			d = (b + c) % 10007;
			b = c;
			c = d;
		}
	printf("%d", d);
	return 0;
}