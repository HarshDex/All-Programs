#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
  int n = 10;
  int f = fork();
  if(f > 0){
    int psum = 0;
    for(int i =0;i<n;i++){
        if(i % 2 == 0) psum+=i;
    }
    printf("\nparent even sum : %d",psum);
  }
  else{
    int csum = 0;
    for(int i =0;i<n;i++){
        if(i % 2 != 0) csum+=i;
    }
    printf("\nchild odd sum : %d",csum);
  }
}