#include<stdio.h>

int main() {
	int a, b, max = -1000000, min = 1000000;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		if (b > max)
			max = b;
		if (b < min)
			min = b;
	}
	printf("%d %d", min, max);
}