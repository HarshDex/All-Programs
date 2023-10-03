//it is always premptive cpu scheduling algorithm
#include<stdio.h>
struct processes{
    int p;
    int arrival_time;
    int burst_time;
    int remaining_time;
    int completion_time;
};
void roundRobin(struct processes process[],int n,int quantum,int *wt,int *tat){
    int time = 0;
    int complete = n;
    while(complete > 0){
        for(int i =0;i<n;i++){
            if(process[i].remaining_time > 0){
                if(process[i].remaining_time <= quantum){
                    time += process[i].remaining_time;
                    process[i].remaining_time = 0;
                    process[i].completion_time = time;
                    complete--;
                }
                else{
                    time += quantum;
                    process[i].remaining_time -= quantum;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        tat[i] = process[i].completion_time-process[i].arrival_time;
        wt[i] = tat[i]-process[i].burst_time;
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
        printf("enter the arrival time and burst time for process %d : ",i);scanf("%d %d",&process[i].arrival_time,&process[i].burst_time);
        process[i].remaining_time = process[i].burst_time;
    }
    int quantum;
    printf("enter the time quantum : ");
    scanf("%d",&quantum);
    int wt[n];
    int tat[n];
    roundRobin(process,n,quantum,wt,tat);
    printRes(process,n,wt,tat);
    return 0;
}
