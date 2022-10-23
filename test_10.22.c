//#include<stdio.h>
//int main()
//{
//    int k, n = 1;
//    float Sn = 1;
//    int j = 1;
//    scanf_s("%d", &k);
//    for (float i = 2; Sn <= k; i++)
//    {
//        Sn = Sn + (j / i);
//        if (Sn > k)
//        {
//            break;
//        }
//
//    }
//    printf("%d", n);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x, n;
//	scanf_s("%d", &x);
//	{
//		if (x > 999)
//		{
//			n = 4;
//		}
//		else if (x > 99)
//		{
//			n = 3;
//		}
//		else if (x > 9)
//		{
//			n = 2;
//		}
//		else if (x > 0)
//		{
//			n = 1;
//		}
//	}
//	{
//		printf("%d\n", n);
//		int y = 1;
//		int t = x;
//		while (t > 9)
//		{
//			t /= 10;
//			y *= 10;
//		}
//		do
//		{
//			int d = x / y;
//			printf("%d", d);
//			if (y > 9) {
//				printf(" ");
//			}
//			x %= y;
//			y /= 10;
//		} while (y > 0);
//		printf("\n"); 
//	}
//	int tmp = 0;
//	while (x != 0)
//	{
//		tmp = tmp * 10 + x % 10;
//		x /= 10;
//	}
//	printf("%d\n", tmp);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int arr[200][200];
//    int m, n, y = 0, x = 0;
//    scanf_s("%d %d", &m, &n);
//    int w = 0, r = n - 2, u = n - 1;
//    int i = m - 1;
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            scanf_s("%d", &arr[i][j]);
//        }
//    }
//    int num = 0;
//    printf("%d ", arr[y][x]);
//    while (m * n > num)
//    {
//        while (y + 1 < m && arr[y + 1][x])
//        {
//            printf("%d ", arr[++y][x]);
//            num++;
//        }
//        while (x + 1 < n && arr[y][x + 1])
//        {
//            printf("%d ", arr[y][++x]);
//            num++;
//        }
//        while (y - 1 >= 0 && arr[y - 1][x])
//        {
//            printf("%d ", arr[--y][x]);
//            num++;
//        }
//        while (x - 1 >= 0 && arr[y][x - 1])
//        {
//            printf("%d ", arr[y][--x]);
//            num++;
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int i, m, k;
//    for (i = 100; i <= 1000; i++)
//    {
//        k = i;
//        m = 0;
//        while (k > 0)
//        {
//            m = m * 10 + k % 10;
//            k = k / 10;
//        }
//        if (m == i)
//            printf("%d\n", i);
//    }
//    return 0;
//}


//特殊回文数
#include<stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf_s("%d", &e);
    for (a = 10000; a <= 1000000; a++)
    {
        c = a;
        b = 0;
        while (c > 0)
        {
            b = b * 10 + c % 10;
            c = c / 10;
        }
        if (b == a)
        {
            d = 0;
            while (b > 0)
            {
                d = d + b % 10;
                b = b / 10;
            }
            if (d == e)
                printf("%d\n", a);
        }
    }
    return 0;
}