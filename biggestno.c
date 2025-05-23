#include <stdio.h>

int main() {
    int a, b, c, big;

    printf("\n Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);  // Example input: 6 4 7

    if (a > b) {
        if (a > c)
            big = a;
        else
            big = c;
    } else if (b > c) {
        big = b;
    } else {
        big = c;
    }

    printf("\n The largest number is: %d", big);

    return 0;
}

op:-
Enter 3 numbers: 6 4 7

The largest number is: 7