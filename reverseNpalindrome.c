// print reverse and detect whether it's a palindrome

#include<stdio.h>

int main () {

    int digitArray[] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int number, copy, reverse = 0, i;
    printf("Enter a number: ");
    scanf(" %d", &number);
    copy = number;
    for (i = 0; copy / 10 != 0; ++i) {

        digitArray[i] = copy % 10;
        copy = copy / 10;
    }
    digitArray[i] = copy;
    /*for (i = 0; i < 10; ++i)
        printf("%d ", digitArray[i]);*/
    for (i = 0; digitArray[i] != -1; ++i) {

        reverse = reverse*10 + digitArray[i];
    }
    printf("%d is reverse\n", reverse);
    if (reverse = number)
        printf("The number, %d is a palindrome", number);


    return 0;
}
