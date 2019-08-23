# include <stdio.h>
# define Size 10000
int main() {
	//freopen("in.txt", "r", stdin);
	int data[Size];
	int n;
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		scanf("%d", &data[i]);

	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++){
			if(data[i] > data[j]){
				int temp = data[j];
				data[j] = data[i];
				data[i] = temp;
			}
		}

	for(int i= 0; i < n; i++)
		printf("%d ", data[i]);
	printf("\n");

    int item, flag = 1;
    scanf("%d", &item);
	int left = 0, right = n;
	while(left <= right) {
		int mid = (left+right)/2;
		if(data[mid] == item){
			printf("%d is present %d\n", item, mid);
			flag = 0;
			break;
		} else {
			if(mid < left){
				right = mid-1;
			} else {
				left = mid+1;
			}
		}
	}
	if(flag) printf("%d is not present\n", item);

	return 0;
}