#include <stdio.h>
int main()
{
	freopen("in.txt", "r", stdin);
    int rows, cols;
    scanf("%d", &rows);
    cols = rows;
    for(int i = 1; i <= rows; i++){
    	for(int j = 0; j < cols; j++){
    		printf("* ");
    	}
    	printf("\n");
    }
    return 0;
}