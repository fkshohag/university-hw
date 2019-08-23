# include <stdio.h>
# define Size 10000
int main() {
	//freopen("in.txt", "r", stdin);
	int data[Size];
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &data[i]);
	int item;
	scanf("%d", &item);
	int flag = 1;
	for(int i = 0; i < n; i++)
		if(data[i] == item) {
			printf("%d is present %d Index\n", item, i);
			flag = 0;
			break;
		}
	if(flag) printf("%d is not present\n", item);

	return 0;
}