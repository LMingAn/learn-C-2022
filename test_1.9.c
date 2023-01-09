/*
津津的零花钱一直都是自己管理。每个月的月初妈妈给津津 300 元钱，津津会预算这个月的花销，并且总能做到实际花销和预算的相同。
为了让津津学习如何储蓄，妈妈提出，津津可以随时把整百的钱存在她那里，到了年末她会加上 20% 还给津津。因此津津制定了一个储蓄计划：每个月的月初，在得到妈妈给的零花钱后，如果她预计到这个月的月末手中还会有多于 100 元或恰好 100 元，她就会把整百的钱存在妈妈那里，剩余的钱留在自己手中。
例如 11 月初津津手中还有 83 元，妈妈给了津津 300 元。津津预计 11 月的花销是 180 元，那么她就会在妈妈那里存 200 元，自己留下 183 元。到了 11 月月末，津津手中会剩下 3 元钱。 津津发现这个储蓄计划的主要风险是，存在妈妈那里的钱在年末之前不能取出。有可能在某个月的月初，津津手中的钱加上这个月妈妈给的钱，不够这个月的原定预算。如果出现这种情况，津津将不得不在这个月省吃俭用，压缩预算。
现在请你根据2004年1月到12月每个月津津的预算，判断会不会出现这种情况。如果不会，计算到2004年年末，妈妈将津津平常存的钱加上20％还给津津之后，津津手中会有多少钱。
*/

#include<stdio.h>

//int main()
//{
//	int arr[12] = { 0 }, a = 0, result = 0;
//	//预算 - 预算不小于0不大于350
//	for (a = 0; a < 12; a++)
//	{
//		scanf_s("%d", &arr[a]);
//	}
//	//理财
//	int b = 0, c = 0;//手里的钱，存起来的钱
//	for (a = 0; a < 12; a++)
//	{
//		b += 300;//每月补给
//		if (b >= arr[a])//判断钱是否够
//		{
//			if (b - arr[a] >= 100)//判断能否存钱
//			{
//				//存钱
//				c += (b - arr[a]) / 100 * 100;
//				b -= (arr[a] + (b - arr[a]) / 100 * 100);
//			}
//			else//不能存钱
//			{
//				b -= arr[a];
//			}
//		}
//		else//钱不够
//		{
//			result = -(++a);
//			break;
//		}
//	}
//	//结果
//	if (result == 0)
//	{
//		result = b + c * 1.2;
//	}
//	else
//	{
//		result = -result;
//	}
//	printf("%d", result);
//	return 0;
//}



//输入一行包含一个单词，单词只由小写英文字母组成。对于所有的评测用例，输入的单词长度不超过 1000。
//输出两行，第一行包含一个英文字母，表示单词中出现得最多的字母是哪个。如果有多个字母出现的次数相等，输出字典序最小的那个。
//第二行包含一个整数，表示出现得最多的那个字母在单词中出现的次数。

//V2
int main()
{
	char arr[1000] = { 0 };
	gets(arr);
	int take[26] = { 0 }, A = 0;
	while (arr[A] != '\0')
	{
		switch (arr[A])
		{
		case 'a': take[0]++; A++; break;
		case 'b': take[1]++; A++; break;
		case 'c': take[2]++; A++; break;
		case 'd': take[3]++; A++; break;
		case 'e': take[4]++; A++; break;
		case 'f': take[5]++; A++; break;
		case 'g': take[6]++; A++; break;
		case 'h': take[7]++; A++; break;
		case 'i': take[8]++; A++; break;
		case 'j': take[9]++; A++; break;
		case 'k': take[10]++; A++; break;
		case 'l': take[11]++; A++; break;
		case 'm': take[12]++; A++; break;
		case 'n': take[13]++; A++; break;
		case 'o': take[14]++; A++; break;
		case 'p': take[15]++; A++; break;
		case 'q': take[16]++; A++; break;
		case 'r': take[17]++; A++; break;
		case 's': take[18]++; A++; break;
		case 't': take[19]++; A++; break;
		case 'u': take[20]++; A++; break;
		case 'v': take[21]++; A++; break;
		case 'w': take[22]++; A++; break;
		case 'x': take[23]++; A++; break;
		case 'y': take[24]++; A++; break;
		case 'z': take[25]++; A++; break;
		}
	}
	int max = 0, word = 0;
	for (A = 0; A < 26; A++)
	{
		if (take[A] > max)
		{
			max = take[A];
			word = A;
		}
		else if (take[A] == max)
		{
			if (A < word)//字母比较
			{
				max = take[A];
				word = A;
			}
			else
			{
				;
			}
		}
	}
	printf("%c\n%d", 'a' + word, max);
}

//V1
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	int take[26] = { 0 }, A = 0;
//	while (arr[A] != '\0')
//	{
//		switch (arr[A])
//		{
//		case 'a': { take[0]++; A++; break; }
//		case 'b': { take[1]++; A++; break; }
//		case 'c': { take[2]++; A++; break; }
//		case 'd': { take[3]++; A++; break; }
//		case 'e': { take[4]++; A++; break; }
//		case 'f': { take[5]++; A++; break; }
//		case 'g': { take[6]++; A++; break; }
//		case 'h': { take[7]++; A++; break; }
//		case 'i': { take[8]++; A++; break; }
//		case 'j': { take[9]++; A++; break; }
//		case 'k': { take[10]++; A++; break; }
//		case 'l': { take[11]++; A++; break; }
//		case 'm': { take[12]++; A++; break; }
//		case 'n': { take[13]++; A++; break; }
//		case 'o': { take[14]++; A++; break; }
//		case 'p': { take[15]++; A++; break; }
//		case 'q': { take[16]++; A++; break; }
//		case 'r': { take[17]++; A++; break; }
//		case 's': { take[18]++; A++; break; }
//		case 't': { take[19]++; A++; break; }
//		case 'u': { take[20]++; A++; break; }
//		case 'v': { take[21]++; A++; break; }
//		case 'w': { take[22]++; A++; break; }
//		case 'x': { take[23]++; A++; break; }
//		case 'y': { take[24]++; A++; break; }
//		case 'z': { take[25]++; A++; break; }
//		}
//	}
//	int max = 0, word = 0;
//	for (A = 0; A < 26; A++)
//	{
//		if (take[A] > max)
//		{
//			max = take[A];
//			word = A;
//		}
//		else if (take[A] == max)
//		{
//			if (A < word)//字母比较
//			{
//				max = take[A];
//				word = A;
//			}
//			else
//			{
//				max = max;
//				word = word;
//			}
//		}
//	}
//	printf("%c\n%d", 'a' + word, max);
//}