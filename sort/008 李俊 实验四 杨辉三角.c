#include<stdio.h>
int main()
{
	int a[100],n;
	scanf("%d",&n);
	if(n==1)
		printf("1\n");
	else
	{
		a[0]=a[1]=1;//���趨�ڶ��е�ֵ����������д���
		printf("1\n1     1\n");
		for(int i=3;i<=n;i++)//�ӵ����п�ʼ����
		{
			a[i-1]=1;//ÿһ����β��Ϊ0
			a[0]=1;
			for(int j=i-2;j>0;j--)//�����ȥ��β����ֵ
				a[j]+=a[j-1];//���ڼ����n��ʱ��a[j]���ݻ��ǵ�n-1�У��ʿ�
		    for(int j=0;j<i;j++)//��ӡÿһ����ֵ
			    printf("%-6d",a[j]);
		printf("\n");
		}
	}
	return 0;
}
