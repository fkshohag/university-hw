# include <stdio.h>
# include <math.h>
#define PI 3.1416

int main() {
	float r,a,b, ans;
	a = 67.1, b = 4.8, r = 2.5;
	ans = sqrt(PI*(r*r)) + 2 * (a*a) * b;
	printf("%f", ans);
	return 0;
}
