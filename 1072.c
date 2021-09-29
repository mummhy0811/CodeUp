#include<stdio.h>
int main(void) {
	int n, a;
	scanf("%d", &n);
	start:
	scanf("%d", &a);
	printf("%d \n", a);
	if (--n != 0) goto start;
	return 0; 
}
