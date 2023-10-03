#include<stdio.h>
#include<malloc.h>
struct node 
{
    int data;
    struct node *next;
};

int size;
struct node *top = NULL;

void push(int data)
{
    struct node *p = (struct node*)malloc(sizeof(struct node *));
    if(p == NULL)   
        printf("stack overflow!!");
    else
    {
        p->data = data;
        p->next = NULL;
        if(top == NULL)
        {
            top = p;
        }
        else
        {
            p->next = top;
            top = p;
        }
    }
}

int pop()
{
    if(top == NULL)
    {
        printf("stack underflow!!");
        return -1;
    }
    else
    {
        int a = top->data;
        top = top->next;
        return a;
    }
}

int main()
{
    int n;
    printf("enter the number of element you want to push : ");
    scanf("%d",&n);

    for(int i =0;i<n;i++)
    {
        int a;
        printf("enter the element you want to push : ");
        scanf("%d",&a);
        push(a);
    }

    int m;
    printf("enter the number of element you want to pop : ");
    scanf("%d",&m);
    for(int i =0;i<m;i++)
    {
        int a = pop();
        printf("%d ",a);
    }    
    return 0;
}