#include<stdio.h>
int main()
{
    int a;
    scanf_s("%d", &a);
    float x = 0, b = 0, c = 0, d = 0;
    if (a >= 0 && a <= 150)
    {
        x = a * 0.4463;
        printf("%.1f", x);
    }
    else if (a > 150 && a <= 400)
    {
        b = 150 * 0.4463;
        c = (a - 150) * 0.4663;
        x = b + c;
        printf("%.1f", x);
    }
    else
    {
        b = 150 * 0.4463;
        c = 250 * 0.4663;
        d = (a - 400) * 0.5663;
        x = b + c + d;
        printf("%.1f", x);
    }
    return 0;
}