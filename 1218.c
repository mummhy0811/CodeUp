#include<stdio.h>
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (c<a+b) {
		if ((a == b) && (b == c))
			printf("정삼각형");
		else if ((a == b) || (a == c) || (b == c))
			printf("이등변삼각형");
		else if (a * a + b * b == c * c)
			printf("직각삼각형");
		else
			printf("삼각형");
	}
	else
		printf("삼각형아님");
	return 0;
}
