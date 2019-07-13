# include <stdio.h>
# define ll long long
int main() {
	ll n, sum, count = 0, i = 1;
	scanf("%lld", &n);
	while(i) {
		sum = 0;
		for(ll j = 1; j < i; j++) {
			if(i % j == 0) {
				sum += j;
			}
		}
		if(sum == i) {
			printf("%lld ", sum);
			count++;
			if(count == n) return 0;
		}
		i++;
	}
	return 0;
}