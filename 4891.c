#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int* p = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) scanf("%d", &p[i]);
	int min = p[0], max = p[0];
	for (int i = 1; i < n; i++) {
		if (p[i] < min) min = p[i];
		else if (p[i] > max) max = p[i];
	}
	printf("%d", max - min);
	free(p);
	return 0;
}
