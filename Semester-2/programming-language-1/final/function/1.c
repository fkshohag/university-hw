# include <stdio.h>

int power(int x, int n) {
	int y;
	if(n == 0) return 1;
	if(n % 2 == 0){
		y = power(x, n/2);
		return y * y;
	}else {
		return x * power(x, n-1);
	}
}

int main() {
	//freopen("in.txt", "r", stdin);
	int a, b;
	scanf("%d %d", &a, &b);
	int ans = power(a, b);
	printf("%d\n", ans);
	return 0;
}