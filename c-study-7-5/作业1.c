#include<stdio.h>
int main()
{
    printf("�����뵱��Ϊ��˾�Ĺ��ף���λΪ��Ԫ��\n");
    float n;
    scanf("%f",&n);
    if (n<=10)
        printf("Ӧ�û�õĽ���Ϊ%.4f��Ԫ",n*0.03);
    else if (n>10 && n<=40)
        printf("Ӧ�û�õĽ���Ϊ%.4f��Ԫ",(n-10)*0.05+0.3);
    else if (n>40 && n<=70)
        printf("Ӧ�û�õĽ���Ϊ%.4f��Ԫ",(n-40)*0.075+1.8);
    else if (n>70 && n<=100)
        printf("Ӧ�û�õĽ���Ϊ%.4f��Ԫ",(n-70)*0.10+4.05);
    else if (n>100)
        printf("Ӧ�û�õĽ���Ϊ%.4f��Ԫ",(n-100)*0.15+7.05);
    return 0;
}

/*
#include<stdio.h>
#include<math.h>
int main()
{
    printf("�������õ������ֵm��0<m<=2��\n");
    double m;
    double pi = 3.1415926;//��������ֵ
    scanf("%lf",&m);
    if (m<1)    //�����ֵС����Ͱ�뾶�����
    {
        double cosa=2*(1-m)*(1-m)-1;
        double a=acos(cosa);
        double s=(a/(2*pi))*pi*1*1-sqrt(1-(1-m)*(1-m))*(1-m);//���Ϊ���������ȥ����С���������
        double v=s*5;//  ��s/s�ܣ�*s��*h����Ϊs*h
        printf("�͵����Ϊ%f",v);
    }
    if (m==1)
        printf("�͵����Ϊ7.853982");
    if (m>1 && m<2)    //�����ֵ������Ͱ�뾶�����
    {
        double cosa=2*(m-1)*(m-1)-1;//cos(2��-a)=cos(a)
        double b=acos(cosa);
        double a=2*pi-b;//�����Һ���ͼ�񣬲��ѵó���ʱ�򻡶�ֵ��ʽ
        double s=(a/(2*pi))*pi*1*1+sqrt(1-(m-1)*(m-1))*(m-1);//���Ϊ�������������С���������
        double v=s*5;//  ��s/s�ܣ�*s��*h����Ϊs*h
        printf("%f",v);
    }
    if (m==2)
        printf("�͵����Ϊ15.707963");
    return 0;
}
*/
