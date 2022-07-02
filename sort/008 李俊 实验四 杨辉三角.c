#include<stdio.h>
int main()
{
	int a[100],n;
	scanf("%d",&n);
	if(n==1)
		printf("1\n");
	else
	{
		a[0]=a[1]=1;//先设定第二行的值，方便第三行处理
		printf("1\n1     1\n");
		for(int i=3;i<=n;i++)//从第三行开始计算
		{
			a[i-1]=1;//每一行首尾均为0
			a[0]=1;
			for(int j=i-2;j>0;j--)//计算除去首尾的数值
				a[j]+=a[j-1];//由于计算第n行时，a[j]数据还是第n-1行，故可
		    for(int j=0;j<i;j++)//打印每一行数值
			    printf("%-6d",a[j]);
		printf("\n");
		}
	}
	return 0;
}
