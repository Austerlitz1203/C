//�ɱ���� ʵ�ַ���1
//#include<stdio.h>
//douvle f(double x,int n,double a1��...)
//{
//    double s,*p;
//    for (p=&a1,s=*p++;n>0;--n)
//    {
//        s=s*x+*p;
//        ++p;
//    }
//    return s;
//}
//main ()
//{
//  double y;
//  y=f(2.0,3,1.0,2.0,3.0,4.0);
//  printf("%.2f\n",y);
//  y=f(2.0,2,2.5,3.5.4.5);
//  printf("%.2f\n",y);
//}

//�ɱ����ʵ�ַ���2
//#include<stdarg.h> ����� va_list����
//    va_start()��ʼ��
//    va_arg()��ȡ����
//    va_end()������ȡ������ʹ��
//#include<stdio.h>
//#include<stdarg.h>
//void test(int f_arg,...)
//{
//    int i1,i2,i3,i4;
//    char *s1;
//    float f1;
//    va_list ptr;
//    va_start(ptr,f_arg);//��f_arg��ʼ������ô��һ����������һ��
//    i1=va_arg(ptr,int);
//    i2=va_arg(ptr,int);
//    i3=va_arg(ptr,int);
//    i4=va_arg(ptr,int);
//    s1=va_arg(ptr,char);
//    f1=va_arg(ptr,double);
//}
//
//main()
//{
//    test(1,2,3,4,5,"Hi!",3.14);
//}



//���������ǰ����void����ô��������ֻ����return�����ܼӱ��ʽ
//�������  return <���ʽ>;  ���� return;
//


//�ݹ�
#include<stdarg.h>
#include<stdio.h>

long fact1(int n)
{
       long t=1;
       int i;
       for (i=1;i<=n;i++)
        t*=i;
       return t;
}

long fact2(int n)
{
    if (n==1) return 1;
    else return n*fact2(n-1);
}

int gcd(m,n)
{
    if (m%n == 0) return n;
    else return gcd(n,m%n);
}

main()
{
    printf("%d",fact2(5));
}
