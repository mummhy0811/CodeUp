#include <stdio.h>

long long int n;

long long int ans=0;
long long int f(long long int n) {
	while (n!=0) {
		ans = ans*10 + n % 10;
		n = n / 10;
	}
	return ans;
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}
