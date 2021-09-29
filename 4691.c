#include <stdio.h>
#include<stdlib.h>

int get_money(int* p[4], int n) {
	int num=0, cnt = 0;
	for (int j = 0; j < 3; j++) {
		for (int k = j + 1; k < 4; k++) {
			if (p[n][j] == p[n][k]) cnt++; num = p[n][j];
		}
	}
	if (cnt == 0) return p[n][3] * 100;
	else if (cnt == 1) return 1000 + num * 100;
	else if (cnt == 2) return 2000 + 500 * ((p[n][0] + p[n][1] + p[n][2] + p[n][3]) / 2);
	else if (cnt == 6) return 50000 + num * 5000;
	else return 10000 + num * 1000;
}
int main(void) {
	int n, m=0, max=0;
	scanf("%d", &n);
	int** p = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++) {
		p[i] = (int*)malloc(4 * sizeof(int));
		scanf("%d %d %d %d", &p[i][0], &p[i][1], &p[i][2], &p[i][3]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = j+1; k < 4; k++) {
				if (p[i][j] > p[i][k]) {
					int tmp = p[i][j];
					p[i][j] = p[i][k];
					p[i][k] = tmp;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		m = get_money(p, i);
		if (max < m) max = m;
	}
	printf("%d", max);
	for (int i = 0; i < n; i++) free(p[i]);
	free(p);
	return 0;
}
