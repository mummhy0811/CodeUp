#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n, c, line;
	int** p;
	int* std;
	scanf("%d %d", &n, &c);

	std = (int*)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) scanf("%d", &std[i]);
	
	if (n % c != 0)
		line = n / c + 1;
	else line = n / c;

	p = (int**)malloc(sizeof(int*) * line);
	if (!p) { printf("err\n"); return 0; }
	for (int i = 0; i < line; i++) {
		p[i] = (int*)malloc(sizeof(int) * c);
		if (!p[i]) {
			printf("err\n"); return 0;
		}
	}

	for (int k = 0; k < n; k++) { 
		for (int i = 0; i < n - 1 - k; i++) {
			if (std[i] > std[i + 1]) {
				int tmp = std[i];
				std[i] = std[i + 1];
				std[i + 1] = tmp;
			}
		}
	}
	int k=0,num = 0;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < c; j++) {
			p[i][j] = std[k];
			k++;
		}
	}

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < c; j++) {
			if (num < n) {
				printf("%d ", p[i][j]);
				num++;
			}
		}
		printf("\n");
	}

	free(std);
	for (int i = 0; i < line; i++) free(p[i]);
	free(p);
	return 0;
}
