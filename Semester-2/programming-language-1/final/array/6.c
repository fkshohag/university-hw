# include <stdio.h>
# define Size 10000
int main() {
	int data[Size];
	int n, key;
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		scanf("%d", &data[i]);

	scanf("%d", &key);
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++){
			if(data[i] < data[j]){
				int temp = data[j];
				data[j] = data[i];
				data[i] = temp;
			}
		}
	printf("%d %d\n", data[key-1], data[n-key]);

	return 0;
}