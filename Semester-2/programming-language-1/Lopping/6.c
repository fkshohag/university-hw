# include <stdio.h>
# include <string.h>
# define N 10000
bool prime[N+1];
void sieve() {
	for(int i = 4; i <= N; i += 2)
		prime[i]= false;
	for(int i = 3; i*i <= N; i += 2)
		if(prime[i]) 
			for(int j = i*i ; j <= N; j += i)
				prime[j] = false;
}
int main() {
	freopen("in.txt", "r", stdin);
	memset(prime, true, sizeof(prime));
	int left, right;
	scanf("%d %d", &left, &right);
	sieve();
	for(int i = left; i<= right; i++)
		if(prime[i])
			printf("%d ", i);
	return 0;
}