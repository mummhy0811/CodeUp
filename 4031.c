#include <stdio.h>
int main() {
	int n, m1=0, m2=0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &n);
		if (n % 2 == 0) {if (n > m1) m1 = n;}
		else { if (n > m2) m2 = n; }
	}
	printf("%d", m1 + m2);
	return 0;
}
