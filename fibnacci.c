//Fibonacci series

#include<stdio.h>

int main () {

    int buffer1 = 0, buffer2 = 1, fibonacci = 0, position, i;
    printf("Enter position: ");
    scanf(" %d", &position);
    if (position == 1 || position == 2) {

        if (position == 1)
            printf("%d is at position %d in fibonacci series", buffer1, position);
        else if (position == 2)
            printf("%d is at position %d in fibonacci series", buffer2, position);
    }
    else {

        for (i = 0; i < position - 2; ++i) {

            fibonacci = buffer1 + buffer2;
            buffer1 = buffer2;
            buffer2 = fibonacci;
        }
        printf("%d is at position %d in fibonacci series", fibonacci, position);
    }
    return 0;
}
