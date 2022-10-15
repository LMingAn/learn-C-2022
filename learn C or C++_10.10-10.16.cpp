#include<stdio.h>
/*int main()
{
	int x = 10, y = 20;
	printf("%d", (y, x));
	return 0;
}*/


/*int main()
{
	int x = 35, a;
	char z = 'A';
	a = (x & 15) && (z < 'a');
	printf("%d", a);
	return 0;
}*/


/*int main()
{
	int a = 5, b = 10;
	printf("%d", (a = a + b++, a + b, b + 1));
	return 0;
}*/


/*int main()
{
	int a;
	a = (365 % 100 && (-1 && 1)) * 10;
	printf("%d", a);
}*/


/*int main()
{
	int a = 5, b = 4, c = 6, d;
	printf("%d\n", d = a > b ? (a > c ? a : c):(b));
	return 0;
}*/


/*int main()
{
	int a = -1, b = 4, k;
	k = (++a < 0) && !(b-- <= 0);
	printf("%d%d%d\n", k, a, b);
	return 0;
}*/


/*int main()
{
	int i = 1, j = 1, k = 2;
	printf("%d,%d,%d", ++i, j++, ++k);
	return 0;
}*/


/*int main()
{
	int a;
	double x, total;
	scanf_s("%lf", &x);
	switch (a = x <= 2000 ? 0 : x <= 5000 ? 8 : x <= 10000 ? 10 : 12)
	{
	case 0:
	case 8:
	case 10:
	case 12:
		total = 500 + x * a / 100.0;
		break;
	}
	printf("%.2f", total);
	return 0;
}*/


/*#include "stdio.h"
#include <stdlib.h>
int main(int argc, char* argv[]) {
	double tw;
	int t, x;
	scanf_s("%lf", &x);
	if (x % 1000 == 0)
	{
		t = x / 1000;
	}
	else
	{
		t = x / 1000 + 1;
	}
	switch (t = x <= 2000 ? 0 : x <= 5000 ? 8 : x <= 10000 ? 10 : 12)
	{
	case 0:
	case 2:
	case 5:
	case 10:
		tw = 500 + x * t / 100.0;
		break;
	}
	printf("The total wages = %.2f\n", tw);
	return 0;
}*/


/*int main()
{
	printf("%s \n", "Hello北京");
	return 0;
}*/


/*int main()
{
	int x = -2345;
	float y = 12.3;
	printf("%6d, %06.2f", x, y);
	return 0;
}*/


/*int main()
{
	printf("\n%s%%\n", "\tab%\%\"\'\060\084\\");
}*/


/*int main()
{
	int a = 2;
	float b = 3.5;
	printf("%f\n", a * b);
	printf("%d", 'a' % 3);
	return 0;
}*/


/*int main()
{
	int a, b;
	char x, y;
	x = getchar();
	y = getchar();
	a = x - '0';
	b = a * 10 + (y - '0');
	printf("%d\n", b);
	return 0;
}*/


/*int main()
{
	int a = 353;
	char b;
	b = a;
	printf("%c\n", b);
	return 0;
}*/


/*int main()
{
	printf("%f%%", 1.0 / 3);
	return 0;
}*/


/*int main()
{
	printf("%d\n", sizeof'x');
	printf("%d\n", sizeof"x");
	printf("%d", sizeof"\101");
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int i, j, a[2][3] = { 1,2,3,4,5,6 }, b[3][2];
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%-2d", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");

	}
	for (j = 0; j <= 2; j++)
	{
		for (i = 0; i <= 1; i++)
		{
			printf("%-2d", b[j][1-i]);
		}
		printf("\n");
	}
	return 0;
}*/


//int main()
//{
//	printf("%-8、4s, %5、3f, %4d", "MAYAPP", 35.1753, 12346);
//	return 0;
//}


/*int main()
{
	printf("%-8.4s, %5.3f, %4d", "MAYAPP", 35.1753, 12346);
	return 0;
}*/


#include<stdio.h>
int main()
{
	int n, i, j, a[15][15];
	printf("输入杨辉三角的行数:");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-5d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}