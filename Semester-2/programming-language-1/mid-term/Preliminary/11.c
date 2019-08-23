# include <stdio.h>
# include <math.h>
int main() {
	int n, digits, first_digit, last_digit;
	scanf("%d", &n);
	digits = (int)log10(n);
	first_digit = (int)(n / pow(10, digits)); 
	last_digit = (n % 10);
	printf("%d\n%d\n", first_digit, last_digit);
	return 0;
}