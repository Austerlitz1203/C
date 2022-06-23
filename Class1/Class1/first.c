#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int s;
int main()
{
	printf("%d", s);
	printf("Hello World!");
	printf("Hello World!");
	printf("Hello World!");
	printf("Hello World!");
	printf("Hello World!");
	printf("Hello World!\n");
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long long));//64位下是8
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	char a[5]="abcdr";
	//scanf("%s",a);
	//for (int i=0;i<5;i++)
	printf("%s",a);
	
}
//bit 比特
//Byte 字节  1byte=8bit
//KB   1KB=1024byte
//MB   1MB=1024KB