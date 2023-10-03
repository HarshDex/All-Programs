#include <stdio.h>
int partition(int arr[],int l, int h){
  int i=l-1;
  int pivot=arr[h];
  for(int k=l; k<h; k++){
    if(arr[k] <= pivot){
      i++;
      int temp=arr[k];
      arr[k]=arr[i];
      arr[i]=temp;
    }
  }
  i++;
  int temp=arr[h];
  arr[h]=arr[i];
  arr[i]=temp;
  return i;
}
int quicksort(int arr[],int l, int h){
  if(l >= h){
    return 0;
  }
  int part = partition(arr,l,h);
  quicksort(arr,  l,  part-1);
  quicksort(arr,part+1, h);
}
void check(int arr[],int size){
  for(int i=0;i<size-1; i++){
    if(arr[i]==arr[i+1]){
      printf("YES");
      return;
    }
  }
  printf("NO");
}

int main(void) {
  int size;
  printf("enter size : ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter elements : ");
  for(int i=0; i<size; i++){
    scanf("%d",&arr[i]);
  }
  quicksort(arr,0,size-1);
  check(arr,size);
  return 0;
}