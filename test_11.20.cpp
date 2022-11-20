#include<stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,6,9 }, b[6], s, i, m = 0;
//	scanf_s("%d", &s);
//	for (i = 0; i < 6; i++)
//	{
//		if (a[i] > s)
//		{
//			m = s;
//			s = a[i];
//			a[i] = m;
//			b[i] = a[i];
//		}
//		else if (a[i] <= s)
//			b[i] = a[i];
//			b[5] = s;
//	}
//	for (i = 0; i < 6; i++)
//		printf("%d\t", b[i]);
//	return 0;
//}

int main()
{
	char a = 0;
	a= (('Z' - 'A') + 0) % 26 + 'A';
	printf("%c", a);
	return 0;
}