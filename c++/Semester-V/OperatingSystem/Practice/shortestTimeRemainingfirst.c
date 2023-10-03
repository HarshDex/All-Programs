#include<stdio.h>
struct processes{
    int p;
    int arrival_time;
    int burst_time;
    int remaining_time;
    int completion_time;
};
void compute(struct processes process[],int n,int *wt,int *tat){
    int time = 0;
    int complete = 0;
    int shortest;
    while(complete < n){
        shortest = -1;
        for(int i =0;i<n;i++){
            if(process[i].arrival_time <= time && process[i].remaining_time > 0){
                if(shortest == -1 || process[i].remaining_time < process[shortest].remaining_time)
                    shortest = i;
            }
        }
        if(shortest == -1){
            time++;
            continue;
        }
        process[shortest].remaining_time--;
        time++;
        if(process[shortest].remaining_time == 0){
            complete++;
            process[shortest].completion_time = time;
        }
    }
    for(int i=0;i<n;i++){
        tat[i] =  process[i].completion_time - process[i].arrival_time;
        wt[i] = tat[i] - process[i].burst_time;
    }
}
void printRes(struct processes process[], int n,int *wt,int *tat) {
    printf("Process\tArrival Time\tBurst Time\tCompletion Time\t TurnAround Time\tWaiting Time\n");
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum+=wt[i];
        printf("%d\t     %d\t\t    %d\t\t    %d\t\t\t%d   \t\t    %d\n", process[i].p, process[i].arrival_time,
               process[i].burst_time, process[i].completion_time,tat[i],wt[i]);
    }
    printf("\naverage waiting time : %lf\n",(double)(sum/n));
}
int main(){
    int n;
    printf("enter the number of process : ");
    scanf("%d",&n);
    struct processes process[n];
    for(int i =0;i<n;i++){
        process[i].p = i;
        printf("enter the arrival time and burst time of process %d : ",i);scanf("%d %d",&process[i].arrival_time,&process[i].burst_time);
        process[i].remaining_time = process[i].burst_time;
    }
    int wt[n];
    int tat[n];
    compute(process,n,wt,tat);
    printRes(process,n,wt,tat);
    return 0;
}