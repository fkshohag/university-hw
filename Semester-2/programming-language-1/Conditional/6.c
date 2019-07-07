# include <stdio.h>
int main() {
    int n, reminder, reverse = 0, temp;
    scanf("%d", &n);
    temp = n;
    while(n) {
        reminder = n % 10;
        n /= 10;
        reverse = (reverse*10) + reminder; 
    }
    printf("%d\n", reverse);
    if(temp == reverse) {
        printf("equal\n");
    } else {
        printf("not equal\n");
    }
    return 0;
}