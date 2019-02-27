//finding sum of series: 1 + 1/2 + 1/3 + ... + 1/n

#include <stdio.h>
#include <math.h>

int main () {

	printf ("Enter a number less than 100 cuz after that sum is negligible: ");
	float n, sum = 0;
	scanf (" %f", &n);

	for (int i = 0; i < n; ++i) {

		sum = (sum + (1.0 / (i + 1)));
	}
	printf ("%f\n", sum);

	return 0;
}