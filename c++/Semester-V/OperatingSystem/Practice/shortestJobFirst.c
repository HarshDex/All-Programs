#include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int n,int *p,int *at,int *bt){
    for(int i=0;i<n;i++){
        for(int j = i;j<n;j++){
            if(at[i] > at[j]){
                swap(&p[i],&p[j]);
                swap(&at[i],&at[j]);
                swap(&bt[i],&bt[j]);
            }
            else if(at[i] == at[j] && bt[i] > bt[j]){
                swap(&p[i],&p[j]);
                swap(&at[i],&at[j]);
                swap(&bt[i],&bt[j]);
            }
        }
    }
}
void compute(int n,int *p,int *at,int *bt,int *ct,int *tat,int *wt){
    int min = 1000;
    int pos;
    sort(n,p,at,bt);
    ct[0] = bt[0] + at[0];
    for(int i =1 ;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(at[j] <= ct[i-1] && bt[j] < min){
                pos = i;
                min = bt[j];
            }
        }
    swap(&p[i],&p[pos]);
    swap(&at[i],&at[pos]);
    swap(&bt[i],&bt[pos]);
    min = 1000;
    ct[i] = bt[i] + ct[i-1];
    }
}
int main(){
    int n;
    printf("enter the nubmer of processes : ");
    scanf("%d",&n);

    int p[n],at[n],bt[n],ct[n],wt[n],tat[n];
    for(int i =0;i<n;i++){
        p[i] = i;
        printf("enter the arrival time and burst time for process %d : ",i);
        scanf("%d %d",&at[i],&bt[i]);
    }

    return 0;
}