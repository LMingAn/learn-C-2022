#include<stdio.h> 
#include<string.h>

void reverse(char* left, char* right)
{
	while (left < right)
	{
		char a = *left;
		*left = *right;
		*right = a;
		left++;
		right--;
	}
}

int main()
{
	char a[101] = { 0 };
	//输入
	gets(a);

	//逆置
	int len = strlen(a);
	reverse(a, a + len - 1);

	//逆序
	char* start = a;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
			end++;
		reverse(start, end - 1);
		if (*end != '\0')
			end++;
		start = end;
	}

	//输出
	printf("%s", a);
	return 0;
}