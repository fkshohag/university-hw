# include <stdio.h>

int is_leap_year(int year) {
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int main() {
	//freopen("in.txt", "r", stdin);
	int year;
	scanf("%d",  &year);

	if(is_leap_year(year))
		printf("Leap year\n");
	else
		printf("Not Leap year\n");

	return 0;
}