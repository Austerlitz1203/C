//ţ�ٵ�����
/*
#include<stdio.h>
#include<math.h>

double f(double x)
{
    return x*x*x;
}
double df(double x)
{
    return 3*x*x-10*x+16;
}


main()
{
    double x,x0;
    x=1;
    while(fabs(f(x)) > 0.001)
    {
        x0=x;
        x=x0-f(x0)/df(x0);
        printf("%f  %f  %f\n",x,x0,f(x));
    }
}
*/


//����Ԥ����
//�궨��    ���������Ķ���    #define  ��ʶ����������    �ַ��������룩
//����һ���д��ĸ
//����ַ���һ��װ���£����Էŵ���һ�У�ֻ��Ҫ����һ�н�β��һ��\


/*
�������ĺ궨��
define�ͺ���֮��û�пո�
#defineS(a,h) 0.5*a*h

ֱ���滻����е�滻��
#defineS(a,h) 0.5*a*h
area=(5+3,2); //area=0.5*5+3*2

������ #defineS(x) x*x
S(i++)��������i*(i+1);���ܻ���Ϊ��i*i;

ȡ���궨��  #undefine ����
*/

#include<stdio.h>
#define N 10+2
#define S(x) x*x
int main()
{
    int a=10,b=2,c=4,x,y;
    x=a*N*b;
    printf("%d\n",x);
    y=S(c++);
    printf("%d",y);
}


/*
�ļ�����
#include<> �����ã�
#include"" �ȵ���ǰ����Ŀ¼�����ң��ٵ�ϵͳ������
*/

/*
��������

#ifdef<��ʶ��>
   �����1
#else
   �����2
#endif


#ifndef<��ʶ��>
   �����1
#else
   �����2
#endif
*/



/*
ָ��
����ָ������� <����> *<������ʶ��>��*<������ʶ��>����;
int *PX;       ���������ָ��ָ�����ָ�������
float *q;

ָ�������ʹ��
& :ȡ��ַ�����
* :ָ�������(ȡ���������)


*/

//#include<stdio.h>
//int main()
//{
//    int a,b;
//    int *p;
//    a=10,b=100;
//    printf("%d %d \n",a,b);
//    p=&a;
//    printf("%d %d \n",&a,*p);
//}
