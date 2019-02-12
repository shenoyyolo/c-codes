// print whether given number is odd or even

#include<stdio.h>

int main () {
	
	int a;

	printf("Enter a number: ");
	scanf(" %d", &a);
	if (a % 2 == 0)
		printf ("\n%d is even", a);
	else 
		printf("\n%d is odd", a);
	return 0;
}