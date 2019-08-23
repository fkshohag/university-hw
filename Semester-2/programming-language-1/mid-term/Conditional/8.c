# include <stdio.h>
int main() {
	freopen("input.text", "r", stdin);
    int hardness, tensile, grade;
    float carbon;
    scanf("%d %f %d", &hardness, &carbon, &tensile);
    if(hardness > 60 && carbon < 0.7 && tensile > 5000)
        grade = 10;
    else if(hardness > 60 && carbon < 0.7)
        grade = 9;
    else if(carbon < 0.7 && tensile > 5000)
        grade = 8;
    else if(hardness > 60 && tensile > 5000)
        grade = 7;
    else if(hardness > 60 || carbon < 0.7 || tensile > 5000)
        grade = 6;
    else
        grade = 5;
    printf("%d\n", grade);

    return 0;
}