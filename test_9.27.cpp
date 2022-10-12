#include <iostream>
#include<stdio.h>
//int main()
//{
//	int a1, a2, b1, b2, s1, s2;
//	scanf_s("%d %d\n%d %d", &a1, &a2, &b1, &b2);
//	printf("%d %d\n", s1 = (a1 + b1), s2 = (a2 + b2));
//	printf("%d %d\n", s1 = (a1 - b1), s2 = (a2 - b2));
//	printf("%d %d\n", s1 = (a1 * b1 - a2 * b2), s2 = (a1 * b2 + a2 * b1));
//	if ((b1 * b1 - b1 * b2 + b1 * b2 - b2 * b2) != 0)
//	{
//		s1 = (a1 * b1 - a2 * b2) / (b1 * b1 - b1 * b2 + b1 * b2 - b2 * b2);
//	}
//	if ((b1 * b1 - b1 * b2 + b1 * b2 - b2 * b2) != 0)
//	{
//		s2 = (a2 * b1 - a1 * b2) / (b1 * b1 - b1 * b2 + b1 * b2 - b2 * b2);
//	}
//	else
//		s2 = 0;
//	printf("%d %d\n", s1, s2);
//	return 0;
//}
int main()
{
	int x = 35, a;
	char z = 'A';
	a = (x & 15) && (z < 'a');
	printf("%d", a);
	return 0;
}