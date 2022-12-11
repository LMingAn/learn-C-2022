#include<stdio.h>
int main()
{
	int i, j, m = 0;
	for (i = 1; i < 3; i++)
	{
		for (j = 3; j > 0; j--)
		{
			if ((i * j) > 3)
				break;
			m = i * j;
		}
	}
	printf("%d", m);
}