#include<stdio.h>
#include<math.h>
//判断坐标

int main()
{
    double x,y;
    scanf("\(%lf,%lf\)",&x,&y);
    {
        if (x>0 && y>0)
            printf("该坐标在第一象限");
        else if (x<0 && y>0)
            printf("该坐标在第二象限");
        else if (x<0 && y<0)
            printf("该坐标在第三象限");
        else if (x>0 && y<0)
            printf("该坐标在第四象限");
    }
    return 0;
}


//解方程
//int main()
//{
//    double a,b,c,x1,x2,de,af,bt;
//    printf("请以空格间隔a,b,c\n");
//    scanf("%lf%lf%lf",&a,&b,&c);
//    printf("%.2f\t%.2f\t%.2f\n",a,b,c);
//    de=b*b-4*a*c;
//    {
//        if (a==0 && b != 0)
//        {   x1=(-c)/b;
//            printf("这个一元方程的解为%d",x1);
//        }
//        else if (a==0 && b  == 0)
//            printf("这不是二元一次方程");
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














//字符处理(何老师上课的时候补充的，不是作业哈)
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
