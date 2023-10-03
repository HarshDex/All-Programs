#include <stdio.h>
int main(void) {
  int size;
  int shift = 0;
  int key, j;
  int compare = 0;
  printf("Enter size : ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter elements : ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 1; i < size; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && key < arr[j]) {
      shift++;
      compare++;
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
    shift++;
  }
  printf("Sorted array : ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\nNO. of shift :  %d\n", shift);
  printf("NO. of comparisio : %d", compare);
  return 0;
}