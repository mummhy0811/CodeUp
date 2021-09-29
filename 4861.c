#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, k, cnt=0;
	scanf("%d %d", &n, &k);
	int** std = (int**)malloc(6 * sizeof(int*));
	for (int i = 0; i < 6; i++) { 
		std[i] = (int*)malloc(2 * sizeof(int)); 
		std[i][0] =0; std[i][1] = 0;
	}
	for (int i = 0; i < n; i++) {
		int sex = 0, grade=0;
		scanf("%d %d", &sex , &grade);
		if (sex == 0) std[grade - 1][0] = std[grade - 1][0] + 1;
		else std[grade - 1][1] = std[grade - 1][1] + 1;
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++) {
			if (std[i][j] % k == 0) cnt = cnt + std[i][j] / k;
			else if (std[i][j] % k > 0) cnt = cnt + (std[i][j] / k) + 1;
		}
	}
	printf("%d", cnt);
	for (int i = 0; i < 6; i++) free(std[i]);
	free(std);
	return 0;
}
