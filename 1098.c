#include<stdio.h>
int main(void) {
	int h, w , n, l, d, x, y;
	int board[101][101] = { {0}, };
	scanf("%d %d", &h, &w);
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		for (int j = 0; j < l; j++) {
			if (d == 1) board[x + j][y] = 1;
			else board[x][y + j] = 1;
		}
	}
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
	return 0;
}
