// Swapping using 2 variables

#include<stdio.h>

int main () {
	
	int a, b;
	printf("Enter 2 numbers: ");
	scanf(" %d%d", &a, &b);
	printf("Before swapping a = %d\tb = %d", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter swapping a = %d\tb = %d", a, b);
	
	return 0;
}