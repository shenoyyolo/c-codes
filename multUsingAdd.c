//Print multiplication using addition

#include<stdio.h>

int main () {

	printf("Enter 2 numbers you want to know the product of: ");
	int a, b, sum = 0;
	scanf (" %d%d", &a, &b);

	if ( a >= b) {

		for (int i = 0; i < b; ++i)
			sum = sum + a;
		printf("%d is the product", sum);
	}
	else {

		for (int i = 0; i < a; ++i)
			sum = sum + b;
		printf("%d is the product\n", sum);
	}
	return 0;
}
