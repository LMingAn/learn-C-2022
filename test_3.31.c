#include<stdio.h>

//int main()
//{
//    int n[55] = { 0 }, add = 0, a = 0;
//    do
//    {
//        scanf("%d", &n[a]);
//        a++;
//    } while (n[a]);
//    a = 0;
//    while (n[a] != 0)
//    {
//        if (n[a] - 4 > 0)
//            add = n[a] - 4;
//        printf("%d\n", n[a] + add);
//        a++;
//    }
//    return 0;
//}
//
//
//int main()
//{
//    int num[60] = { 0 }, a = 0, n = 0;
//    num[0] = 1;
//    num[1] = 2;
//    num[2] = 3;
//    for (a = 3; a < 60; a++)
//        num[a] = num[a - 1] + num[a - 3];
//    while (1)
//    {
//        scanf("%d", &n);
//        if (n == 0)
//            break;
//        printf("%d\n", num[n - 1]);
//    }
//    return 0;
//}



int main()
{
    int k = 0, num[10000][10000] = { 0 }, a = 0, b = 0, max[10000] = { 0 }, maxsum1 = 0, maxsum2 = 0, maxsum3 = 0, row = 0, col = 0;
    while (1)
    {
        scanf("%d", &k);
        if (k == 0)
            break;
        for (col = 0; col < k; col++)
            scanf("%d", &num[row][col]);
        //寻找最大连续子序列

        for (a = 0; a < k - 1; a++)
        {
            maxsum1 = num[row][a];
            maxsum2 = maxsum1;
            for (b = a + 1; b < k; b++)
            {
                maxsum2 += num[row][b];
                if (maxsum1 < maxsum2)
                    maxsum1 = maxsum2;
            }
            if (maxsum3 < maxsum1)
                maxsum3 = maxsum1;
        }
        printf("%d ", maxsum3);
        maxsum3 = 0;
        row++;
    }
    return 0;
}