# include <stdio.h>
int main() {
	int sum = 0;
	int n = 100;
	int counter = 7;
	for(int i = 1; i <= n; i++){
		sum += counter;
		counter += 13;
	}
	printf("%d\n", sum);
	return 0;
}