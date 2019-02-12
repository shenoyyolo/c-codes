// prime numbers until given number and find the highest number until that number


#include<stdio.h>

int main () {
	
	int number, i, j, highestPrime;
	printf("Enter a number: ");
	scanf(" %d", &number);
	if (number == 2)
		printf("2 ");
	else 
		printf("2 3 ");
	for (i = 2; i <= number; ++i) {

			for (j = 2; j <= (i/2); ++j) {

				if(i % j == 0)
					break;
				else if(j == (i/2)) {
					
					printf("%d ", i);
					highestPrime = i;
				}	
			}
	}
	printf("\n%d is the highest prime number until %d", highestPrime, number);
	return 0;
}
