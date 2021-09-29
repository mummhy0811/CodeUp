#include<stdio.h>
int main(void) {
	unsigned int h;
	int b, c, s;
	double mb;
	scanf("%d %d %d %d", &h, &b, &c, &s);
	mb = ((((double)h * (double)b * (double)c * (double)s)/8.0)/1024.0)/1024.0;
	printf("%.1lf MB", mb);
	return 0; 
}
