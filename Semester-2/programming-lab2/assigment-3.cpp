# include <stdio.h>
int main() {
	//freopen("in.text", "r", stdin);
	int a,b,c,d,max;
	char number;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	max = a;
	if(b > max) {
		max = b;
		number = 'b';
	} else {
		number = 'a';
	}
	if(c > max) {
		max = c;
		number = 'c';
	}
	if(d > max) {
		max = d;
		number = 'd';
	}
	printf("%c = %d is largest number\n",number,max);
	return 0;
}