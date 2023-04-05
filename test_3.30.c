#include<stdio.h>

//int main()
//{
//    long long day = 0, n = 0, a = 0, b = 0, week = 0;
//    scanf("%lld %lld %lld", &a, &b, &n);
//    while (n > 0)
//    {
//        if (n - 5 * a <= 0)
//        {
//            while (n > 0)
//            {
//                n -= a;
//                day++;
//            }
//            break;
//        }
//        else if (n - 5 * a - 2 * b <= 0)
//        {
//            n -= 5 * a;
//            day += 5;
//            while (n > 0)
//            {
//                n -= b;
//                day++;
//            }
//            break;
//        }
//        else
//        {
//            week = n / (5 * a + 2 * b);
//            n -= week * (5 * a + 2 * b);
//            day += 7 * week;
//        }
//    }
//    printf("%lld", day);
//    return 0;
//}


#include<stdio.h>

//int main()
//{
//    long long time = 0, h = 0, m = 0, s = 0;
//    scanf("%lld", &time);
//    time /= 1000;
//    s = time % 60;
//    m = time / 60 % 60;
//    h = time / 3600 % 24;
//    if (h < 10)
//        printf("0%lld", h);
//    else
//        printf("%lld", h);
//    printf(":");
//    if (m < 10)
//        printf("0%lld", m);
//    else
//        printf("%lld", m);
//    printf(":");
//    if (s < 10)
//        printf("0%lld", s);
//    else
//        printf("%lld", s);
//    return 0;
//}



long long take(num)
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, sum = 0;
    e = num % 10;
    d = num / 10 % 10 * 10;
    c = num / 100 % 10 * 100;
    b = num / 1000 % 10 * 1000;
    a = num / 10000 % 10 * 10000;
    sum = 600000 + a + b + c + d + e;
    return sum;
}

int main()
{
    long long num[200] = { 0 };
    int N = 0, n = 0;
    scanf("%d", &N);
    for (n = 0; n < N; n++)
    {
        scanf("%lld", &num[n]);
        printf("%d\n", take(num[n]));
    }
    return 0;
}