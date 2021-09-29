#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int* p=NULL;
	int n; //n<=40
	int sum;
	scanf("%d", &n);
	p = (int*)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		if ((i == 0) || (i == 1)) p[i] = 1;
		else p[i] = p[i - 1] + p[i - 2];
	}
	printf("%d", p[n-1]);
	free(p);
	return 0;
}
