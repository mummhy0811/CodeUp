#include<stdio.h>
int main(void) {
	int n, num;
	int std[10000] = {0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &std[i]);
	for (int i = n-1; i>=0; i--) printf("%d ",std[i]);
	return 0;
}
