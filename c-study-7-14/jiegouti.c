//变量.成员
//指针->


//链表
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *create()
{
   struct node *h,*p;
   int x;
   h=0;
   scanf("%d",&x);
   while (x)
   {
       p=(struct node *)malloc(sizeof(struct node));
       p->data=x;
       p->next=h;
       h=p;
       scanf("%d",&x);
   }
   return h;
}

//尾插入
struct node *create1()
{
    struct node *h,*q,*p;
    int x;
    h=(struct node *)malloc(sizeof(struct node));
    h->next=0;
    q=h;
    scanf("%d",&x);
    while (x)
   {
       p=(struct node *)malloc(sizeof(struct node));
       p->data=x;
       p->next=0;
       q->next=p;
       q=p;
       scanf("%d",&x);
   }
   return h;
}

show(struct node *h)
{
    struct node *p=h;
    while(p)
    {
        printf("%d->",p->data);
        p=p->next;
    }
}

insert(struct node *h,int i,int x)
{
    struct node *p=h->next,*q;
    int j=0;
    while(j < i-1 && p != 0)
    {
        j++;
        p=p->next;
    }
    if (p)
    {
        q=(struct node *)malloc(sizeof(struct node));
        q->date=x;
        q->next=p->netx;
        p->next=q;
    }
}

main()
{
    struct node *h;
    h=create1();

    show(h);
}
