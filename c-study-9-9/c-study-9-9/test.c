#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p++)
//		count++;
//	return count;
//}
//int main()
//{
//	char a[]= "abcdef";
//	printf("%d", my_strlen(a));
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest);
//	assert(src);
//	char* temp = dest;
//	while (*dest++ = *src++)//当src指向的\0赋给dest时，这个式子的值也是0，为假，跳出while
//	{
//		;
//	}
//	return temp;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "xxx";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//}

//int main()
//{
//	//char arr[] = "abc\0def";
//	//printf("%d", strlen(arr));
//	//if (strlen("abc") - strlen("abcdef") > 0)
//	//	printf(">");
//	//return 0;
//
//
//	//strcpy会把源字符串拷贝到目标空间，并且会拷贝'\0'，而且是以源字符的\0做结束，如果\0没有就会出错
////	char a[] = "abcd";
////	char b[] = "abcdedf";
////	strcpy(b,a);
////	printf("%s", a);
//    
//	//char a[] = "abcd";
//	//char b[] = "abcdedf";
//	//strcpy(a, b);//把b拷到a则不行，b比a长
//	//printf("%s", a);
//
//	//char a[20] = "abcd";//a的空间比b长的时候可以拷
//	//char b[] = "abcdefghi";
//	//strcpy(a, b);
//	//printf("%s", a);
//
//	//char arr1[] = "xxxxxxxxxx";
//	//char arr2[] = { 'a','b','c' };//这里没有\0,所以拷贝停不下来
//	//strcpy(arr1, arr2);
//	//printf("%s", arr1);
//
//	//char arr1[] = "xxxxxxxxxx";
//	//char arr2[] = { 'a','b','c' ,'\0'};
//	//strcpy(arr1, arr2);
//	//printf("%s", arr1);
//
//	//目标空间必须要可以修改，比如下面，p指向的空间是常量字符串，不可以修改
//	//char* p = "abcdefg";
//	//char a[] = "usi";
//	//strcpy(p, a);
//
//	//char a[] = "abcdef";
//	//char b[] = "us";
//	//printf("%s", my_strcpy(a, b));
//}



//strcat 
//1、目标空间要足够大。2、目标空间要可修改.3、源字符串要以\0结尾
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* temp = dest;
//	while (*temp)
//	{
//		temp++;
//	}
//	while (*temp++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[] = "abcd \0xxxxxxxxxxx";
//	char arr2[] = "using";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//有长度控制的字符函数
int main()
{
	char arr1[] = "abcdefghijk";
	char arr2[] = "xxxx";
	//strncpy(arr1, arr2, 2);//拷贝2个
	
	strncpy(arr1, arr2, 8);//监视内存可知，由于arr2只有四个，所以前四个拷贝了，后四个全是\0
	printf("%s", arr1);
	return 0;
}

//int main()
//{
//	char arr1[] = "abcd\0xxxxx";
//	char arr2[20] = "yyyy";
//	//strncat(arr1, arr2, 2);//在\0后面追加两个，后面会自动加上\0
//
//	strncat(arr2, arr2, 4);//自己给自己追加可以，但是本身提前要有足够长的空间
//	printf("%s", arr2);
//
//}

//int main()
//{
//	int m = strncmp("abcdef", "abcd", 4);//比较4个
//	printf("%d", m);
//
//}





//char* my_strstr(char* src1, char* src2)
//{
//	const char* s1 = src1;
//	const char* s2 = src2;
//	const char* p = src1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = src2;
//		while (*s1 != 0 && *s2 != 0 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == 0)
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cde";
//	char* p = my_strstr(arr1, arr2);//返回的是目标空间里，第一个相同字符串的首字符的地址
//	if (p == NULL)
//		printf("no find");
//	else
//		printf("%s", p);
//}

//int my_strcmp(char* dest, char* src)
//{
//	while (*dest++ == *src++ && *dest != 0 && *src != 0)
//	{
//		;
//	}
//	return *dest - *src;
//}
//int main()
//{
//	char arr1[] = "abcdxxxx";
//	char arr2[] = "abcdxxxx";
//	if (my_strcmp(arr1, arr2) > 0)
//		printf(">");
//	else if (my_strcmp(arr1, arr2) < 0)
//		printf("<");
//	else printf("=");
//
//}