//Sum of all digits in a number

#include<stdio.h>

int main () {

    int number, copy, digitArray[10] = {0}, i; // int allows only a 10 digit number at max

    printf("Enter a number: ");
    scanf(" %d", &number);
    copy = number;
    for (i = 0; copy / 10 != 0; ++i) {

        digitArray[i] = copy % 10;
        copy = copy / 10;
    }
    digitArray[i] = copy;
    copy = 0;
    for (i = 0; i < 10; ++i) {

        copy = copy + digitArray[i];
        if (i < 9)
            printf("%d + ", digitArray[i]);
        else
            printf("%d ",digitArray[i]);
    }
    printf("\nSum = %d", copy);
	return 0;
}
