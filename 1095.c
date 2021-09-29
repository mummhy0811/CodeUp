#include<stdio.h>
int main(void) {
	int n;
	int std[10000] = {0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &std[i]);
	int min = std[0];
	for (int i = 1; i < n; i++) if (min > std[i]) min = std[i];
	printf("%d", min);
	return 0;
}
