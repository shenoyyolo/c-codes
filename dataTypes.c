// Data types in C

#include<stdio.h>
int main () {

    int x;
    for (;;) {

        printf ("\tEnter a pretty big number: ");
        scanf(" %d", &x);
        if (x == 0)
            break;
        printf("The number: %d", x);
    }
    return 0;
}
