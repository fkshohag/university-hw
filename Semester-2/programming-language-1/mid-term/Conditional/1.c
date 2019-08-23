# include <stdio.h>
int main() {
	int a, b, c, max, min;
	scanf("%d %d %d", &a, &b, &c);
	max = a;
	min = a;
	if(b > max)
		max = b;
	if(b < min) 
		min = b;
	if(c > max)
		max = c;
	if(c < min)
		min = c;
	printf("%d\n%d\n", max, min);
	return 0;
}