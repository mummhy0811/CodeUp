#include <stdio.h>

long long int n, m;
long long int ans = 0;
long long int f(long long int n, long long int m) {
	ans = n - m;
	if (ans < 0) ans = -ans;
	return ans;
}
int main()
{
  scanf("%lld%lld", &n, &m);
  printf("%lld\n", f(n, m));
}
