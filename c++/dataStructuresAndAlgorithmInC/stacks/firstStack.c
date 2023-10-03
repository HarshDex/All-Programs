#include<stdio.h>
#include<stdlib.h>
struct stack 
{
  int size;
  int top;
  int *ar;
};
int isempty(struct stack *ptr)
{
  if(ptr->top == -1)
  {
    return 1;
  }
  else 
  {
    return -1;
  }
}
int isfull(struct stack *ptr)
{
  if(ptr->top == ptr->size-1)
  {
    return 1;
  }
  else 
  {
    return -1;
  }
}
int main()
{
  struct stack *s;
  s->top = -1;
  int n;
  printf("enter the size of the stack = : ");
  scanf("%d",&n);
  s->size = n;
  s->ar = (int * )malloc(s->size * sizeof(int));

  //pushing the element in the stack 
  printf("enter how many values you want to enter in the stack = ");
  int h;
  scanf("%d",&h);

  printf("pushing the element in the stack !!\n");
  for(int i=0;i<h;i++)
  {
    printf("enter the %d value which you want to enter in the stack : ",i+1);
    int a ;
    scanf("%d",&a);
    s->ar[i] = a;
    s->top++;
  }
  printf("element is successfully pushed in the stack !!\n");

  printf("checking if stack is empty or not :\n");
  int a = isempty(s);
  if(a==1)
  {
    printf("stack is empty !!\n");
  }
  else 
    printf("stack is not empty !!\n");

  printf("checking if stack is full or not :\n");
  int b = isfull(s);
  if(b==1)
  {
    printf("stack is full !!\n");
  }
  else 
    printf("stack is not full !!\n");


  



}