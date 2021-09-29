#include<stdio.h>
int main(void) {
	int a;
	start:
	scanf("%d", &a);
	if (a != 0)
		printf("%d\n", a);
	else goto end;
	goto start;
	end:
	return 0; 
}
