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
        if (i == 0 || t[j - 1] == t[i - 1])//�����i��j��Ӧ���ǵڼ����ַ������±��1�����ԱȽϵ�ʱ��Ҫ-1
        {
            j++;
            i++;
            next[j] = i;
        }
        else i = next[i];//�˾�ʱ���δ��뾫������
    }
}
void Getnextval(int nextval[], char* t)
{
    nextval[1] = 0;
    int i = 0, j = 1;
    while (j < strlen(t))
    {
        if (i == 0 || t[j - 1] == t[i - 1])//t[j-1]�������ĵ�aλ�ַ���t[i-1]����aλ�ַ���nextֵָ���bλ�ַ�����Ϊi����next[j]��
        {
            j++;
            i++;
            if (t[j - 1] != t[i - 1])//���ȣ���ônextval[j]����next[j]��next[j]�����=i
                nextval[j] = i;//��һ�����뺬��ͺ���������ˡ���ʱnextval[j]��ֵ���Ǿ���t[j-1]��ƥ��ʱӦ�û��ݵ����ַ���nextvalֵ��
            else nextval[j] = nextval[i];//��ȣ����jλ��nextval��ָ��iλ��nextvalֵ
        }
        else j = nextval[j];
    }
}

int KMP(const char* dest, const char* src)  //dest��ָ��A�ַ�����srcָ��B�ַ���
{
    //����
    assert(dest);
    assert(src);//�����в�Ӱ�������������
    int next[11];//ssize��ʾsrcָ����ַ����ĳ���
    int i = 1, j = 1;//��Ϊi��j��Ƶ�ʱ����Ǳ�ʾ�ڼ����ַ������±��1�����Գ�ʼֱֵ�ӳ�ǰһλ
    Getnext(next, src); //GetNext()�������Ϸ�һ��
    while (i <= strlen(dest) && j <= strlen(src))//dsize��ʾdestָ����ַ������ȡ�����"="��ԭ���ǣ�dest[i - 1]�����i=dsize��ʱ��i-1����S��ַ���ַ��������һλ�����û��=����ô���Ƚϵ������ڶ����ַ�
    {
        if (j == 0 || dest[i - 1] == src[j - 1]) //j=0���������һ��ѭ��j=next[j]=0,ֻ��j=1�Żᷢ������src[j-1]��Ȼ�ǵ�һ���ַ������������ִ��else�Ļ���˵�����ߴ�ʱ���λ�õĵ�һ���ַ��Ͳ���ȣ���ôj�͵������ڳ�ʼ������j++����=1��ʼ
        {
            i++;
            j++;  	//i,j����1
        }
        else j = next[j]; 		//i����,j���ˣ�����֪��Ϊʲô�������Ӵ������˰�
    }
    if (j > strlen(src))
        return i - strlen(src);  	//����ƥ��ģʽ�������ַ��±�
    else
        return -1;        		//���ز�ƥ���־
}


int main()
{
    char arr1[] = "abcxusingnamexforwhile";
    char arr2[] = "usingnamex";
    printf("%d", KMP(arr1, arr2));

	return 0;
}