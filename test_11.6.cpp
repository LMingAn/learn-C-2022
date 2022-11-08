#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	double x = 1, y;
	int a;
	scanf_s("%d", &x);
	a = (1 <= x && x < 2) ? 1 : (2 <= x && x <= 5) ? 2 : 3;
	switch (a)
	{
	case 1:y = 2 * x + 5; break;
	case 2:y = sqrt(1 + x * x); break;
	}
	printf("y=%f", y);
	system("pause");
}
