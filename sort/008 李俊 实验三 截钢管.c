#include<stdio.h>
int main()//5.16 �ظֹ�
{
    int a,b,c[5];
    for (int i=1;i<=5;i++)
    {
        a=23*i;
        c[i]=(133-a)%19;
        printf("%d\t",c[i]);
    }
    printf("\n23m���ĸ���23m��2��ʱ��ʣ�������̣�Ϊ3m");
    return 0;
}
