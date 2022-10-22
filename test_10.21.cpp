//#include<stdio.h>
//int main()
//{
//	int x, n, z, e;
//	scanf_s("%d %d", &x, &n);
//	int arr[100];
//	for (z = 0; z < x; z++)
//	{
//		scanf_s("%d", &arr[z]);
//	}
//	for (z = 0; z < x; z++)
//	{
//		for (int q = z + 1; q < x; q++)
//		{
//			if (arr[z] > arr[q])
//			{
//				e = arr[z];
//				arr[z] = arr[q];
//				arr[q] = e;
//			}
//		}//或许只需要处理删除后的数组内容
//		if (arr[z] % n != 0)
//		{
//			if (arr[z] >= 65 && arr[z] <= 90)
//				printf("%c ", arr[z]);
//			else
//				printf("%d ", arr[z]);
//		}
//	}
//	return 0;
//}


#include<stdio.h>
int fun(int x)
{
	if (x == 1 || x == 2)
		return 1;
	else if (x == 0)return 0;
	x = fun(x - 1) + fun(x - 2);
	return x;
}
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d", fun(n));
	return 0;
}

