#include <stdio.h>

int n, ans1, ans2;
int reverse(n) {
	while (n != 0) {
		ans1 = ans1 * 10 + n % 10;
		n = n / 10;
	}
	return ans1;
}
int add(n)
{
	while (n != 0) {
		ans2 = ans2+n % 10;
		n = n / 10;
	}
	return ans2;
}
int main(void) {
	scanf("%d", &n);
	reverse(n);
	add(n);
	printf("%d\n", ans1);
	printf("%d\n", ans2);
	return 0;
}
