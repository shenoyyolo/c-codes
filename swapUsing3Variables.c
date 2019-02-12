// Swapping using 3 variables

#include<stdio.h>

int main () {

	int a, b, c;
	printf("Enter two numbers: ");
	scanf (" %d%d", &a, &b);
	printf("Before Swapping  a = %d\tb = %d", a, b);
	c = a;
	a = b;
	b = c;
	printf("\nAfter Swapping  a = %d\tb = %d", a, b);
	return 0;
}