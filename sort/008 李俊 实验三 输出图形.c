#include<stdio.h>
//���ͼ�Σ�
int main()
{
    int x;
    printf("����������Ҫ��ӡ����\n");
    scanf("%d",&x);//������Ҫ����
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
