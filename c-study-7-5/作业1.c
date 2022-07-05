#include<stdio.h>
int main()
{
    printf("请输入当月为公司的贡献（单位为万元）\n");
    float n;
    scanf("%f",&n);
    if (n<=10)
        printf("应该获得的奖金为%.4f万元",n*0.03);
    else if (n>10 && n<=40)
        printf("应该获得的奖金为%.4f万元",(n-10)*0.05+0.3);
    else if (n>40 && n<=70)
        printf("应该获得的奖金为%.4f万元",(n-40)*0.075+1.8);
    else if (n>70 && n<=100)
        printf("应该获得的奖金为%.4f万元",(n-70)*0.10+4.05);
    else if (n>100)
        printf("应该获得的奖金为%.4f万元",(n-100)*0.15+7.05);
    return 0;
}

/*
#include<stdio.h>
#include<math.h>
int main()
{
    printf("请输入测得的深度数值m（0<m<=2）\n");
    double m;
    double pi = 3.1415926;//给定Π的值
    scanf("%lf",&m);
    if (m<1)    //深度数值小于油桶半径的情况
    {
        double cosa=2*(1-m)*(1-m)-1;
        double a=acos(cosa);
        double s=(a/(2*pi))*pi*1*1-sqrt(1-(1-m)*(1-m))*(1-m);//面积为扇形面积减去两倍小三角形面积
        double v=s*5;//  （s/s总）*s总*h化简为s*h
        printf("油的体积为%f",v);
    }
    if (m==1)
        printf("油的体积为7.853982");
    if (m>1 && m<2)    //深度数值大于油桶半径的情况
    {
        double cosa=2*(m-1)*(m-1)-1;//cos(2Π-a)=cos(a)
        double b=acos(cosa);
        double a=2*pi-b;//由余弦函数图像，不难得出这时候弧度值公式
        double s=(a/(2*pi))*pi*1*1+sqrt(1-(m-1)*(m-1))*(m-1);//面积为扇形面积加两倍小三角形面积
        double v=s*5;//  （s/s总）*s总*h化简为s*h
        printf("%f",v);
    }
    if (m==2)
        printf("油的体积为15.707963");
    return 0;
}
*/
