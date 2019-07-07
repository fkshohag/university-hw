# include <stdio.h>
int main() {
	int n, reminder, sum = 0;
	scanf("%d", &n);
	while(n) {
		reminder = n % 10;
		n /= 10;
		sum += reminder;
	}
	printf("%d\n", sum);
	return 0;
}