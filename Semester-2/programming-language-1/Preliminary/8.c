# include <stdio.h>
int main() {
	float mark, total = 0.0, percentage;
	for(int i =0; i < 5; i++) {
		scanf("%f", &mark);
		total += mark; 
	}
	percentage = (total*100)/500;
	printf("%.2f\n%.2f%%\n",total, percentage);
	return 0;
}