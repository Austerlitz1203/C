#include<stdio.h>
//输出图形；
int main()
{
    int x;
    printf("请输入你需要打印几行\n");
    scanf("%d",&x);//输入需要几行
    for (int i=1;i<=x;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("A");
        }
        printf("\t\t");
        for (int j=1;j<=i;j++)
        {
            printf("A");
        }
        printf("\n");
    }
}
