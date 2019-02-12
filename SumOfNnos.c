//Print sum of N numbers

#include<stdio.h>

int main () {

    int N, sum = 0;
    printf("Enter a number: ");
    scanf (" %d", &N);
    for (int i = 0; i < N; ++i) {

      sum = sum + i + 1;
    }

    printf ("Sum of %d numbers is %d", N, sum);
    return 0;
}
