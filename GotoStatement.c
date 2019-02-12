// GOTO statement

#include<stdio.h>

int main () {


	int x = 100;
	if (x == 100) {

		printf("Goto\n");
		goto label;
	}
	printf (" This shouldn't be printed\n");

	label:
		printf("Hiya");
		 x = x + 100;
		 printf ("\tThe new x is %d\n", x);
		 printf("Bye\n");

	return 0;
}
