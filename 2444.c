#include <stdio.h>
int main(void) {
  int A;
  scanf("%d", &A);
    for(int i=0;i<A;i++){
      for(int j=0;j<A-i-1;j++){
      printf(" ");
    }
    for(int k=0;k<2*i+1;k++){
      printf("*");
    }
    printf("\n");
  }
    for(int i=0;i<A;i++){
      for(int j=0;j<i+1;j++){
      printf(" ");
    }
    for(int k=0;k<2*(A-2-i)+1;k++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}