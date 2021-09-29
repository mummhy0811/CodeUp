#include <stdio.h>

int n;

void f(n) {
	for (int i = 1; i < n; i++) {
		if(i!=1)
			if (n % i == 0) goto end;
	}
	printf("prime");
	return 0;
end:
	printf("composite");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
