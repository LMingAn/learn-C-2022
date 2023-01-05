#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//void fun(char* s, char* t)
//{
//	char k;
//	k = *s;
//	*s = *t;
//	*t = k;
//	s++;
//	t--;
//	if (*s)
//		fun(s, t);
//}
//int main()
//{
//	printf("%d\n", 'c' && 'd');
//	printf("%d\n", 'c' && 'd' || !(3 + 4));
//	return 0;
//}
#include<stdio.h>
#define N 80
int main()
{
    int i, j = 0, k = 0, flag;
    int a[N] = { 2, 2, 2, 3, 4, 4, 5, 6, 6, 6, 6, 7, 7, 8, 9, 9, 10, 10, 10, 10, 10 };
    for (i = 0; i < N; i++)
    {
        flag = 1;
        for (j = i + 1; j < N; j++)
        {
            if (a[i] == a[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            a[k++] = a[i];
    }
    for (i = 0; i < k; i++)
    {
        printf("%d", a[i]);
        if (i != k - 1)
            printf(" ");
    }
    return 0;
}