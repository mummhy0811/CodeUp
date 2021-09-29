#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n, m, a, b, k;
	int* p=NULL;
	int* ans=NULL;
	scanf("%d %d", &n, &m);
	p = (int*)malloc(sizeof(int*) * n);
	ans = (int*)malloc(sizeof(int*) * m);
	for (int i = 0; i < n; i++) { 
		scanf("%d", &k);
		if (i == 0) p[i] = k;
		else p[i] = p[i - 1] + k;
	};
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		if (a == 1) ans[i] = p[b-1];
		else ans[i] = p[b-1] - p[a - 2];
	}
	for (int i = 0; i < m; i++) printf("%d\n", ans[i]);
	free(p);
	free(ans);
	return 0;
}
