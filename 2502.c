#include <stdio.h>
 
int fibo(int n) {
    int ret = 1;
    if (n == 1 || n == 2)
        return ret;
 
    int x=1, y=1;
    for (int i = 3; i <= n; ++i) {
        ret = x + y;
        x = y, y = ret;
    }
    return ret;
}
 
int main() {
    int D, K, A = 1, B, sum;
    scanf("%d %d", &D, &K);
 
    int x = fibo(D - 2), y = fibo(D - 1);
    while (1) {
        sum = 0;
        sum += x * A;
        B = 1;
        while (1) {
            sum += y * B;
            if (sum > K) break;
 
            if (sum == K) {
                printf("%d\n", A);
                printf("%d\n", B);
                return 0;
            }
            sum -= y * B;
            B++;
        }
        A++;
    }
}