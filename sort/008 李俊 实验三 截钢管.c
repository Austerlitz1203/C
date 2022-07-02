#include<stdio.h>
int main()//5.16 截钢管
{
    int a,b,c[5];
    for (int i=1;i<=5;i++)
    {
        a=23*i;
        c[i]=(133-a)%19;
        printf("%d\t",c[i]);
    }
    printf("\n23m截四根，23m截2根时，剩余材料最短，为3m");
    return 0;
}
