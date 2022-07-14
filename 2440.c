#include <stdio.h>
int main(void){
  int A;
  scanf("%d", &A);
  for(int i=0;i<A;i++){
    for(int k=A-i-1;k>=0;k--){
      printf("*");
    }
    printf("\n");
  }
    return 0;
  }