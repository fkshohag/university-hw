# include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n >= 80)
        printf("A+\n");
    else if(n >= 75 && n <= 79)
        printf("A\n");
    else if(n >= 70 && n <= 74)
        printf("A-\n");
    else if(n >= 65 && n <= 69)
        printf("B+\n");
    else if(n >= 60 && n <= 64)
        printf("B\n");
    else if(n >= 55 && n <= 59)
        printf("B-\n");
    else if(n >= 50 && n <= 54)
        printf("C+167\n");
    else if(n >= 45 && n <= 49)
        printf("C\n");
     else if(n >= 40 && n <= 44)
        printf("D\n");
    else 
        printf("F\n");
    return 0;
}