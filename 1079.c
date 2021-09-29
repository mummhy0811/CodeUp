#include<stdio.h>
int main(void) {
	char put;
start:
	scanf("%c ", &put);
	printf("%c\n", put);
	if (put != 'q')goto start;
	return 0; 
}
