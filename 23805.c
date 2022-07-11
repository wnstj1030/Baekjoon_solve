#include <stdio.h>

int main(void) {
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<3*n;j++){
      printf("@");
    }
    for(int k=0;k<n;k++){
      printf(" ");
    }
    for(int l=0;l<n;l++){
      printf("@");
    }
    printf("\n");
  }
  for(int i=0;i<3*n;i++){
    for(int j=0;j<n;j++){
      printf("@");
    }
    for(int k=0;k<n;k++){
      printf(" ");
    }
    for(int l=0;l<n;l++){
      printf("@");
    }
    for(int a=0;a<n;a++){
      printf(" ");
    }
    for(int b=0;b<n;b++){
      printf("@");
    }
    printf("\n");
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("@");
    }
    for(int k=0;k<n;k++){
      printf(" ");
    }
    for(int l=0;l<3*n;l++){
      printf("@");
    }
    printf("\n");
  }
}