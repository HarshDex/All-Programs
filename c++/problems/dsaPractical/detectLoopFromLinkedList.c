#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printData(struct node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head = head->next;
    }
}
int detect(struct node *head){
    struct node *slow = head;
    struct node *fast = head;
    while(fast != NULL && fast->next !=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
            return 1;
    }
    return 0;
}
struct node *create(struct node *head,int data){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = NULL;
    if(head == NULL)
        return p;
    struct node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = p;
    return head;
}
int main()
{
    int n;
    printf("enter the number of nodes you want to create : ");
    scanf("%d",&n);

    struct node *head = NULL;
    printf("enter data in the linked list : \n");
    for(int i =0;i<n;i++){
        int a;
        printf("enter element : ");
        scanf("%d",&a);
        head = create(head,a);
    }
    printf("printing the linked list : ");
    printData(head);

    int d = detect(head);
    if(d == 1)
        printf("\nloop present in the linked list");
    else 
        printf("\nloop does not present in the linked list");
    
    return 0;
}