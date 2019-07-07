# include <stdio.h>
# include <math.h>
int main() {
	int cost, sell, diff;
	scanf("%d %d", &cost, &sell);
	diff = (sell-cost);
	if(diff > 0) {
		printf("profit = %dtk.\n", diff);
	} else {
		printf("loss = %dtk.\n", abs(diff));
	}
	return 0;
}