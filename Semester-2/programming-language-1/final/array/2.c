# include <stdio.h>
# define Size 10000
int main() {
	//freopen("in.txt", "r", stdin);
	int data[Size];
	int n;
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		scanf("%d", &data[i]);

	int item, key;
	scanf("%d %d", &item, &key);
	for(int i = n; i >= key; i--) {
		data[i] = data[i-1];
	}
	data[key] = item;

	for(int i = 0; i <= n; i++)
		printf("%d\n", data[i]);

	return 0;
}