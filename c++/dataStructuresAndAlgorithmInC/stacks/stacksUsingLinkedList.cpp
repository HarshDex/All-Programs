/*
    head will be always refered as the top
    side 1 will be always used for push and pop operations 
    stack empty condition
    if(top==NULL);
    stack is full when heap memory is exhausted 
    we can always set a custom size for the stack
*/
//first creating a linked list 
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
void printData(struct node*head )
{
    int i =1;
    while(head!=NULL){
    printf("%d - Element in the linked list is : %d\n",i,head->data);
    head = head->next;
    i = i+1;
    }
}
int isEmpty(struct node * t)
{
    if(t = NULL)
        return 1;
    else 
        return 0;
}
int isFull(struct node * t)
{
    struct node *p = (struct node*)malloc(sizeof(struct node));
    if(p == NULL)
        return 1;
    else 
        return 0;
}
struct node *push(struct node *top,int data)
{
    int f = isFull(top);
    if(f == 0)
    {
        struct node *p = (struct node *)malloc(sizeof(struct node));
        p->data = data;
        p->next = top;
        top = p;
        return top;
    }
    else
    {
        printf("Stack Overflow!!");
        return top;
    }
}
int pop(struct node *&top)
{
    struct node *q = top;
    struct node *p = top->next;
    top = p;
    int b =  q->data;
    free(q);
    return b;
}
void peek(struct node*top,int index)
{
    for(int i=1;i<=index;i++)
    {
        top = top->next;
    }
    printf("Element at the  index - %d is : %d\n",index,top->data);
}
void create(int n)
{
    struct node *head, *q,*m;
    head = (struct node*)malloc(sizeof(struct node));
    if(head == NULL)
        printf("Error while allocating the memory!!");
    else
    {
        int d;
        printf("Enter the data which you want to enter in the 1 node : ");
        scanf("%d",&d);
        head->data = d;
        head->next= NULL;
        m = head;
        for(int i=1;i<n;i++)
        {
            int data;
            printf("enter the data which you want to enter in the %d node : ",i+1);
            scanf("%d",&data);

            q = (struct node*)malloc(sizeof(struct node)); 
            // while(m->next!=NULL)
            // {
            //     m = m->next;
            // }
            q->data =  data;
            m->next = q;
            q->next = NULL;
            m = m->next;
        }
    }
    printData(head);
    printf("\n");
    printf("now linked list is converted into stack :\n");
    struct node *top = head; 
    int c;
    //printf("Enter the number of element you want to push in the stack :");
    //scanf("%d",&c);
    // for(int i = 0;i<c;i++){
    // int x;
    // printf("Enter the element you want to push :");
    // scanf("%d",&x);
    // head = push(top,x);
    // }
    int n1;
    printf("enter the  number of data which you want to push in the stack\n");
    scanf("%d ",&n1);
    int x;
    for(int i = 0;i<n1;i++){
        printf("enter the data  to push : ");
        scanf("%d",&x);
        head = push(head,x);
    }
    printData(head);

    int n2;
    printf("Enter the number of element you want to pop from the stack : ");
    scanf("%d",&n2);

    for(int i=0;i<n2;i++)
    {
        int a = pop(head);
        printf("%d - popped element = %d\n",i+1,a);
    }

    //linked list after poping 
    printf("Linked list after poping Elements :\n");
    printData(head);
    printf("\n");
    //implementing peek operation in stack using linked list 
    int n3;
    printf("Enter 1 if you want to peek in the stack \n  \t  \t  \t  or\nEnter 0 if you do not want to peek in the stack :\n=>");
    scanf("%d",&n3);
    while(n3 == 1)
    {
    int index;
    printf("Enter the index at which you want to peek : ");
    scanf("%d",&index);
    peek(head,index);
    int a ;
    printf("Enter 1 if you want to peek in the stack \n \t  \t  \t  or \nEnter 0 if you do not want to peek in the stack :\n=>");
    scanf("%d",&a);
    n3 = a;
    }
    printf("Thankyou!!");

}
int main()
{
    int n;
    printf("Enter the number of nodes present in your list : ");
    scanf("%d",&n);
    create(n);

  return 0;
}

