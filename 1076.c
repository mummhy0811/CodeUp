#include<stdio.h>
int main(void) {
	char put;
	scanf("%c", &put);
	int n = (int)put-'a';
	int i = 0;

	do {
		printf("%c ", 'a'+i);
		i++;
		n--;
	} while (n>=0);
	return 0; 
}
