# include <stdio.h>
int main() {
	freopen("input.text", "r" , stdin);
	int distance_km, meters;
	double feet, inch, centimeters;
	scanf("%d", &distance_km);
	meters = (distance_km * 1000); 
	feet = (double)meters * 3.28084;
	inch = (feet * 12);
	centimeters = (inch * 2.54);
	printf("%d\n%lf\n%lf\n%lf\n", meters, feet, inch, centimeters);
	return 0;
}