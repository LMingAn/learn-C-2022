#include<stdio.h>
int main()
{
    float x, a = 0, b;
    int c = 0;
    scanf_s("%f", &x);
    for (b = 2; b >= 0;)
    {
        a = a + b;
        b = b * 0.98;
        c++;
        if (a >= x)
        {
            printf("%d", c);
            break;
        }
    }
    return 0;
}