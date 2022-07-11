#include<stdio.h>
int main() {
	int a, b, c, per;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		per = 1;
		scanf("%d %d", &a, &b);
		for (int j = 0; j < a; j++) {
			per *= b - j;
			per /= 1 + j;
		}
		printf("%d\n", per);
	}
}