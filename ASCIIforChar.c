#include<stdio.h>
#include<stdlib.h>

int main() {

	char x;
	int n;
	printf("Enter a character: ");
	scanf(" %c", &x);
	n = x;
	printf("%d", n);
	if (n >= 65 && n <= 90) {

		n = n + 32;
	}
	else if (n >= 97 && n <= 122) {

		n = n - 32;
	}
	char a;
	a = n;
	printf("\nThe character you entered is: %c", a);
	return 0;
}
