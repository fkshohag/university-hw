# include <stdio.h>
# define Size 1000

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
	int n;
	scanf("%d", &n);
	int data[Size];
	for(int i = 0 ; i < n; i++) 
		scanf("%d", &data[i]);

	int ans_gcd = gcd(data[0], data[1]);
	int ans_lcm = lcm(data[0], data[1]);

	for(int i = 2; i < n; i++) {
		ans_gcd = gcd(ans_gcd, data[i]);
		ans_lcm = lcm(ans_lcm, data[i]);
	}

	printf("%d %d\n", ans_gcd, ans_lcm);

	return 0;
}