//Finding out kind of roots and their value

#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {

    double a, b, c, D, root1, root2;
    printf ("Enter 'a' 'b' and 'c' of a quadratic equation: ");
    scanf (" %lf", &a);
    scanf (" %lf", &b);
    scanf (" %lf", &c);
    D = (b * b) - (4 * a * c);

    if (D >= 0) {

        if (D == 0)
            printf ("Real and equal roots\n");
        else
            printf("Real roots\n");

        root1 = (-b + sqrt (D)) / ( 2 * a);
        root2 = (-b - sqrt (D)) / (2 * a);
        printf ("root1: %lf\n root2: %lf", root1, root2);
    }

    else {

        printf ("Complex roots\n");
        root1 = (-b) / (2 * a);
        root2 = (-b) / (2 * a);

        printf ("root1: %lf + %lfi\nroot2: %lf - %lfi", root1, sqrt (-D), root2, sqrt (-D));
    }

    return 0;
}