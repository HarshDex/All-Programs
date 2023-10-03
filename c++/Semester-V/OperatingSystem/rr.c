#include <stdio.h>

struct Process {
    int pid;
    int burst_time;
    int remaining_burst;
    int arrival_time;
    int completion_time;
};

void roundRobin(struct Process processes[], int n, int quantum) {
    int time = 0;
    int remaining_processes = n;

    while (remaining_processes > 0) {
        for (int i = 0; i < n; i++) {
            if (processes[i].remaining_burst > 0) {
                if (processes[i].remaining_burst <= quantum) {
                    time += processes[i].remaining_burst;
                    processes[i].completion_time = time;
                    processes[i].remaining_burst = 0;
                    remaining_processes--;
                } else {
                    time += quantum;
                    processes[i].remaining_burst -= quantum;
                }
            }
        }
    }
}

void displayResults(struct Process processes[], int n) {
    printf("Process\tBurst Time\tCompletion Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\n", processes[i].pid, processes[i].burst_time, processes[i].completion_time);
    }
}

int main() {
    int n, quantum;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];
    for (int i = 0; i < n; i++) {
        processes[i].pid = i + 1;
        printf("Enter Arrival Time and Burst Time for Process %d: ", i + 1);
        scanf("%d %d", &processes[i].arrival_time, &processes[i].burst_time);
        processes[i].remaining_burst = processes[i].burst_time;
    }

    printf("Enter the time quantum: ");
    scanf("%d", &quantum);

    roundRobin(processes, n, quantum);
    displayResults(processes, n);

    return 0;
}
