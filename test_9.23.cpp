#include<stdio.h>
#include<iostream>
using namespace std;
//写法一
//int main()
//{
//	int x, y, r1, r2, r3, r4;
//	r1 = x + y;
//	r2 = x - y;
//	r3 = x * y;
//	r4 = x / y;
//	cout << "和=" << r1 << endl;
//	cout << "差=" << r2 << endl;
//	cout << "积=" << r3 << endl;
//	cout << "商=" << r4 << endl;
//	return 0;
//}

//写法二
//void main()
//{
//	float x=1, y=1, r1, r2, r3, r4;
//	r1 = x + y;
//	r2 = x - y;
//	r3 = x * y;
//	r4 = x / y;
//	cout << "和=" << r1 << endl;
//	cout << "差=" << r2 << endl;
//	cout << "积=" << r3 << endl;
//	cout << "商=" << r4 << endl;
//}

//写法三
int main()
{
	float x = 1, y = 1, r1, r2, r3, r4;
	r1 = x + y;
	r2 = x - y;
	r3 = x * y;
	r4 = x / y;
	printf("%f\n%f\n%f\n%f", r1, r2, r3, r4);
	return 0;
}