#include <stdio.h>

int main(void) {
	int m, n, min, sum=0, cnt=0;
	scanf("%d %d", &m, &n);
	min = n;
	for (int i = m; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)  cnt++;
		}
		if (cnt == 2) {
			sum += i;
			if (min == n) min = i;
		}
		cnt = 0;
	}
	printf("%d\n%d", sum, min);
	return 0;
}
