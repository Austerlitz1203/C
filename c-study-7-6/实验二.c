#include<stdio.h>
#include<math.h>
//�ж�����

int main()
{
    double x,y;
    scanf("\(%lf,%lf\)",&x,&y);
    {
        if (x>0 && y>0)
            printf("�������ڵ�һ����");
        else if (x<0 && y>0)
            printf("�������ڵڶ�����");
        else if (x<0 && y<0)
            printf("�������ڵ�������");
        else if (x>0 && y<0)
            printf("�������ڵ�������");
    }
    return 0;
}


//�ⷽ��
//int main()
//{
//    double a,b,c,x1,x2,de,af,bt;
//    printf("���Կո���a,b,c\n");
//    scanf("%lf%lf%lf",&a,&b,&c);
//    printf("%.2f\t%.2f\t%.2f\n",a,b,c);
//    de=b*b-4*a*c;
//    {
//        if (a==0 && b != 0)
//        {   x1=(-c)/b;
//            printf("���һԪ���̵Ľ�Ϊ%d",x1);
//        }
//        else if (a==0 && b  == 0)
//            printf("�ⲻ�Ƕ�Ԫһ�η���");
//        else if (a!=0 && de < 0)
//            {   af=(-b)/(a*2.0);
//                bt=(sqrt(-de))/(a*2.0);
//                printf("x1=%.2f+%.2fi \nx2=%.2f-%.2fi \n",af,bt,af,bt);
//            }
//        else if (a!=0 && de == 0)
//            {   x1=(-b)/(a*2.0);
//                printf("x1=x2=%.2f",x1);
//            }
//        else if (a!=0 && de > 0)
//            {   x1=(-b+sqrt(de))/(a*2.0);
//                x2=(-b-sqrt(de))/(a*2.0);
//                printf("x1=%.2f\nx2=%.2f\n",x1,x2);
//            }
//    }
//}



//int main()
//{
//    int i=1,j=0,m=1,k;
//    for (i = 1; i <= m;)
//        {
//            j++;
//            k = i*j;
//            printf("%d*%d=%d\t",i,j,k);
//            if (i == m && j == m)
//            {
//                m++;
//                i++;
//                j = 0;
//                printf("\n");
//            }
//            if(i > 9) break;
//        }
//}














//�ַ�����(����ʦ�Ͽε�ʱ�򲹳�ģ�������ҵ��)
//main()
//{
//    int i,n1,n2,n3,n4;
//    char s[100];
//    n1=n2=n3=n4;
//    gets(s);
//    for (i = 0;s[i] != '\0';i++ )
//        //if (s[i] >= 'A' && s[i] <= 'Z')
//
//}

//main()
//{
//    int i,n1=0,n2,n3,n4;
//    char c,s[100];
//    c=getchar();
//    while (c!='#')
//    //while ((c=getchar())!=-1)
//    {
//        if(c >= 'A' && c<= 'Z')
//            n1++;
//        c=getchar();
//        putchar(c);
//    }
//}
