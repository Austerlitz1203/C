#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int m;
//int main()
//{
//	int a = 1;
//	a = (++a) + (++a) + (++a);
//	printf("%d\n", a);
//	//ʵ�������Ǵ���ĳ�����Ϊ��VS�����������е�����++�����Խ����12����Linux��������������++��Ȼ���һ��+����++���ڶ���+
//	//����Linux����3+3=6+4=10�������������ʵ�����Ǵ����
//	//���ȼ�ֻ��˵�������ڵĲ������Ƚ�����һ�����������һ��+�ź͵��������������++���Ͳ�֪����������һ����������
//	m--;
//	printf("%d\n", sizeof(m));
//
//	a = -2;
//	a=a >> 1;
//	printf("%d", a);
//	//�������ƣ����������õ������߼�֮�࣬дһƪ����
//
//
//
//	//*vp++��*(vp++)Ч����ͬ����Ϊ++���ȼ����ߣ�������Ϊ����++�������������++���Ƚ����ã���ַ��++
//	return 0;
//}

#include<stdio.h>

int jc(int a)
{
	if (a == 1)
		return 1;
	else
		return a * jc(a - 1);
}

int DigitSum(int a)
{
	static int sum=0;
	if (a < 9)
		sum += a;
	else
	{
		DigitSum(a / 10);
		sum += a % 10;
	}
	return sum;

}

void reverse_string(char* p)
{
	int len = 0;
	char* pp = p;
	while (*pp != '\0')
	{
		len++;
		pp++;
	}
	char temp = *p;
	*p = *(p + len - 1);
	*(p + len - 1) = '\0';
	if (len >= 2)
	{
		reverse_string(p + 1);
	}
	*(p + len - 1) = temp;
}


int my_strlen(char* a)
{
	int count = 0;
	while (*a != '\0')
	{
		count++;
		a++;
	}
	return count;
}


int my_strlen1(char* a)
{
	if (*a != '\0')
		return 1 + my_strlen1(++a);
	else
		return 0;

}


int fib(int a)
{
	if (a == 1 || a == 2)
		return 1;
	else
		return fib(a - 1) + fib(a - 2);
}

int fib1(int a)
{
	int x1=1, x2= 1;
	int x3 = 0;
	if (a == 1 || a == 2)
		return 1;
	while (a > 2)
	{
		x3 = x2 + x1;
		x1 = x2;
		x2 = x3;
		a--;
	}
	return x3;

}

void ejz(int a)
{
	//��ӡż��λ
	for (int i = 31;i >= 1;i -= 2)
		printf("%d", (a>>i)&1);
	printf("\n");
	//��ӡ����λ��
	for (int i = 30;i >= 0;i -= 2)
		printf("%d", (a >> i) & 1);
}


int gcd(int a,int b)
{
	while(a%b)
	{
		int temp = a;
		a = b;
		b = temp % b;
	}
	return b;
}
int main()
{
	int n = 0,m = 0;
	scanf("%d%d", &n,&m);
	printf("%d", gcd(n,m));
	return 0;
}