#include<stdio.h>
//��°ͺղ���
int prime(int n)
{
    int i;
    for (i=2;i<n;i++)
        if (n%i==0) return 0;//��������
    return 1;//������
}
int main()
{
    int x,j,flag=0;
    scanf("%d",&x);
    for (j=3;j<x;j++)
    {
        int a=x-j;
        if (prime(j)==1 && prime(a)==1)
        {
            flag=1;//���������flagֵΪ1
            break;
        }
    }
    printf("%d",flag);//Ϊ1�������0�򲻳���
    return 0;
}
