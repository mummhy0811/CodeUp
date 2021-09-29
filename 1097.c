#include<stdio.h>
int main(void) {
	int board[19][19] = { {0}, };
	int n, x, y;
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++)
			scanf("%d", &board[i][j]);
	}
	scanf("%d", &n);
	for (int k = 0; k < n; k++) {
		scanf("%d %d", &x, &y);
		for (int m = 0; m < 19; m++) {
			if (board[x-1][m] == 0) board[x-1][m] = 1;
			else board[x-1][m] = 0;
		}
		for (int l = 0; l < 19; l++) {
			if (board[l][y-1] == 0) board[l][y-1] = 1;
			else board[l][y-1] = 0;
		}
	}
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++)
			printf("%d ", board[i][j]);
		printf("\n");
	}
	return 0;
}
