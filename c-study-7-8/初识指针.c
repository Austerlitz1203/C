/*
ָ������ָ��
�������� (*<����ָ���ʶ��>)(�β�����)
float(*fp)()
����ָ���������ָ��������ڣ���������Ҫƥ��
����ָ�벻���Խ������� +��-��++�ȶ�����
����ָ����Է��������У�Ҳ������Ϊ������������
*/

//����ָ�����ָ�������
//if ()



//����ָ����Ϊ��������
//#include<stdio.h>
//int add(int x,int y)
//{
//    return x+y;
//}
//
//int sub(int x,int y)
//{
//    return x-y;
//}
//
//cal(int (*fp)(),int a,int b)
//{
//    int t;
//    t=(*fp)(a,b);
//    return t;
//}
//
//int main()
//{
//    int x=5,y=6;
//    int z,m;
//    z=cal(sub,x,y);
//    m=cal(add,x,y);
//    printf("%d\n",z);
//    printf("%d\n",m);
//}


/*
  �༶ָ��
  <��������>**<������ʶ��>
  int **ppx;
  int x=10,*p,**q;
  q   ��Ӧ &p        p   &x
  *q  ��Ӧ p         *p   x
  **q ��Ӧ *p             x

*/

//#include<stdio.h>
//int main()
//{
//    int x,*p,**q;
//    x=10;
//    p=&x,q=&p;
//    printf("%x  %x  %x  \n",&x,p,*q);
//    printf("%d  %d  %d  \n",x,*p,**q);
//}


/*
ָ�����飺�±������ָ�루�൱�ڶ�ά���飩


*/


#include<stdio.h>
main()
{
    static char *strings[5]={"AHSUIA","SABHJ","XBHJA","AUSHJBAS","ZHJKAA"};
    char **p,*q,ch;
    scanf("%c",&ch);
    for (p=strings;p<strings+5;p++)
    {
        //printf("%s\n",*(*p));
        q=*p;
        printf("%d\n",&q);
        while(*q != ch  && *q != '\0')
            q++;
        if (*q !='\0')
        {
            printf("%d the string position is %d\n",p-strings+1,q-*p+1);
            break;
        }

    }
}


/*
�༶ָ��Ͷ�ά����

����  int  a[i][j];������
a    ��ά�����׵�ַ�����ǵ�0���׵�ַ
a+i  ��i���׵�ַ
a[i]   =   *(a+i)  ��i�е�0��Ԫ�ص�ַ
a[i]+j  =  *(a+i)+j  ��i�е�j��Ԫ�ص�ַ
*(a[i]+j) =  *(*(a+i)+j)  =  a[i][j]

*/

//#include<stdio.h>
//int main()
//{
//    int a[3][4],*p;
//    p=a[0];
//}


/*
����ָ��(��ָ��)
���� (*p)[N];

�࿴�������������
*/
//#include<stdio.h>
//#include<stdlib.h>
//main()
//{
//    int a[3][4],i,j,k,(*p)[4];
//    p=a;
//    for (int i=0;i<3;i++)
//        for (j=0;j<4;j++)
//        p[i][j]=i*10+j;
//    for (int i=0;i<3;i++)
//      {
//        for (j=0;j<4;j++)
//        printf("%-4d",p[i][j]);
//        printf("\n");
//      }
//      for (int i=0;i<3;i++)
//      {
//        for (j=0;j<4;j++)
//        printf("%-4d",*(*(p+i)+j));
//        printf("\n");
//      }
//}

/*
�����в���
main(int x,���� *p[])
*/


/*
#include<stdio.h>
#include<stdlib.h>
main(int c,char *s[])
{
//    int a[3][4],i,j,k,(*p)[4];
//    p=a;
//    for (int i=0;i<3;i++)
//        for (j=0;j<4;j++)
//        p[i][j]=i*10+j;
//    for (int i=0;i<3;i++)
//      {
//        for (j=0;j<4;j++)
//        printf("%-4d",p[i][j]);
//        printf("\n");
//      }
//      for (int i=0;i<3;i++)
//      {
//        for (j=0;j<4;j++)
//        printf("%-4d",*(*(p+i)+j));
//        printf("\n");
//      }
      {
          int i;

          for (i=0;i<c;i++)
            printf("%d: %s\n",i,s[i]);
      }
}
*/
