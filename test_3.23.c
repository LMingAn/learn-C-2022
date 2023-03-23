#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//int main()
//{
//    long l = 0, w = 0, h = 0, sum = 0, n = 2021041820210418;
//    for (l = 1; l <= n; l++)
//    {
//        for (w = 1; w <= (n / l); w++)
//        {
//            for (h = 1; h <= (n / l / h); h++)
//            {
//                if (l * w * h == n)
//                    sum++;
//            }
//        }
//    }
//    printf("%ld", sum);
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

//求胡同里的其它门牌号总和，就是求这个等差数列的和
//等差数列求和公式：Sn=n*a1+n(n-1)d/2或Sn=n(a1+an)/2
int main()
{
    int num = 0, home = 0;
    for (home = 2; home <= 100; home++)//最小门牌号
    {
        for (num = 3; num <= 100; num++)//门牌号 - 总户数为num + 1
        {
            if ((num + 1) * (home + (num + 1)) / 2 - num == 100 && num > home)//由上述式子可知，n=num+1,a1=home,an=num+1(假设小明家的右边是最后一位住户)
                break;
        }
        if ((num + 1) * (home + (num + 1)) / 2 - num == 100 && num > home)
            break;
    }
    printf("%d", num);
    return 0;
}