#include<stdio.h>

int main () {
	
	int array[10];
	printf("Enter the elements: ");
	for (int i = 0; i < 10; ++i) 
		scanf(" %d", &array[i]);

	printf("\nEnter the element to be searched: ");
	int x, result[10];
	for (int i = 0; i < 10; ++i)
		result[i] = -1;
	scanf(" %d", &x);
	for (int i = 0; i < 10; ++i) {

		if (x == array[i])
			result[i] = 1;
	}

	for (int i = 0; i < 10; ++i)
		if (result[i] == 1)
			printf("\n%d found at position %d\n", x, (i + 1));

		return 0;
}