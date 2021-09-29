#include <stdio.h>
int main(void) {
	int n, remain=0;
	scanf("%d", &n);
	int** sc = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) { sc[i] = (int*)malloc(sizeof(int) * 2); scanf("%d %d", &sc[i][0], &sc[i][1]); }
	for (int i = 0; i < n; i++) {
		while (sc[i][1]>=sc[i][0]) 	sc[i][1] -= sc[i][0];
		remain += sc[i][1];
	}
	printf("%d", remain);
	for (int i = 0; i < n; i++) free(sc[i]); free(sc);
	return 0;
}
