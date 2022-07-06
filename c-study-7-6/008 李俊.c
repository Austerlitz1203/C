#include<stdio.h>
#include<math.h>
/*int main()
{
    printf("This is a c program.\n");
    return 0;
}*/

/*int main()
{
    int a,b,sum;
    a=123;
    b=456;
    sum=a+b;
    printf("sum is%d\n",sum);
    return 0;
}*/

/*int main()
{
    double x,y;
    scanf("%lf",&x);
    y=(x-=(x*10),x/=10);
    printf("%.0f",y);
    return 0;
}*/

/*int main()
{
    int i,j;
    i=16;
    j=(i++)+i;
    printf("%d",j);//33
    i=15;
    printf("\n%d\t%d\t",i++,i);//15  16
    i=20;
    j=i--+i;
    printf("\n%d\t",j);
    i=13;
    printf("\n%d\t%d\n",i++,i);
    return 0;

}*/

int main()
{
    double r,h,c,s1,s2,v1,v2;
    double pi=3.141593;
    r=1.5;
    h=3;
    //scanf("%lf%lf",&r,&h);
    c=2*pi*r;
    s1=pi*r*r;
    s2=4*pi*r*r;
    v1=4/3.0*pi*r*r*r;
    v2=pi*r*r*h;
    printf(" c=%.2f\n s1=%.2f\n s2=%.2f\n v1=%.2f\n v2=%.2f",c,s1,s2,v1,v2);
}






