# include <stdio.h>
int main() {
	freopen("input.text", "r" , stdin);
	float fahrenheit, centigrade;
	scanf("%f", &fahrenheit);
	centigrade = (fahrenheit-32) * 5 / 9;
	printf("%f\n", centigrade);
	return 0;
}