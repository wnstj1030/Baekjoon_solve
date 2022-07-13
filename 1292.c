#include<stdio.h>
#define NUM 1000
int main() {
	int a, b;
	int sum = 0;
	int arr[NUM] = { 0, };
	int cnt = 0;
	for (int i = 0; i < NUM; i++) {
		for (int j = 0; j < i; j++) {
			if (cnt == NUM)
				break;
			arr[cnt] = i;
			cnt++;
		}
	}
	scanf("%d %d", &a, &b);
	for (int i = a - 1; i < b; i++) {
		sum += arr[i];
	}
	printf("%d", sum);
}