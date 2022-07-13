#include<stdio.h>
int arr[50][50] = { 0, };
int visit[50][50] = { 0, };
int count = 0;
int a, b;
void find(int x, int y);
int main() {
	scanf("%d %d", &a, &b);	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			scanf(" %c",&arr[i][j]);
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			find(i, j);
		}
	}
	printf("%d", count);
}
void find(int x, int y) {
	if (visit[x][y] == 1) {
		return;
	}
	visit[x][y] = 1;
	if (arr[x][y] == '-') {
		if (y == b - 1) {
			count++;
			return;
		}
		else if (arr[x][y + 1] == '|') {
			count++;
			return;
		}
		else {
			find(x, y + 1);
			return;
		}
	}
	else {
		if (x == a) {
			count++;
			return;
		}
		else if (arr[x + 1][y] == '-') {
			count++;
			return;
		}
		else {
			find(x + 1, y);
			return;
		}
	}
}