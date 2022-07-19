#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a*2; i++) {

        for (int j = 1; j <= a; j++) {

            if (i % 2 != 0) {

                if (j % 2 != 0) {
                    printf("*");
                }
                else if (j % 2 == 0) {
                    printf(" ");
                }

            }

            else if (i % 2 == 0) {

                if (j % 2 != 0) {
                    printf(" ");
                }
                else if (j % 2 == 0) {
                    printf("*");
                }
            }

        }
        printf("\n");


    }
}