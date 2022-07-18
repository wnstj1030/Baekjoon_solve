#include <stdio.h>

int main(void) {
  int A;
  scanf("%d" , &A);
  //윗부분을 출력하는과정 
for(int i=1;i<A;i++){
  //*을 출력하는과정
  for(int k=0;k<i;k++){
    printf("*");
  }
  //공백을 출력하는 과정
  for(int k=0;k<2*A-2*i;k++){
    printf(" ");
  }
  //2번째 별을 출력하는과정
  for(int k=0;k<i;k++){
    printf("*");
  }
  printf("\n");
}
//아랫부분을 출력하는과정
for(int i=A;i>0;i--){
  //*을 출력하는과정
  for(int k=0;k<i;k++){
    printf("*");
  }
  //공백을 출력하는 과정
  for(int k=0;k<2*A-2*i;k++){
    printf(" ");
  }
  //2번째 별을 출력하는과정
  for(int k=0;k<i;k++){
    printf("*");
  }
  printf("\n");
}
  return 0;
  }