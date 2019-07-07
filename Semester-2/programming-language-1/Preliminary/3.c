# include <stdio.h>
# define PI 3.1416
int main() {
	freopen("input.text", "r" , stdin);
	int width, length, r, rectangle_area, rectangle_perimeter;
	float circle_area, circle_circumference;
	scanf("%d %d %d", &width, &length, &r);
	rectangle_area = width * length;
	rectangle_perimeter = (width * 2) + (length*2);
	circle_area = (float)PI*(r*r);
	circle_circumference = (float) 2*PI*r;
	printf("%d\n%d\n%f\n%f\n", rectangle_area, rectangle_perimeter, circle_area, circle_circumference);
	return 0;
}