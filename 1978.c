#include <stdio.h>

int main(void){
    int a,b,count = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        for (int j = 2; j <= b; j++){
            if (j == b)
                count++;
            if (b % j == 0)
                break;
        }
    }
    printf("%d",count);
   return 0;
}