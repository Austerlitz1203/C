#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void Getnext(int next[], char* t)
{
    next[1] = 0;
    int i = 0, j = 1;
    while (j < strlen(t))
    {
        if (i == 0 || t[j - 1] == t[i - 1])//这里的i、j对应的是第几个字符，比下标多1，所以比较的时候要-1
        {
            j++;
            i++;
            next[j] = i;
        }
        else i = next[i];//此句时本段代码精华所在
    }
}
void Getnextval(int nextval[], char* t)
{
    nextval[1] = 0;
    int i = 0, j = 1;
    while (j < strlen(t))
    {
        if (i == 0 || t[j - 1] == t[i - 1])//t[j-1]就是上文的a位字符，t[i-1]就是a位字符的next值指向的b位字符，因为i就是next[j]嘛
        {
            j++;
            i++;
            if (t[j - 1] != t[i - 1])//不等，那么nextval[j]等于next[j]，next[j]本身就=i
                nextval[j] = i;//这一个代码含义就很容易理解了。此时nextval[j]的值就是就是t[j-1]不匹配时应该回溯到的字符的nextval值。
            else nextval[j] = nextval[i];//相等，则该j位的nextval就指向i位的nextval值
        }
        else j = nextval[j];
    }
}

int KMP(const char* dest, const char* src)  //dest是指向A字符串，src指向B字符串
{
    //断言
    assert(dest);
    assert(src);//这两行不影响代码正常运行
    int next[11];//ssize表示src指向的字符串的长度
    int i = 1, j = 1;//因为i，j设计的时候就是表示第几个字符，比下标多1，所以初始值直接超前一位
    Getnext(next, src); //GetNext()函数和上方一样
    while (i <= strlen(dest) && j <= strlen(src))//dsize表示dest指向的字符串长度。这里"="的原因是，dest[i - 1]，如果i=dsize的时候，i-1才是S地址的字符串的最后一位，如果没有=，那么最多比较到倒数第二个字符
    {
        if (j == 0 || dest[i - 1] == src[j - 1]) //j=0的情况是上一次循环j=next[j]=0,只有j=1才会发生，而src[j-1]显然是第一个字符，这种情况下执行else的话，说明两者此时相对位置的第一个字符就不相等，那么j就得类似于初始那样，j++正好=1初始
        {
            i++;
            j++;  	//i,j各增1
        }
        else j = next[j]; 		//i不变,j后退，现在知道为什么这样让子串回退了吧
    }
    if (j > strlen(src))
        return i - strlen(src);  	//返回匹配模式串的首字符下标
    else
        return -1;        		//返回不匹配标志
}


int main()
{
    char arr1[] = "abcxusingnamexforwhile";
    char arr2[] = "usingnamex";
    printf("%d", KMP(arr1, arr2));

	return 0;
}