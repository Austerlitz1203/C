#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>

//int main()
//{
//	char arr[] = "abcdef@usingarr.jiua";
//	const char* p = "@.";//分割符
//
//	//strtok,第二个参数为分割符，找到分割符并且把分割符改成\0
//	//printf("%s\n",strtok(arr, p));
//	//
//	//printf("%s\n", strtok(NULL, p));//第二次如果想找到后分隔割符，第一个参数必须NULL
//
//	//printf("%s\n", strtok(NULL, p));
//	
//	//较好的写法
//	char* str = NULL;
//	for (str = strtok(arr, p);str != NULL;str = strtok(NULL, p))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}


//int main()
//{
//	//strerror() 把错误码转换成错误信息
//	//for (int i=0;i<10;i++)
//	//    printf("%s\n", strerror(i));
//
//	FILE* p = fopen("text.c", "r");
//	if (p == NULL)
//	{
//		perror("fopen");//perrot相当于先打印括号里的内容，然后加上： ，再打印出来错误原因，和printf+strerror(errno)类似
//	}
//	return 0;
//}

//int main()
//{
//	char a = '3';
//	int ret = isdigit(a);//是数字字符，返回0
//	printf("%d\n", ret);
//
//	char ch = 'A';
//	printf("%c\n", tolower(ch));//大写换小写，但是ch本身不变
//	//printf("%c\n", ch);
//
//	char ch1 = 'a';
//	printf("%c", toupper(ch1));//小写换大写
//	return 0;
//}


//memcpy-内存拷贝(只需要实现不重叠的拷贝就行，但是VS库函数里面是达到了重叠的也可以拷贝，可是不是所有编译器里面都这样)
//memove-可重叠的内存拷贝
//在遇到\0并不会停下来
//void* my_memove(void* dest,const void* src,const int size)
//{
//	assert(dest);
//	assert(src);
//	char* dest1 = (char*)dest;
//	char* src1 = (char*)src;
//	if (dest < src)//从前向后拷贝    
//	{
//		for (int i = 0;i < size;i++)
//		{
//			*dest1++ = *src1++;
//		}
//	}
//	else //从后向前拷贝
//	{
//		for (int i = size - 1;i >= 0;i--)
//		{
//			*(dest1 + i) = *(src1 + i);
//		}
//	}
//
//	return dest;
//}
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[10] = { 0 };
//	//memcpy(arr2, arr1, 20);//三个参数分别是目标地址，源地址，拷贝大小（单位字节）
//
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[10] = { 0 };
//	//my_memcpy(arr2, arr1, 20);
//	
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memove(arr1+2, arr1, 20);//这里就没有达到理想情况，因为要把12345拷贝到34567里面，要从后往前拷贝，即54321
//	//有时候要从前往后拷贝，有时候要从后往前拷贝，具体情况具体分析
//
//	return 0;
//}

//memcmp-比较第一个参数和第二个参数指向内容的第三个参数大小的内容
//和strncmp比较类似，区别只在于memcmp可以比较不同数据类型的内容
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = {1,2,3,0,0};
//	int ret=memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}

//memset-
int main()
{
	int arr[] = { 1,2,3,4,5 };
	memset(arr, 0, 9);//把9个字节的内容改成0，是以字节为单位，不是元素，一定注意
	for (int i = 0;i < 5;i++)
		printf("%d ", arr[i]);
}