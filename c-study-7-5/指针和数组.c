//#include<stdio.h>
//int f(int x)
//{
//    if (x>0)
//    {   printf("%d",x%10);
//        f(x/10);
//    }
//    else return 0;
//}
//int main()
//{
//    f(1234);



/*
��5.11
����  int *p;
��ʼ��  p=&x; p��������x�ĵ�ַ    p=0;������ĳ�ʼ������ʾʲô����ָ��;
����  p+q;  p-q;
Ӧ��

p  ��Ӧ &x
*p ��Ӧ x

��� p=&a[0];
     p+1 = &a[1];
     p+i=&a[i];

*p=a[0];
*(p+i)=a[i];

*/

//��ָ��Ԫ�ش洢���Ԫ�ص�ֵ
//#include<stdio.h>
//int main()
//{
//    int a[5],i,*p;
//    for (int i=0;i<5;i++)
//        scanf("%d",&a[i]);
//    for (int i=1,p=&a[0];i<5;i++)
//        {if (a[i] > *p) p=&a[i];}
//    printf("%d",*p);
//}


//ָ�������
// *p=&a;  ��p=a; ����
//https://blog.csdn.net/qq_32097581/article/details/75565077
/*
a[100]
������a��һ����ַ   ��a��a[0]�ȼۣ�
����Ԫ��a[i]��һ������ ����ȥ��ַ  ����&a[i]��һ����ַ

a+1
a+i���ǵ�ַ�����Խ������㣩
*(a+i)=a[i];

p=a
�������Ӧ  *(a+i);  *(p+i); p[i]; a[i]; ����һ����

ap1 �� ap2 ָ��ͬһ�����飬ap1-ap2ָ��������ָ���Ԫ�ظ���
ap1+ap2������
ap+i;ap-i;����

p=N;  ���ҽ���N=0��ʱ��������
*/
#include<stdio.h>
//void inverse(int a[],int n)
//{
//    int j,t;
//    for (int j=0;j<n/2;j++)
//    {
//        t=*(a+j);
//        *(a+j)=*(a+n-j-1);
//        *(a+n-j-1=t;
//    }
//}

//void show(int a[],int n)
//{
//    int *p=a;
//    for (;p<a+n;p++)
//        printf("%d  ",*p);
//    printf("\n");
//}
//int main()
//{
////    int a[20],*ap;
////    ap=&a[2];  // ap=a;  �� ap=&a[0]�ȼ�
//    int a[10],*p,i,j,l,t;
//    p=a;
//    for (int i=0;i<10;i++)
//        *(p+i)=rand()%100;
//    show(a,10);
//    for (int i=0;i<9;i++)
//        {
//            l=i;
//            for (int j=i+1;j<10;j++)
//            {
//                if ( *(a+l) > *(a+j) ) l=j;
//            }
//            t=*(p+i),a[i]=a[l],a[l]=t;
//        }
//    show(a,10);
//}


//�ַ�����
//#include<stdio.h>
//int main()
//{
//    char *s="************";
//    char s1[20]="%20.5s\n";
//    for (int i=0;i<5;i++)
//     {
//         s1[4]='0'+2*i+1;
//         s1[2]='0'+i;
//         printf(s1,s);
//     }
//}


/*
ָ��ͺ���




*/


#include<stdio.h>
swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
swap1(int *a,int *b)
{
    int t;
    t=*a,*a=*b,*b=t;
}

int *fmax(int *a,int n)  //������ǰ���һ��*�������������һ����ַ
{
    int *p;
    p=a;
    for (int i=1;i<n;i++)
        if ( *p < *(a+i) ) p=a+i;
    return p;
}

main()
{
    int x,y,*p;
    int a[5]={7,1,15,2,3};
//    x=10,y=20;
//    printf("%d  %d\n",x,y);
//    swap(x,y);
//    printf("%d  %d\n",x,y);
//    swap1(&x,&y);
//    printf("%d  %d\n",x,y);
    x=*(fmax(a,5));
    p=fmax(a,5);
    printf("%d   %d   %d",x,*p,p-a);

}


//ָ����Ϊ�����ķ���ֵ





