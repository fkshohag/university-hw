# include <stdio.h>
int main() {
	int A, B, temp;
	scanf("%d %d", &A, &B);
	temp = A;
	A = B;
	B = temp;
	printf("%d %d\n", A, B);
	return 0;
}