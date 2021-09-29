#include<stdio.h>
int main(void) {
	int a, b, c;
	long long int i;
	scanf("%d %d %d", &a, &b, &c);
	for (i = 2;; i++) 
		if ((i%a == 0) && (i%b == 0) && (i % c == 0)) break;
	printf("%d", i);
	return 0;
}
