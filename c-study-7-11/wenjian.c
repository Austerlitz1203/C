//文件输入缓冲区，输出缓冲区
//每个被使用的文件都在内存中开辟一个文件信息区，保存其信息
//信息是在一个结构体变量里面，由系统声明，取名FILE
//..表示上一路径
//FILE *pt=("../test.txt","r") 表示用只读方式打开上一路径文件夹中的
//FILE *pt=("../../test.txt","r") 表示用只读方式打开上上个路径文件夹中的
//#include<stdio.h>
//#include<errno.h>
//int main()
//{
//    FILE *pt=fopen("test.txt","r");
//    if (pt == NULL)
//        printf("%s\n",strerror(errno));
//
//    fclose(pt);
//    pt=NULL;
//    return 0;
//}

//stdin   标准输入设备
//stdout  标准输出设备
//stderr
//这三个流是默认打开

//#include<stdio.h>
//int main()
//{
//    int ch=fgetc(stdin);
//    fputc(ch,stdout);
//    return 0;
//}


#include<stdio.h>
#include<string.h>
#include<error.h>
struct data
{
    int a;
    double b;
    char c[20];
};
int main()
{
    char a[1024]={0};
    struct data x={0};
    struct data c={0};
    FILE *pf=fopen("test.txt","r");
    if (pf == NULL)
        return 0;
    fgets(a,1024,pf);
    printf("%s",a);//这里会把换行也读入a，所以不需要换行符号

    fgets(a,1024,pf);
    printf("%s",a);//这里没有换行,因为是最后一段

//      fgets(a,1024,pf);
//      puts(a);//puts函数自带换行

//       fputs("hello",pf);//这个不换行，如果向文件输入数据要换行的话
//       fputs("world",pf);//要自己改格式

//        fgets(a,1024,stdin);//从标准输入流读取
//        fputs(a,stdout);//输出到标准输入流

    //    fprintf(pf,"%d %.2lf %s",x.a,x.b,x.c);
    //    printf("%d %.2lf %s",x.a,x.b,x.c);

//        fscanf(pf,"%d %lf %s",&(x.a),&(x.b),x.c);//x.c本身数组名是地址
//        printf("%d  %.2f  %s",x.a,x.b,x.c);

//        fscanf(stdin,"%d %lf %s",&(x.a),&(x.b),x.c);
//        //从键盘输入数据到指定位置
//        fprintf(stdout,"%d %.2lf %s",x.a,x.b,x.c);
//        //从指定位置把数据打印到stdout，即标准输出流（屏幕）
}
