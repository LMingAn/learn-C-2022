#include<stdio.h>
#include<string.h>


//int main()
//{
//    int num = 1, sum = 2021;
//    while (sum)
//    {
//        if (num % 10 == 1)
//            sum--;
//        if (num / 10 % 10 == 1)
//            sum--;
//        if (num / 100 % 10 == 1)
//            sum--;
//        num++;
//    }
//    printf("%d", num);
//    return 0;
//}



//int main()
//{
//    char word[1000] = { 0 };
//    gets(word);
//    int sum[26] = { 0 }, max = 0, a = 0;
//    for (a = 0; a < strlen(word); a++)
//        sum[word[a] - 'a']++;
//    for (a = 0; a < 26; a++)
//    {
//        if (sum[a] > sum[max])
//            max = a;
//    }
//    printf("%c\n%d", 97 + max, sum[max]);
//    return 0;
//}



//int main()
//{
//    int w = 0, n = 0, price[30000] = { 0 }, head = 0, end = 0, use = 0, group = 0;//head为前下标，end为后下标，use为已分组的纪念品数量
//    scanf("%d %d", &w, &n);
//    for (int a = 0; a < n; a++)
//        scanf("%d", &price[a]);
//    //分组前先排序
//    for (int a = 0; a < n; a++)
//    {
//        for (int b = 0; b < (n - a); b++)
//        {
//            if (price[b] > price[b + 1])
//            {
//                price[b] = price[b] ^ price[b + 1];
//                price[b + 1] = price[b] ^ price[b + 1];
//                price[b] = price[b] ^ price[b + 1];
//            }
//        }
//    }
//    //进行分组
//    end = n;
//    while (end > head)
//    {
//        if (price[head] + price[end] <= w)
//        {
//            head++;
//            end--;
//            use += 2;
//            group++;
//        }
//        else
//        {
//            end--;
//            group++;
//            use++;
//        }
//    }
//    if (end == head)
//        group++;
//    printf("%d", group);
//    return 0;
//}




//int max(a, b)
//{
//    if (a > b)
//        return a;
//    else
//        return b;
//}
//
//int main()
//{
//    int num[1000][1000] = { 0 }, r = 0, sum = 0, row = 0, col = 0;//如果定义数组栈溢出需要在属性里的链接器修改栈上限
//    scanf("%d", &r);
//    for (row = 1; row <= r; row++)
//        for (col = 1; col <= row; col++)
//        {
//            scanf("%d", &num[row][col]);
//            num[row][col] += max(num[row - 1][col - 1], num[row - 1][col]);
//            sum = max(sum, num[row][col]);
//        }
//    printf("%d", sum);
//    return 0;
//}