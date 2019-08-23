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
	scanf("%d", &item);
	for(int i = 0; i < n; i++)
		if(item == data[i])
			key = i;

	for(int i = key; i < n-1; i++) {
		data[i] = data[i+1];
	}

	for(int i = 0; i < n-1; i++)
		printf("%d\n", data[i]);

	return 0;
}