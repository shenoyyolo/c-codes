//Finding sum of series 1/1! + 2/2! + 3/3! + ... + N/N!

#include <stdio.h>
#include <stdlib.h>

int factorial (int n) {

    int fact = 1, i;
    for (i = 2; i <= n; ++i) {

        fact = fact * i;
        printf ("%d", fact);
    }
    return fact;
}

int main() {

    printf ("Enter a number: ");
    int sum = 0, n;
    scanf (" %d", &n);
    factorial(n);
    return 0;
}