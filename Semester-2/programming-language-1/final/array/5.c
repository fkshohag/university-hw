# include <stdio.h>
# define Size 10000
int main() {
	//freopen("in.txt", "r", stdin);
	int data[Size];
	int n, max, min, median, mode;
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		scanf("%d", &data[i]);
	max = data[0];
	min = data[0];
	for(int i = 1; i < n; i++) {
		if(data[i] > max) max = data[i];
		if(data[i] < min) min = data[i];
	}

	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++){
			if(data[i] > data[j]){
				int temp = data[j];
				data[j] = data[i];
				data[i] = temp;
			}
		}

	median = (n+1) / 2 - 1;
	median = data[median];

	printf("%d %d %d\n",max, min, median);

	return 0;
}