# include <stdio.h>
int main() {
	int n, reminder, reverse = 0;
	scanf("%d", &n);
	while(n) {
		reminder = n % 10;
		n /= 10;
		reverse = (reverse*10) + reminder; 
	}
	printf("%d\n", reverse);
	return 0;
}