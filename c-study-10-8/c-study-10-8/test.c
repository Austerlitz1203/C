#define _CRT_SECURE_NO_WARNINGS 1

//柔性数组（C99标准下支持）

//#include<stdio.h>
//#include<stdlib.h>
//
//struct S
//{
//	int a;
//	float b;
//	int arr[];//结构体最后一个元素允许是大小未知的，但是其前面至少有一个成员
//};
//
//
//int main()
//{
//	printf("%d ", sizeof(struct S));//结果是8，计算的是a和b的大小，arr数组大小是0
//	//有柔性数组的结构体，内存分配用malloc进行动态分配，且分配大小要大于结构体大小，以适应柔性数组预期大小
//
//	//开辟
//	struct S* s = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 4);//又分配了四个int类型数据大小的空间
//	if (!s)
//	{
//		printf("malloc fail!");
//		exit(-1);
//	}
//
//	//使用
//	s->a = 10;
//	s->b = 5.5;
//	for (int i = 0;i < 4;i++)
//		s->arr[i] = i+1;
//
//	printf("%d  %.2f\n", s->a,s->b);
//	for (int i = 0;i < 4;i++)
//	{
//		printf("%d ", s->arr[i]);
//	}
//
//
//	//调整
//	struct S* ptr = (struct S*)realloc(s, sizeof(struct S) + 10 * sizeof(int));
//	if (!ptr)
//	{
//		printf("realloc fail!");
//		exit(-1);
//	}
//	else
//	{
//		s = ptr;
//	}
//	//使用
//	for (int i = 4;i < 10;i++)
//	{
//		s->arr[i] = i+1;
//	}
//	for (int i = 4;i < 10;i++)
//	{
//		printf("%d ", s->arr[i]);
//	}
//	//释放
//	free(s);
//	return 0;
//}


//不用柔性数组，结构体里用指针
//在这里有好多问题，一方面，要多次malloc，这样会造成内存碎片，另一方面要多次realloc

//#include<stdio.h>
//#include<stdlib.h>
//
//struct S
//{
//	int a;
//	float b;
//	int* arr;
//};
//
//int main()
//{
//	//开辟
//	struct S*  s = (struct S*)malloc(sizeof(struct S));
//	if (!s)
//	{
//		printf("malloc fail!");
//		exit(-1);
//	}
//
//	int* ptr = (int*)malloc(sizeof(int) * 10);
//	if (!ptr)
//	{
//		printf("malloc fail!");
//		exit(-1);
//	}
//	s->arr = ptr;
//
//	//使用
//	s->a = 10;
//	s->b = 5.5;
//	for (int i = 0;i < 10;i++)
//	{
//		s->arr[i] = i + 1;
//	}
//
//	printf("%d %.2f\n", s->a, s->b);
//
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", s->arr[i]);
//	}
//
//	//释放
//	free(s);
//	s = NULL;
//	free(ptr);
//	ptr = NULL;
//
//	return 0;
//}



//文件操作
//#include<stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");//相对路径
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//使用
//	//for (int i = 0;i < 26;i++)
//	//{
//	//	fputc('a' + i, pf);
//	//}
//
//	int ch = 0;
//	while ((ch=fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//
//	//关闭
//	fclose(pf);//此时pf并不指向NULL
//	pf = NULL;
//
//	return 0;
//}




//#include<stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test1.txt", "w");//相对路径
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写入文件，一行一行写
//	fputs("hello", pf);
//	fputs("leo",pf);
//	//这里并不会换行，所以要换行的话，手动加\n
//	fputs("\nnextline", pf);
//
//
//	//关闭
//	fclose(pf);//此时pf并不指向NULL
//	pf = NULL;
//
//	return 0;
//}




//#include<stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test1.txt", "r");//相对路径
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件，一行一行读
//	char arr[20] = "123456789";
//	fgets(arr, 5, pf);//5个，是算上自己最后加的\0，并且最多只读一行。  如果一次未读完一行，那么下次接着读
//
//	printf(arr);
//
//	//关闭
//	fclose(pf);//此时pf并不指向NULL
//	pf = NULL;
//
//	return 0;
//}



//#include<stdio.h>
//
//struct S
//{
//	char name[20];
//	int age;
//
//};

//写入结构体数据
//int main()
//{
//	struct S a = { "zhangsan",20 };
//
//	FILE* pf = fopen("test2.txt", "w");//相对路径
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//格式化
//	fprintf(pf, "%s %d", a.name, a.age);
//
//	//关闭
//	fclose(pf);//此时pf并不指向NULL
//	pf = NULL;
//
//	return 0;
//}


//读取结构体数据
//int main()
//{
//	struct S b = { 0 };
//
//	FILE* pf = fopen("test2.txt", "r");//相对路径
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//格式化
//	fscanf(pf,"%s %d",b.name,&(b.age));
//
//	printf("%s %d", b.name, b.age);
//
//	//关闭
//	fclose(pf);//此时pf并不指向NULL
//	pf = NULL;
//
//	return 0;
//}


//这个操作文件要打开文件，关闭文件，而我们用键盘、屏幕为什么没有打印键盘，关闭键盘这些呢
//因为程序执行时候，默认打开三个流
// stdin     标准输入流  --键盘
// stdout    标准输出流  --屏幕
// stderr    标准错误流  --屏幕
//


//#include<stdio.h>
//
//int main()
//{
//
//	int ch = fgetc(stdin);
//	printf("%c ", ch);
//
//	return 0;
//}



//二进制读写



#include<stdio.h>

struct S
{
	char name[20];
	int age;

};


//二进制写入
//int main()
//{
//	struct S a = { "zhangsan",20 };
//
//	FILE* pf = fopen("test4.txt", "wb");//相对路径
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//二进制写入
//	fwrite(&a,sizeof(a),1,pf);//写进去之后，20看不懂，因为是二进制方式写入
//
//	//关闭
//	fclose(pf);//此时pf并不指向NULL
//	pf = NULL;
//
//	return 0;
//}

//二进制读取
int main()
{
	struct S b = { 0 };

	FILE* pf = fopen("test4.txt", "rb");//相对路径
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//二进制读
	fread(&b, sizeof(b), 1, pf);//写进去之后，20看不懂，因为是二进制方式写入

	//关闭
	fclose(pf);//此时pf并不指向NULL
	pf = NULL;

	return 0;
}