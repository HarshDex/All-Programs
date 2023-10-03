#include<stdio.h>
struct processes{
    int p;
    int arrival_time;
    int burst_time;
    int completion_time;
};
void swap(struct processes *a,struct processes *b){
    struct processes temp = *a;
    *a = *b;
    *b = temp;
}
void compute(struct processes process[],int n,int *tat,int *wt){
    //? sorting on the basis of the arrival time
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(process[j].arrival_time > process[j+1].arrival_time) 
                swap(&process[i],&process[j]);
        }
    }
    int sum = 0;
    process[0].completion_time = process[0].burst_time;
    for(int i= 1;i<n;i++){
        process[i].completion_time = process[i].burst_time + process[i-1].completion_time;
    }
    //finding the turn around time and waiting time 
    for(int i =0;i<n;i++){
        tat[i] = process[i].completion_time-process[i].arrival_time;
        wt[i] = tat[i] - process[i].burst_time;
    }
}
void printRes(struct processes process[], int n,int *wt,int *tat) {
    printf("Process\tArrival Time\tBurst Time\tCompletion Time\t     TurnAround Time\tWaiting Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t     %d\t\t    %d\t\t    %d\t\t    %d   \t\t%d\n", process[i].p, process[i].arrival_time,
               process[i].burst_time, process[i].completion_time,tat[i],wt[i]);
    }
}
int main(){
    int n;
    printf("enter the number of processes : ");
    scanf("%d",&n);
    struct processes process[n];
    for(int i =0;i<n;i++){
        process[i].p = i;
        printf("enter the arrival time and burst time for process %d : ",i);
        scanf("%d %d",&process[i].arrival_time,&process[i].burst_time);
    }
    int tat[n],wt[n];
    compute(process,n,tat,wt);
    printRes(process,n,wt,tat);
    return 0;
}