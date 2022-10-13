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


#include "stdio.h"
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
}