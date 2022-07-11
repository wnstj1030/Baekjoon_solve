#include<stdio.h>
#include<string.h>
int main() {
	char arr[101];
	int N;
	int cnt = 0;
	int check = 1;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", arr);
		check = 1;
		for (int i = 1; i < strlen(arr); i++) {
			if (arr[i] == arr[i - 1])
				continue;
			else
				for (int j = 0; j < i; j++) {
					if (arr[i] == arr[j]) {
						check = 0;
						break;
					}
				}
			if (check == 0)
				break;
		}
		if (check == 1)
			cnt++;
	}
	printf("%d", cnt);
}