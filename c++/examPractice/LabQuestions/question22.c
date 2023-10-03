#include <stdio.h>
void main() {
  int size;
  printf("Enter size : ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter elements : ");
  for(int i=0; i<size; i++){
    scanf("%d",&arr[i]);
  }
  int c = 0;
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      for (int k = j + 1; k <= i; k++) {
        if (arr[j] + arr[k] == arr[i]) {
          c++;
          printf("%d %d %d\n", j, k, i);
          break;
        }
      }
    }
  }
  if(c == 0)
    printf("No sequence found");
}