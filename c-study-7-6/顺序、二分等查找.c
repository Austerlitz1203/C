//查找算法，  顺序查找   二分查找

//顺序查找
//给一组数据，查找方向从前往后或者从后往前，依次对每个位置进行比较
//#include<stdio.h>
//int main()
//{
//    int a[10]={1,3,5,7,9,4,6,0,8,2};
//    int x=9,i;
//    for (i=0;i<10;i++)
//        {if (a[i] == x)
//        break;}  // 存在性查找   ，也可以计算重复次数，cnt++
//    if (i<10)
//        printf("find at %d\n",i);
//    else printf("not found");
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int a[]={0,1,3,5,7,9,0,2,4,6};
//    int i,x=90;
//    a[0]=x;
//    i=10;
//    while (a[i]=a[0])
//        if (a[i] != a[0])  i--;
//    if (i)       //
//        printf ("find");
//    else printf("no");
//    return 0;
//}


//二分查找
//#include<stdio.h>
//int main()
//{
//    int a[]={0,1,3,5,7,9,14,16,20};
//    int i,x=5,middle,left=0,right=10;
//    while ( left < right)
//    {
//        middle=(right+left)/2;
//        printf("%d  %d  %d\n",left,middle,right);
//        if (a[middle] == x)  break;
//        else if (a[middle] > x)
//            right=middle - 1;
//        else
//            left=middle + 1;
//    }
//    if (left<right)
//        printf("find");
//    else printf("no");
//    return 0;
//}


//找素数
//#include<stdio.h>
//int main()
//{
//    int a[110],i,j,k;
//    for (int i=0;i<100;i++)
//        a[i]=i;
//    for (int i=2;i<10;i++)
//    {
//        j=2;
//        while (j*i<100)   //2-9的倍数全部删去
//        {
//            a[j*i]=0;
//            j++;
//        }
//    }
//    for (int i=0;i<100;i++)
//    {
//        if (a[i])
//            printf("%-4d",a[i]);
//    }
//    return 0;
//}



//二维数组
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int a[3][6]={0};
//    for (int i=0;i<3;i++)
//    {
//        for (int j=0;j<4;j++)
//        {
//        a[i][j]=rand()%100;
//        a[i][4]+=a[i][j];
//        }
//        a[i][5]=a[i][4]/4;
//    }
//    for (int i=0;i<3;i++)
//        {
//            for (int j=0;j<6;j++)
//              printf("%-4d",a[i][j]);
//            printf("\n");
//        }
//    return 0;
//}

//字符数组
//每一个元素只存放一个字符型数据
//初始化两种方法：
//1.单个字符初始化，把字符逐个赋给数组中每个元素
//2.直接用字符串常量给数组赋初值，这时候要留出最后一位空间存\0
// char c[5]={'c','h','i','n','a'};
// char c[6]="china";
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    char s[100];
//    int i;
//    scanf(" %s",s);   第一种方式，后面有空格的话，空格后面的不读入
//    gets(s);          第二种方式，读入怎样输出怎样
//
//    /*while ((s[i++]=getchar()) != '#')
//        ;
//    s[i]='\0';
//    */
//    while (i<20)
//        s[i++]=65+rand()%26;//随机输入,32--127是可输入字符
//    i=0;
//    puts(s);
//    puts("\n");
//    while (s[i])
//     {
//       s[i]=s[i]+32;
//       printf("%c\n",s[i++]);
//     }
//    return 0;
//}

//strlen() 计算字符串长度  strcmp() (campare)比较   strcpy()复制
//strcat() 连接


#include<stdio.h>

#include<math.h>

#define PI 3.14159265

int main(void){

   double result, x = 30*PI/180; //将30度角转换成弧度

   result = sin(x);
   double s=PI*1*5;
   double a=asin(result);

   printf("The sin() of %lf is %lf\n%lf", x, result,s);

   return 0;

}
