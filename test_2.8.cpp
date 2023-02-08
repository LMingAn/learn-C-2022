#include<stdio.h>
#include<stdlib.h>
//bool IsPalindrome(int a)
//{
//	//b为判断数，a为被判断数
//	int b = 0, c = a;
//	while (c != 0)
//	{
//		b = b * 10 + c % 10;
//		c = c / 10;
//	}
//
//	//进行两数判断，
//	if (a == b)
//		return 1;
//	else
//		return 0;
//}
//void main()
//{
//	int i;
//	for (i = 10; i <= 10000; i++)
//	{
//		if (IsPalindrome(i) == 1)
//			printf("%d\n", i);
//	}
//	system("pause");
//}

//int isprime(int a)
//{
//	/*int i, flag = 1;
//	for (i = 2; i < a; i++)
//	{
//		if (a % i == 0)
//		{
//			flag = 0;
//			break;
//			return 0;
//		}
//		else return 1;
//	}*/
//
//	int i;
//	for (i = 2; i < a; i++)
//		if (a % i == 0)//判断是否能被1和自身以外的数整除
//			return 0;//若被1和自身以外的数整除，返回0，不输出
//	return 1;//若不能，返回1，输出
//}
//void main()
//{
//	for (int i = 2; i < 1000; i++)
//	{
//		if (isprime(i) == 1)
//			printf("%d\n", i);
//	}
//	system("pause");
//}

//int main()
//{
//	char word[2][3] = { "AB","CD"};
//	int a = 0, b = 0, c = 0, d = 0;
//	for (a = 0; a < 2; a++)
//	{
//		for (b = 0; b < 2; b++)
//			printf("%c", word[a][b]);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    //先将矩阵输入二维数组中
//    char word[30][51] =
//    {
//    "VLPWJVVNNZSWFGHSFRBCOIJTPYNEURPIGKQGPSXUGNELGRVZAG",
//    "SDLLOVGRTWEYZKKXNKIRWGZWXWRHKXFASATDWZAPZRNHTNNGQF",
//    "ZGUGXVQDQAEAHOQEADMWWXFBXECKAVIGPTKTTQFWSWPKRPSMGA",
//    "BDGMGYHAOPPRRHKYZCMFZEDELCALTBSWNTAODXYVHQNDASUFRL",
//    "YVYWQZUTEPFSFXLTZBMBQETXGXFUEBHGMJKBPNIHMYOELYZIKH",
//    "ZYZHSLTCGNANNXTUJGBYKUOJMGOGRDPKEUGVHNZJZHDUNRERBU",
//    "XFPTZKTPVQPJEMBHNTUBSMIYEGXNWQSBZMHMDRZZMJPZQTCWLR",
//    "ZNXOKBITTPSHEXWHZXFLWEMPZTBVNKNYSHCIQRIKQHFRAYWOPG",
//    "MHJKFYYBQSDPOVJICWWGGCOZSBGLSOXOFDAADZYEOBKDDTMQPA",
//    "VIDPIGELBYMEVQLASLQRUKMXSEWGHRSFVXOMHSJWWXHIBCGVIF",
//    "GWRFRFLHAMYWYZOIQODBIHHRIIMWJWJGYPFAHZZWJKRGOISUJC",
//    "EKQKKPNEYCBWOQHTYFHHQZRLFNDOVXTWASSQWXKBIVTKTUIASK",
//    "PEKNJFIVBKOZUEPPHIWLUBFUDWPIDRJKAZVJKPBRHCRMGNMFWW",
//    "CGZAXHXPDELTACGUWBXWNNZNDQYYCIQRJCULIEBQBLLMJEUSZP",
//    "RWHHQMBIJWTQPUFNAESPZHAQARNIDUCRYQAZMNVRVZUJOZUDGS",
//    "PFGAYBDEECHUXFUZIKAXYDFWJNSAOPJYWUIEJSCORRBVQHCHMR",
//    "JNVIPVEMQSHCCAXMWEFSYIGFPIXNIDXOTXTNBCHSHUZGKXFECL",
//    "YZBAIIOTWLREPZISBGJLQDALKZUKEQMKLDIPXJEPENEIPWFDLP",
//    "HBQKWJFLSEXVILKYPNSWUZLDCRTAYUUPEITQJEITZRQMMAQNLN",
//    "DQDJGOWMBFKAIGWEAJOISPFPLULIWVVALLIIHBGEZLGRHRCKGF",
//    "LXYPCVPNUKSWCCGXEYTEBAWRLWDWNHHNNNWQNIIBUCGUJYMRYW",
//    "CZDKISKUSBPFHVGSAVJBDMNPSDKFRXVVPLVAQUGVUJEXSZFGFQ",
//    "IYIJGISUANRAXTGQLAVFMQTICKQAHLEBGHAVOVVPEXIMLFWIYI",
//    "ZIIFSOPCMAWCBPKWZBUQPQLGSNIBFADUUJJHPAIUVVNWNWKDZB",
//    "HGTEEIISFGIUEUOWXVTPJDVACYQYFQUCXOXOSSMXLZDQESHXKP",
//    "FEBZHJAGIFGXSMRDKGONGELOALLSYDVILRWAPXXBPOOSWZNEAS",
//    "VJGMAOFLGYIFLJTEKDNIWHJAABCASFMAKIENSYIZZSLRSUIPCJ",
//    "BMQGMPDRCPGWKTPLOTAINXZAAJWCPUJHPOUYWNWHZAKCDMZDSR",
//    "RRARTVHZYYCEDXJQNQAINQVDJCZCZLCQWQQIKUYMYMOVMNCBVY",
//    "ABTCRRUXVGYLZILFLOFYVWFFBZNFWDZOADRDCLIRFKBFBHMAXX"
//    };
//
//    //再进行递增序列的判断，先行，后列，最后斜线；先从上向下，再从左向右（没有竖直水平的反方向）
//    int row = 0, col = 0, num = 0;
//    long sum = 0;
//
//    //行循环
//    for (row = 0; row < 30; row++)
//    {
//        //列循环
//        for (col = 0; col < 30; col++)
//        {
//            //开始进行判断，首先要创建用于判断的第二个字母
//            //从上向下
//            for (num = 0; (num + row) < 30; num++)
//            {
//                if (word[row + num][col] > word[row][col])
//                    sum++;
//            }
//
//            //从左向右
//            for (num = 0; (num + col) < 50; num++)
//            {
//                if (word[row][col + num] > word[row][col])
//                    sum++;
//            }
//
//            //从左上向右下
//            for (num = 0; (num + row) < 30 && (num + col) < 50; num++)
//            {
//                if (word[row + num][col + num] > word[row][col])
//                    sum++;
//            }
//
//            //从左下向右上
//            for (num = 0; (row - num) >= 0 && (col + num) < 50; num++)
//            {
//                if (word[row - num][col + num] != word[row][col])
//                    sum++;
//            }
//        }
//    }
//
//    printf("%d", sum);
//    return 0;
//}

#include<stdlib.h>
#include<stdio.h>
#include<string.h> 
int main()
{
    char str[30][51] =
    {
    "VLPWJVVNNZSWFGHSFRBCOIJTPYNEURPIGKQGPSXUGNELGRVZAG",
    "SDLLOVGRTWEYZKKXNKIRWGZWXWRHKXFASATDWZAPZRNHTNNGQF",
    "ZGUGXVQDQAEAHOQEADMWWXFBXECKAVIGPTKTTQFWSWPKRPSMGA",
    "BDGMGYHAOPPRRHKYZCMFZEDELCALTBSWNTAODXYVHQNDASUFRL",
    "YVYWQZUTEPFSFXLTZBMBQETXGXFUEBHGMJKBPNIHMYOELYZIKH",
    "ZYZHSLTCGNANNXTUJGBYKUOJMGOGRDPKEUGVHNZJZHDUNRERBU",
    "XFPTZKTPVQPJEMBHNTUBSMIYEGXNWQSBZMHMDRZZMJPZQTCWLR",
    "ZNXOKBITTPSHEXWHZXFLWEMPZTBVNKNYSHCIQRIKQHFRAYWOPG",
    "MHJKFYYBQSDPOVJICWWGGCOZSBGLSOXOFDAADZYEOBKDDTMQPA",
    "VIDPIGELBYMEVQLASLQRUKMXSEWGHRSFVXOMHSJWWXHIBCGVIF",
    "GWRFRFLHAMYWYZOIQODBIHHRIIMWJWJGYPFAHZZWJKRGOISUJC",
    "EKQKKPNEYCBWOQHTYFHHQZRLFNDOVXTWASSQWXKBIVTKTUIASK",
    "PEKNJFIVBKOZUEPPHIWLUBFUDWPIDRJKAZVJKPBRHCRMGNMFWW",
    "CGZAXHXPDELTACGUWBXWNNZNDQYYCIQRJCULIEBQBLLMJEUSZP",
    "RWHHQMBIJWTQPUFNAESPZHAQARNIDUCRYQAZMNVRVZUJOZUDGS",
    "PFGAYBDEECHUXFUZIKAXYDFWJNSAOPJYWUIEJSCORRBVQHCHMR",
    "JNVIPVEMQSHCCAXMWEFSYIGFPIXNIDXOTXTNBCHSHUZGKXFECL",
    "YZBAIIOTWLREPZISBGJLQDALKZUKEQMKLDIPXJEPENEIPWFDLP",
    "HBQKWJFLSEXVILKYPNSWUZLDCRTAYUUPEITQJEITZRQMMAQNLN",
    "DQDJGOWMBFKAIGWEAJOISPFPLULIWVVALLIIHBGEZLGRHRCKGF",
    "LXYPCVPNUKSWCCGXEYTEBAWRLWDWNHHNNNWQNIIBUCGUJYMRYW",
    "CZDKISKUSBPFHVGSAVJBDMNPSDKFRXVVPLVAQUGVUJEXSZFGFQ",
    "IYIJGISUANRAXTGQLAVFMQTICKQAHLEBGHAVOVVPEXIMLFWIYI",
    "ZIIFSOPCMAWCBPKWZBUQPQLGSNIBFADUUJJHPAIUVVNWNWKDZB",
    "HGTEEIISFGIUEUOWXVTPJDVACYQYFQUCXOXOSSMXLZDQESHXKP",
    "FEBZHJAGIFGXSMRDKGONGELOALLSYDVILRWAPXXBPOOSWZNEAS",
    "VJGMAOFLGYIFLJTEKDNIWHJAABCASFMAKIENSYIZZSLRSUIPCJ",
    "BMQGMPDRCPGWKTPLOTAINXZAAJWCPUJHPOUYWNWHZAKCDMZDSR",
    "RRARTVHZYYCEDXJQNQAINQVDJCZCZLCQWQQIKUYMYMOVMNCBVY",
    "ABTCRRUXVGYLZILFLOFYVWFFBZNFWDZOADRDCLIRFKBFBHMAXX"
    };
    int i, j, l;
    int m, n;//斜向坐标
    int count = 0;
    for (i = 0; i < 30; i++)
        for (j = 0; j < 50; j++)//以上两层遍历判断每一个元素
        {
            for (l = j; l < 50; l++)//横向
                if (str[i][j] < str[i][l])
                    count++;

            for (l = i; l < 30; l++)//纵向
                if (str[i][j] < str[l][j])
                    count++;

            for (m = i, n = j; m < 30 && n < 50; m += 1, n += 1)//右下,斜向
                if (str[i][j] < str[m][n])
                    count++;

            for (m = i, n = j; m >= 0 && n < 50; m -= 1, n += 1)//右上,斜向
                if (str[i][j] != str[m][n])                  //之所以是!=，1、当右上角大于左下角，从上到下看是递减，但是从左到右是递增，所以符合要求。2、当右上角小于左下角，从上到下看是递增，所以符合要求。
                    count++;
        }

    printf("%d",count);    //网页编译器有误，放到Dev++上编译运行
    //printf("52800");
    return 0;
}