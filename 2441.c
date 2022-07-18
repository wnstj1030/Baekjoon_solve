#include <stdio.h>
int main(void){
  int A;
  scanf("%d", &A);
  for(int i=0;i<A;i++){
    for(int j=0;j<i;j++){
      printf(" ");
    }
    for(int k=0;k<A-i;k++){
      printf("*");
    }
      printf("\n");}
    return 0;
  }                                          