#include <stdio.h>
#include<time.h>
int jumpSearch(int arr[], int n, int key) {
    int jump = 2;
    int prev = 0;
    int comparisons = 0;
    while (prev < n && arr[prev] < key) {
        comparisons++;
        prev += jump;
    }
    if (prev >= n || arr[prev] > key) {
        prev -= jump;
        jump = 1;
    }
    while (prev < n && arr[prev] < key) {
        comparisons++;
        prev += jump;
    }
    if (arr[prev] == key) {
        comparisons++;
        return comparisons;
    }
    return -1;
}

int main() {
    clock_t start,end;

    int n ;
    printf("enter the number of elements : ");
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        printf("enter the element : ");
        scanf("%d", &ar[i]);
    }
    int key;
    printf("enter key which you want to search : ");
    scanf("%d", &key);

    start = clock();
    int comparisons = jumpSearch(ar, n, key);
    end = clock();

    if (comparisons == -1)
        printf("Not Present\n");
    else 
        printf("Present %d\n", comparisons);

    double time = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("time taken by the algorithm : %lf",time);
    
    return 0;
}
