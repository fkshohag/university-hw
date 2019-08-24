# include <stdio.h>
# define Size 10000
int main() {
	//freopen("in.txt", "r", stdin);
	int data[Size], unique[Size];
	int n, key;
	int count = 0;
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		scanf("%d", &data[i]);

	int flag;
	for(int i = 0; i < n; i++) {
		flag = 1;
		for(int j = 0; j < count; j++) {
			if(data[i] == data[j]) {
				flag = 0;
				break;
			}
		}
		if(flag) {
			unique[count] = data[i];
			count++;
		}
	}
	for(int i = 0; i < count; i++)
		printf("%d\n", unique[i]);

	return 0;
}