#include<stdio.h>
//5.3ˮ�ɻ���
int main()
{
    int x,y=0,a[3];
    printf("������һ����λ��\n");
    scanf("%d",&x);
    int tem=x;
    for (int i=1;i<=2;i++)
    {
        a[i]=x%10;
        x/=10;
    }
    a[3]=x;
    for (int j=1;j<=3;j++)
    {
        y+=a[j]*a[j]*a[j];
    }
    if (tem==y)
        printf("�������ˮ�ɻ���,��Ϊ%d=%d^3+%d^3+%d^3",tem,a[3],a[2],a[1]);
    else printf("���������ˮ�ɻ���,��Ϊ%d!=%d^3+%d^3+%d^3",tem,a[3],a[2],a[1]);
    return 0;
}
