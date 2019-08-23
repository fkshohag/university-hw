# include <stdio.h>
int main() {
	int basic_salary;
	double salary;
	scanf("%d", &basic_salary);
	salary = double((double)basic_salary + ((30 * basic_salary) / 100) + ((5 * basic_salary) / 100) + (double)1000);
	printf("%lf\n", salary);
	return 0;
}