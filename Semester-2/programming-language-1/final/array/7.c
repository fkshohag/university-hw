# include <stdio.h>
# define Size 10000
int main() {
	freopen("in.txt", "r", stdin);
	int data[Size];
	int n, key;
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		scanf("%d", &data[i]);

	return 0;
}