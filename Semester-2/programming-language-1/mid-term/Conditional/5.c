# include <stdio.h>
int main() {
    int year, x, days, whichDay;
    scanf("%d", &year);
    year -= 1900;
    x = year % 4;
    year /= 4;
    days = year * 1461+ x * 365;
    whichDay = days % 7;
    
    switch(whichDay)
      {
        case 0:
        	printf("Monday\n");
        	break;
        case 1:
        	printf("Tuesday\n");
        	break;
        case 2:
        	printf("Wednesday\n");
        	break;
        case 3:
        	printf("Thursday\n");
        	break;
        case 4:
        	printf("Friday\n");
        	break;
        case 5:
        	printf("Saturday\n");
        	break;
        	case 6:
        	printf("Sunday\n");
         	break;
      }
    return 0;
}