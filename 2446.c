#include<stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        for (int j = num; j > num - i + 1; j--) {
            printf(" ");
        }
        for (int j = 0; j < 2 * (num - i + 1) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = num; i > 0; i--) {
        if (i == num) {
            continue;
        }
        for (int j = 0; j < i - 1; j++) {
            printf(" ");
        }
        for (int j = 2 * num - 1; j > 2 * i - 2; j--) {
            printf("*");
        }
        printf("\n");
    }
}
