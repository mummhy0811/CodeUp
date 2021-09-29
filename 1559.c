#include <stdio.h>

int n, m;

long long int ans = 0;
long long int f(int n, int m) {
	ans = (long long int)n + (long long int)m;
	return ans;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}
