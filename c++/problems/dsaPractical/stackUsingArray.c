#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *ar;
};
int isEmpty(struct stack *sp){
    if(sp->top == -1)
        return 1;
    else    
        return 0;
}
int isFull(struct stack *sp){
    if(sp->top == sp->size-1)
        return 1;
    else 
        return 0;
}
void push(struct stack *sp,int data){
    if(isFull(sp)){
        printf("\ncannot push stackoverflow!!");
        return ;
    }
    sp->top++;
    sp->ar[sp->top] = data;
}
int pop(struct stack *sp){
    if(isEmpty(sp)){
        printf("\ncannot pop element stackUnderflow!!");
        return -1;
    }
    int a = sp->ar[sp->top];
    sp->top--;
    return a;
}
int main()
{
    struct stack *sp;
    sp = (struct stack*)malloc(sizeof(struct stack));
    printf("enter the size of the stack : ");
    scanf("%d",&sp->size);
    sp->ar = (int*)malloc(sp->size*sizeof(int));
    sp->top = -1;

    int N;
    printf("enter the number of elements you want to push in the stack : ");
    scanf("%d",&N);
    for(int i =0;i<N;i++){
        int a;
        printf("enter element : ");
        scanf("%d",&a);
        push(sp,a);
    }

    int p;
    printf("\nenter the number of elements you want to push from the stack : ");
    scanf("%d",&p);

    for(int i =0;i<p;i++){
        int a;
        a = pop(sp);
        printf("%d ",a);
    }

    return 0;
}