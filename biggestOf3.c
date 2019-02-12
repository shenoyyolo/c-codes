//Determine the biggest of 3 numbers

#include<stdio.h>

int main () {
	
	int a, b, c;
	printf ("Enter 3 numbers: ");
	scanf (" %d%d%d", &a, &b, &c);
	if (a >= b && a >= c) 
		printf("%d is the biggest\n", a);
	if (b >= c && b >= a)
		printf("%d is the biggest\n", b);
	if (c >= a && c >= b)
		printf("%d is the biggest\n", c);
	return 0;
}