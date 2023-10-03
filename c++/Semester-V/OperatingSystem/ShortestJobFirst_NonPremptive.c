#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
void sort(int n, int *p,int *at,int *bt){
  for(int i =0;i<n;i++){
    for(int j = i+1;j<n;j++){
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
void compute(int n,int *at,int *ct,int *bt,int *tat,int *wt){
  for(int i =0;i<n;i++){
    tat[i] = ct[i] - at[i];
    wt[i] = tat[i] - bt[i];
  }
  printf("\nturn around time : ");
  for(int i = 0;i<n;i++) printf("%d ",tat[i]);
  printf("\nwaiting time : ");
  for(int i = 0;i<n;i++) printf("%d ",wt[i]);
}
int main(){
  int n;
  printf("enter the number of process : ");
  scanf("%d",&n);

  int p[n],bt[n],at[n],ct[n],wt[n],tat[n];
  printf("enter the arrival time for the processes  :");
  for(int i =0;i<n;i++){
    p[i] = i;
    scanf("%d",&at[i]);
  }
  printf("enter the burst time for the processes  :");
  for(int i =0;i<n;i++){
    scanf("%d",&bt[i]);
  }
  sort(n,p,at,bt);

  // int min = 1000,pos;
  // ct[0] = at[0] + bt[0];
  // for(int i =1 ;i<n;i++){
  //   for(int j = i;j<n;j++){
  //     if(at[j] <= ct[i-1] && bt[j] < min){
  //       min = bt[j];
  //       pos = j;
  //     }
  //   }
  //   swap(&p[i],&p[pos]);
  //   swap(&at[i],&at[pos]);
  //   swap(&bt[i],&bt[pos]);
  //   min = 1000;
  //   ct[i] = bt[i] + ct[i-1];
  // }

  int min = 1000,pos;
  for(int i =1;i<n;i++){
    for(int j = i;j<n;j++){
      if(at[j] < ct[i-1] && bt[j] < min){
        pos = j;
        min = bt[j];
      }
    }
    swap(&p[i],&p[pos]);
    swap(&at[i],&at[pos]);
    swap(&bt[i],&bt[pos]);
    min = 1000;
    ct[i] = bt[i] + ct[i-1];
  }
  
  compute(n,at,ct,bt,tat,wt);
  double wt_sum = 0;
  for(int i =0;i<n;i++) wt_sum  += wt[i];
  double avg_wt_time = wt_sum /n;
  printf("\naverage waiting sum : %.2lf",avg_wt_time);
  return 0;
}