#define _CRT_SECURE_NO_WARNINGS 1
//HJ37  统计每个月兔子的总数
//#include<stdio.h>
//int main()
//{
//    int new[10000] = { 0 };
//    new[3] = 1;//第三个月要新出生一只
//    int old = 0, n, month = 3;//old是满三个月以上的
//    scanf("%d", &n);
//    if (n == 1 || n == 2)//前两个月
//        printf("1");
//    for (int i = 3;i <= n;i++)//大于三个月情况
//    {
//        if (new[i])
//        {
//            new[i + 2] = old + new[i];//这个月新出生的（三个月以上出生+刚满三个月出生的），后面要生
//            old += new[i];//加上刚满三个月出生的
//        }
//        else if (new[i] == 0)
//        {
//            new[i + 2] = old;
//        }
//    }
//    int ret = old + new[n + 1] + new[n + 2];
//    printf("%d", ret);
//    return 0;
//}


//HJ10
#include<stdio.h>
#include<string.h>
int main()
{
    char a[500] = { 0 };
    int count = 0;
    while (gets(a))
    {
        int len = strlen(a);
        for (int i = 0;i < len;i++)
        {
            int flag = 1;
            for (int j = 0;j < i;j++)
            {
                if (a[i] == a[j])
                    flag = 0;
            }
            if (flag == 1)
                count++;
        }
        printf("%d", count);
    }
    return 0;
}