// prime numbers until given number

#include<stdio.h>

int main () {
	
	int number, i, j;
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
				else if(j == (i/2))
					printf("%d ", i);
			}
	}
	return 0;
}
