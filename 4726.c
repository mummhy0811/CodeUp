#include <stdio.h>

int main(void) {
	int n, k, sum=0, max;
	scanf("%d %d", &n, &k);
	int* p = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) scanf("%d", &p[i]);
	for (int i = 0; i <= n - k; i++) {
		for (int j = 0; j < k; j++) sum += p[i+j];
		if (i == 0) max = sum;
		else if (max < sum) max = sum;
		sum = 0;
	}
	printf("%d ", max);
	free(p);
	return 0;
}
