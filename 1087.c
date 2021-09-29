#include<stdio.h>
int main(void) {
	int n, sum=0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		sum += i;
		if (sum >= n) break;
	}
	printf("%d", sum);
	return 0; 
}
