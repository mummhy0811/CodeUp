#include<stdio.h>
int main(void) {
	int r, n;
	long long int a;
	scanf("%lld %d %d", &a, &r, &n);
	for (int num = 1; num < n; num++) a = a * r;
	printf("%lld", a);
	return 0; 
}
