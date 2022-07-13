#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Rev(int num);
int main() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("%d", Rev(Rev(n1) + Rev(n2)));
}
int Rev(int num) {
	char arr[1000];
	int i = 0;
	while (num != 0) {
		int n = 0;
		n = num % 10;
		arr[i++] = n + 48;
		num = num / 10;
	}
	arr[i] = "\0";
	return atoi(arr);
}