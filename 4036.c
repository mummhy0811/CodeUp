#include <stdio.h>

int main(void) {
	int a, b, n, m;
	scanf("%d\n%d", &n, &m);
	a = (n + m) / 2;
	b = (n - m) / 2;
	printf("%d\n%d", a, b);
	return 0;
}
