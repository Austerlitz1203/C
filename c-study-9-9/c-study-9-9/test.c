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
//	while (*dest++ = *src++)//��srcָ���\0����destʱ�����ʽ�ӵ�ֵҲ��0��Ϊ�٣�����while
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
//	//strcpy���Դ�ַ���������Ŀ��ռ䣬���һ´��'\0'����������Դ�ַ���\0�����������\0û�оͻ����
////	char a[] = "abcd";
////	char b[] = "abcdedf";
////	strcpy(b,a);
////	printf("%s", a);
//    
//	//char a[] = "abcd";
//	//char b[] = "abcdedf";
//	//strcpy(a, b);//��b����a���У�b��a��
//	//printf("%s", a);
//
//	//char a[20] = "abcd";//a�Ŀռ��b����ʱ����Կ�
//	//char b[] = "abcdefghi";
//	//strcpy(a, b);
//	//printf("%s", a);
//
//	//char arr1[] = "xxxxxxxxxx";
//	//char arr2[] = { 'a','b','c' };//����û��\0,���Կ���ͣ������
//	//strcpy(arr1, arr2);
//	//printf("%s", arr1);
//
//	//char arr1[] = "xxxxxxxxxx";
//	//char arr2[] = { 'a','b','c' ,'\0'};
//	//strcpy(arr1, arr2);
//	//printf("%s", arr1);
//
//	//Ŀ��ռ����Ҫ�����޸ģ��������棬pָ��Ŀռ��ǳ����ַ������������޸�
//	//char* p = "abcdefg";
//	//char a[] = "usi";
//	//strcpy(p, a);
//
//	//char a[] = "abcdef";
//	//char b[] = "us";
//	//printf("%s", my_strcpy(a, b));
//}



//strcat 
//1��Ŀ��ռ�Ҫ�㹻��2��Ŀ��ռ�Ҫ���޸�.3��Դ�ַ���Ҫ��\0��β
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


//�г��ȿ��Ƶ��ַ�����
int main()
{
	char arr1[] = "abcdefghijk";
	char arr2[] = "xxxx";
	//strncpy(arr1, arr2, 2);//����2��
	
	strncpy(arr1, arr2, 8);//�����ڴ��֪������arr2ֻ���ĸ�������ǰ�ĸ������ˣ����ĸ�ȫ��\0
	printf("%s", arr1);
	return 0;
}

//int main()
//{
//	char arr1[] = "abcd\0xxxxx";
//	char arr2[20] = "yyyy";
//	//strncat(arr1, arr2, 2);//��\0����׷��������������Զ�����\0
//
//	strncat(arr2, arr2, 4);//�Լ����Լ�׷�ӿ��ԣ����Ǳ�����ǰҪ���㹻���Ŀռ�
//	printf("%s", arr2);
//
//}

//int main()
//{
//	int m = strncmp("abcdef", "abcd", 4);//�Ƚ�4��
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
//	char* p = my_strstr(arr1, arr2);//���ص���Ŀ��ռ����һ����ͬ�ַ��������ַ��ĵ�ַ
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