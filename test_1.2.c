#define _CRT_SECURE_NO_WARNINGS
#include   <stdio.h>
#include   <string.h>
int  fun(char  s[])

{

	char* p = s;

	while (*p != 0)  p++;

	return (p - s);

}
int main()
{
	static int a[] = { 0,1,2,3,4 }, * p;

	p = &a[2];
	(*p)++;
	return 0;
}