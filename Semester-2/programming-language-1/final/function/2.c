# include <stdio.h>

int gcd(int a, int b) {
	int temp;
	while(a % b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return b;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	//freopen("in.txt", "r", stdin);
	int a, b;
	scanf("%d %d", &a, &b);
	int ans = lcm(a, b);
	printf("%d\n", ans);
	return 0;
}