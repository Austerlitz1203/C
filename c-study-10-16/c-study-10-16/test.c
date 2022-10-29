#define _CRT_SECURE_NO_WARNINGS 1


//
// scanf 按照一定的格式从键盘输入数据
// printf 按照一定的格式把数据打印到屏幕
// 适用于标准输入、输出流的格式化输入、输出语句
// 
// fscanf  按照一定格式从输入流（文件/stdin）输入数据
// fprintf 按照一定格式把数据向输出流（文件/stdout）输出数据
// 适用于所有输入、输出流的格式化输入、输出语句
// 
// 
// sscanf 从字符串中按照一定的格式读取数据
// sprintf 把格式化的数据按照一定的格式转换成字符串
//
//

//
//#include<stdio.h>
//
//struct info
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct info a = { "zhangsan",30,95.5f };
//	char buf[100] = { 0 };
//
//	//把格式化数据转换成字符串，输出到字符数组里面。
//	sprintf(buf, "%s %d %f", a.name, a.age, a.score);
//	printf(buf);
//
//	//从buf中按照格式输入到内存里面
//	sscanf(buf, "%s %d %f", a.name, &(a.age), &(a.score));
//	printf("\n%s %d %.2f", a.name, a.age, a.score);
//
//	return 0;
//}
//


//文件的随机读取
//#include<stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	int ch = fgetc(pf);//现在当前文件在第二个字符的位置
//	printf("%c\n", ch);
//
//	fseek(pf, 1, SEEK_CUR);//文件指针在文件的当前位置，偏移1个字符
//	ch = getc(pf);
//	printf("%c\n", ch);
//
//	//fseek函数第一个参数是文件流，第二个参数是偏移量，第三个参数是偏移的起始位置，作用后文件指针指向某个位置
//	fseek(pf, 3, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	fseek(pf, -3, SEEK_END);//从最后往前偏移3个字符读取数据
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//返回当前文件指针指向的位置
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//
//	rewind(pf);//文件指针返回初始位置
//	ch = getc(pf);
//	printf("%c\n", ch);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//文本文件和二进制文件
// 数据在内存中存储是二进制形式，如果不加转换放到外存里面，那么文本就是二进制文件
//如果要求在外存上以ASCLL码形式存储，则需在存储前转换，以ASCLL字符存储的文件就是文本文件



//文件读取的判定
//被错用的feof   文件读取过程中，不能使用feof的返回值直接判断文件的读取是否结束
// feof本来功能是：当文件读取结束时，来判断：是读取失败而结束，还是读取到文件末尾结束
// feof返回非0，那么是读到文件末尾结束。  如果返回0，那么就是读取失败而结束。
//

//文本文件判断结束
//fgetc如果读取正常， 返回该字符的ASCLL码值，读取失败，返回EOF
//fgets读取正常，返回存放数据的空间的起始地址，否则返回NULL
//fscanf读取正常，返回的是格式串指定的数据的个数，读取失败，返回的是小于格式串中指定的数据个数

//二进制文件判断结束
//fread，正常，返回的是实际读取数据个数，否则返回小于设定的读取数据个数
#include<stdio.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (!pf)
	{
		perror("fopen()");
		return 1;
	}

	int ch;
	while (ch = fgetc(pf) != EOF)
	{
		putchar(ch);
	}

	//判断是什么原因结束的
	if (ferror(pf))
	{
		printf("I/O error in reading!\n");
	}
	else if (feof(pf))//正常结束返回非0
	{
		printf("End of file reach successfully!\n");
	}

	fclose(pf);
	pf = NULL;
	return 0;
}

//文件缓冲区也值得注意