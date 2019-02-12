// print all odd numbers are odd numbers until 'N'

#include<stdio.h>

int main () {

	printf ("Enter a number: ");
	int a;
	scanf (" %d", &a);
	for (int i = 0; i < a; ++i){
		if (i % 2 != 0)
			printf("%d ", i);
	}

	return 0;
}
